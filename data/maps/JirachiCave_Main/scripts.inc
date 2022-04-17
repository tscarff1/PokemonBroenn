.set LOCALID_JERRY, 2

JirachiCave_Main_MapScripts::
	.byte 0

JirachiCave_Main_Jirachi::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_JIRACHI, 25, ITEM_STARDUST
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, JirachiCave_Main_EventScript_DefeatedJirachi
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, JirachiCave_Main_EventScript_RanFromJirachi
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, JirachiCave_Main_EventScript_RanFromJirachi
	setflag FLAG_CAUGHT_JIRACHI
	release
	end

JirachiCave_Main_EventScript_DefeatedJirachi::
	setvar VAR_0x8004, SPECIES_JIRACHI
	goto Common_EventScript_LegendaryFlewAway
	end

JirachiCave_Main_EventScript_RanFromJirachi::
	setvar VAR_0x8004, SPECIES_JIRACHI
	goto Common_EventScript_LegendaryFlewAway
	end


JirachiCave_Main_JerryTrigger::
	lockall
	addobject LOCALID_JERRY
	applymovement LOCALID_JERRY, JirachiCave_Main_Movement_JerryEnter
	waitmovement 0
	msgbox JirachiCave_Main_Text_JerryFoundJirachi, MSGBOX_DEFAULT
	setvar VAR_WISH_TAG_PROGRESS, 9
	clearflag FLAG_HIDE_JERRY_WISH_CAVE
	releaseall
	end

JirachiCave_Main_Jerry::
	lock
	msgbox JirachiCave_Main_Text_JerryFoundJirachi, MSGBOX_DEFAULT
	release
	end

JirachiCave_Main_Movement_JerryEnter:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

JirachiCave_Main_Text_JerryFoundJirachi:
	.string "Incredible! We've really found\n"
	.string "JIRACHI! My wish has come true.\p"
	.string "The legends were all real, I\n"
	.string "almost can't believe it. I think\p"
	.string "I'll stick around and see if I\n"
	.string "can learn anything more here.$"


