PeterGym_MapScripts::
	.byte 0

PeterGym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, PeterGym_EventScript_GymGuidePostVictory
	msgbox PeterGym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

PeterGym_EventScript_GymGuidePostVictory::
	msgbox PeterGym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

PeterGym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE03_GET, PeterGym_EventScript_GymStatueCertified
	goto PeterGym_EventScript_GymStatue
	end

PeterGym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE03_GET, PeterGym_EventScript_GymStatueCertified
	goto PeterGym_EventScript_GymStatue
	end

PeterGym_EventScript_GymStatueCertified::
	msgbox PeterGym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

PeterGym_EventScript_GymStatue::
	msgbox PeterGym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

PeterGym_Text_GymGuideAdvice:
	.string "Hey, how's it going, CHAMPION-\n"
	.string "bound {PLAYER}?\p"
	.string "PETER, the LEADER of MAUVILLE\n"
	.string "GYM, uses WATER-type POKéMON.\p"
	.string "He's also a POKéMON BREEDER!\n"
	.string "So he keeps the gym warm using\p"
	.string "steam! Watch out for the water\n"
	.string "currents the heat makes!$"

PeterGym_Text_GymGuidePostVictory:
	.string "Whoa, you really know how to go\n"
	.string "with the flow!$"

PeterGym_Text_GymStatue:
	.string "MAUVILLE CITY POKéMON GYM\p"
	.string "PETER'S CERTIFIED TRAINERS:\n"
	.string "TYLER$"

PeterGym_Text_GymStatueCertified:
	.string "MAUVILLE CITY POKéMON GYM\p"
	.string "PETER'S CERTIFIED TRAINERS:\n"
	.string "TYLER, {PLAYER}$"

PeterGym_EventScript_Kirk::
	trainerbattle_single TRAINER_KIRK, PeterGym_Text_KirkIntro, PeterGym_Text_KirkDefeat
	msgbox PeterGym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
	end

PeterGym_Text_KirkIntro:
	.string "My POKéMON are as rough and tough\n"
	.string "as the ocean! Yeahah!$"

PeterGym_Text_KirkDefeat:
	.string "Wow, that means you're even tougher\n"
	.string "than the ocean, man!$"

PeterGym_Text_KirkPostBattle:
	.string "POKéMON and rock, it's all about heart,\n"
	.string "whoa-yeah!$"

PeterGym_EventScript_NotTrainer::
	lockall
	msgbox PeterGym_Text_NotTrainer, MSGBOX_DEFAULT
	releaseall
	end

PeterGym_Text_NotTrainer:
	.string "Me? I'm not a trainer, I'm a breeder!$"
	
PeterGym_EventScript_Vivian::
	trainerbattle_single TRAINER_VIVIAN, PeterGym_Text_VivianIntro, PeterGym_Text_VivianDefeat
	msgbox PeterGym_Text_VivianPostBattle, MSGBOX_AUTOCLOSE
	end

PeterGym_Text_VivianIntro:
	.string "Prepare to get rocked!$"

PeterGym_Text_VivianDefeat:
	.string "This is a WATER-type gym?$"

PeterGym_Text_VivianPostBattle:
	.string "This is not a ROCK-type gym?$"

PeterGym_EventScript_Ben::
	trainerbattle_single TRAINER_BEN, PeterGym_Text_BenIntro, PeterGym_Text_BenDefeat
	msgbox PeterGym_Text_BenPostBattle, MSGBOX_AUTOCLOSE
	end

PeterGym_Text_BenIntro:
	.string "I've raised these POKéMON since\n"
	.string "they were just EGGs, We won't \p"
	.string "lose!$"

PeterGym_Text_BenDefeat:
	.string "We lost?!$"

PeterGym_Text_BenPostBattle:
	.string "You must take really good care\n"
	.string "of your POKéMON.$"

PeterGym_EventScript_AmTrainer::
	lockall
	msgbox PeterGym_Text_AmTrainer, MSGBOX_DEFAULT
	releaseall
	end

PeterGym_Text_AmTrainer:
	.string "Me? I am a trainer!\n"
	.string "... ... ...\p"
	.string "But my POKéMON haven't\n"
	.string "hatched yet...$"

PeterGym_EventScript_Angelo::
	trainerbattle_single TRAINER_ANGELO, PeterGym_Text_AngeloIntro, PeterGym_Text_AngeloDefeat
	msgbox PeterGym_Text_AngeloPostBattle, MSGBOX_AUTOCLOSE
	end

PeterGym_Text_AngeloIntro:
	.string "I'm crazy about WATER-type\n"
	.string "POKéMON!$"

PeterGym_Text_AngeloDefeat:
	.string "I'm not crazy about losing.$"

PeterGym_Text_AngeloPostBattle:
	.string "Am I just crazy?$"

PeterGym_EventScript_Shawn::
	trainerbattle_single TRAINER_SHAWN, PeterGym_Text_ShawnIntro, PeterGym_Text_ShawnDefeat
	msgbox PeterGym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
	end

PeterGym_Text_ShawnIntro:
	.string "I trained under PETER!\n"
	.string "There ain't no way I'll lose easily!$"

PeterGym_Text_ShawnDefeat:
	.string "Well, I didn't lose easily!$"

PeterGym_Text_ShawnPostBattle:
	.string "PETER, our GYM LEADER, has been\n"
	.string "around for a long, long time.\p"
	.string "He was battling even before your\n"
	.string "daddy was born, that tough coot.$"

PeterGym_EventScript_Peter::
	trainerbattle_single TRAINER_PETER, PeterGym_Text_PeterIntro, PeterGym_Text_PeterDefeat, PeterGym_EventScript_PeterDefeated, NO_MUSIC
	goto_if_unset FLAG_RECEIVED_TM34, PeterGym_EventScript_GiveWaterPulse2
	msgbox PeterGym_Text_PeterPostBattle, MSGBOX_DEFAULT
	release
	end

PeterGym_EventScript_PeterDefeated::
	message PeterGym_Text_ReceivedSteamBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox PeterGym_Text_ExplainSteamBadgeTakeThis, MSGBOX_DEFAULT
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
	clearflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
	setflag FLAG_DEFEATED_MAUVILLE_GYM
	setflag FLAG_BADGE03_GET
	addvar VAR_PETALBURG_GYM_STATE, 1
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
	setvar VAR_0x8008, 3
	call Common_EventScript_SetGymTrainers
	special DrawWholeMapView
	playse SE_UNLOCK
	call PeterGym_EventScript_GiveWaterPulse
	closemessage
	release
	end

PeterGym_EventScript_GiveWaterPulse2::
	giveitem ITEM_TM03
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox PeterGym_Text_ExplainWaterPulse, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM03
	release
	end

PeterGym_EventScript_GiveWaterPulse::
	giveitem ITEM_TM03
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	msgbox PeterGym_Text_ExplainWaterPulse, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM03
	return


PeterGym_Text_PeterIntro:
	.string "It's really tough managing a GYM and\n"
	.string "keeping up on POKéMON breeding!\p"
	.string "Say... Do you want to run the GYM\n"
	.string "so I can focus on breeding\p"
	.string "What's that?\n"
	.string "I'm not allowed to do that?\p"
	.string "Okay, how about a battle\n"
	.string "instead!$"

PeterGym_Text_PeterDefeat:
	.string "Ahahahah!\n"
	.string "Fine, I lost!\p"
	.string "Take this BADGE!$"

PeterGym_Text_ReceivedSteamBadge:
	.string "{PLAYER} received the STEAM BADGE\n"
	.string "from PETER.$"

PeterGym_Text_ExplainSteamBadgeTakeThis:
	.string "With the STEAM BADGE, POKéMON can\n"
	.string "use ROCK SMASH out of battle.\p"
	.string "And, it will make your POKéMON a little\n"
	.string "bit faster, too.\p"
	.string "Hmm…\n"
	.string "You should take this, too!$"

PeterGym_Text_ExplainWaterPulse:
	.string "That TM03 there contains WATER PULSE.\p"
	.string "It's a dirty move you can use to\n"
	.string "confuse your opponents. Definitely\p"
	.string "pay to win.$"

PeterGym_Text_PeterPostBattle:
	.string "The next GYM is in LAVARIDGE. Say hi\n"
	.string "to Flannery for me? Like actually?$"