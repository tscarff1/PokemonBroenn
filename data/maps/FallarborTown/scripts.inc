.set LOCALID_JERRY, 5

FallarborTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_OnTransition
	.byte 0

FallarborTown_OnTransition:
	setflag FLAG_VISITED_FALLARBOR_TOWN
	setvar VAR_CONTEST_HALL_STATE, 0
	clearflag FLAG_CONTEST_SKETCH_CREATED
	goto_if_eq VAR_WISH_TAG_PROGRESS, 6, FallarborTown_EventScript_JerryMeeting
	end

FallarborTown_EventScript_ExpertM::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_EventScript_ExpertMNormal
	msgbox FallarborTown_Text_ShadyCharactersCozmosHome, MSGBOX_DEFAULT
	release
	end

FallarborTown_EventScript_ExpertMNormal::
	msgbox FallarborTown_Text_RegionKnownForMeteors, MSGBOX_DEFAULT
	release
	end

FallarborTown_EventScript_Girl::
	msgbox FallarborTown_Text_MyPreciousAzurill, MSGBOX_NPC
	end

FallarborTown_EventScript_Gentleman::
	msgbox FallarborTown_Text_HaveYouChallengedFlannery, MSGBOX_NPC
	end

FallarborTown_EventScript_Azurill::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
	msgbox FallarborTown_Text_Azurill, MSGBOX_DEFAULT
	waitmoncry
	release
	end

FallarborTown_EventScript_BattleTentSign::
	msgbox FallarborTown_Text_BattleTentSign, MSGBOX_SIGN
	end

FallarborTown_EventScript_TownSign::
	msgbox FallarborTown_Text_TownSign, MSGBOX_SIGN
	end

FallarborTown_EventScript_MoveTutorSign::
	msgbox FallarborTown_Text_MoveTutorSign, MSGBOX_SIGN
	end

FallarborTown_Text_ShadyCharactersCozmosHome:
	.string "Something's happening,\n"
	.string "and I don't like it!\p"
	.string "I've seen shady characters wandering\n"
	.string "in and out of PROF. COZMO's home…$"

FallarborTown_Text_RegionKnownForMeteors:
	.string "This region's been known for meteors\n"
	.string "since the olden days.\p"
	.string "They say METEOR FALLS was gouged out\n"
	.string "by a falling meteorite long ago.$"

FallarborTown_Text_MyPreciousAzurill:
	.string "See! Take a look!\n"
	.string "This is my precious AZURILL!\p"
	.string "It's slick and smooth and plushy, too!$"

FallarborTown_Text_Azurill:
	.string "AZURILL: Rooreelooo.$"

FallarborTown_Text_HaveYouChallengedFlannery:
	.string "Have you already challenged FLANNERY,\n"
	.string "the LEADER of LAVARIDGE GYM?\p"
	.string "The girl's grandfather was famous.\n"
	.string "He was one of the ELITE FOUR in the\l"
	.string "POKéMON LEAGUE at one point.\p"
	.string "It wouldn't surprise me to see FLANNERY\n"
	.string "become a great TRAINER in her own\l"
	.string "right.$"

FallarborTown_Text_BattleTentSign:
	.string "BATTLE TENT FALLARBOR SITE\n"
	.string "“May the Greatest Teams Gather!”$"

FallarborTown_Text_TownSign:
	.string "FALLARBOR TOWN\n"
	.string "“A farm community with small gardens.”$"

FallarborTown_Text_MoveTutorSign:
	.string "MOVE TUTOR'S HOUSE\n"
	.string "“New moves taught to POKéMON.”$"

FallarborTown_EventScript_JerryTalk::
	msgbox FallarborTown_Text_Jerry_WhereCosmo, MSGBOX_NPC
	end

FallarborTown_EventScript_JerryAppears::
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_EventScript_DoNothing
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	opendoor 6,17
	waitdooranim
	setobjectxyperm LOCALID_JERRY, 6, 17
	addobject LOCALID_JERRY
	applymovement OBJ_EVENT_ID_PLAYER, FallarborTown_Movement_PushPlayerDown
	applymovement LOCALID_JERRY, FallarborTown_Movement_JerryExitHouse
	waitmovement 0
	closedoor 6,17
	waitdooranim
	msgbox FallarborTown_Text_JerryCosmoNoHelp, MSGBOX_NPC
	playse SE_PIN
	applymovement LOCALID_JERRY, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_JERRY, Common_Movement_Delay48
	msgbox FallarborTown_Text_JerryInvitePlayer, MSGBOX_NPC
	applymovement LOCALID_JERRY, FallarborTown_Movement_JerryExitAfterHouse
	waitmovement 0
	removeobject LOCALID_JERRY
	setvar VAR_WISH_TAG_PROGRESS, 4
	setflag FLAG_HIDE_JERRY_FALLARBOR
	end

@This just makes the trigger not do anything if COSMO is not back from Meteor Falls
FallarborTown_EventScript_DoNothing::
	release
	end

FallarborTown_Movement_PushPlayerDown:
	lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end

FallarborTown_Movement_PlayerWatchJerryExit:
	delay_16
	walk_in_place_faster_left
	step_end

FallarborTown_Movement_JerryExitHouse:
	delay_8
	walk_down
	step_end

FallarborTown_Movement_JerryExitAfterHouse:
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

FallarborTown_Text_Jerry_WhereCosmo:
	.string "Have you seen the scientist who\n"
	.string "lives here? I'd like to see if he\p"
	.string "knows anything about a certain POKéMON.$"

FallarborTown_Text_JerryCosmoNoHelp:
	.string "Hmm... COZMO doesn't seem to have learned\n"
	.string "any new information...\p"
	.string "Say, you are a Trainer, right? Do you know\n"
	.string "anything about the POKéMON, JIRACHI?$"

FallarborTown_Text_JerryInvitePlayer:
	.string "Oh! You've met my grandmother! Well, if\n"
	.string "you would like to help me in my search\p"
	.string "for JIRACHI, I will be visting the\n"
	.string "house of the FOSSIL MANIAC next. I \p"
	.string "believe JIRACHI may be sleeping deep\n"
	.string "underground!$"

FallarborTown_EventScript_JerryMeeting::
	lockall
	applymovement LOCALID_JERRY, FallarborTown_Movement_JerryToMeeting

FallarborTown_Movement_JerryToMeeting:	