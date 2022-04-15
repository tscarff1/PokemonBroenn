.set LOCALID_FOSSIL_MANIAC, 1
.set LOCALID_JERRY, 2

Route114_FossilManiacsTunnel_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_FossilManiacsTunnel_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, Route114_FossilManiacsTunnel_OnLoad
	.byte 0

Route114_FossilManiacsTunnel_OnTransition:
	call_if_set FLAG_SYS_GAME_CLEAR, Route114_FossilManiacsTunnel_EventScript_MoveFossilManiac
	end

Route114_FossilManiacsTunnel_EventScript_MoveFossilManiac::
	setobjectxyperm LOCALID_FOSSIL_MANIAC, 6, 5
	setobjectmovementtype LOCALID_FOSSIL_MANIAC, MOVEMENT_TYPE_FACE_DOWN
	return

Route114_FossilManiacsTunnel_OnLoad:
	call_if_unset FLAG_SYS_GAME_CLEAR, Route114_FossilManiacsTunnel_EventScript_CloseDesertUnderpass
	end

Route114_FossilManiacsTunnel_EventScript_CloseDesertUnderpass::
	setmetatile 6, 1, METATILE_Fallarbor_RedRockWall, TRUE
	setmetatile 6, 2, METATILE_Fallarbor_RedRockWall, TRUE
	return

Route114_FossilManiacsTunnel_EventScript_ManiacMentionCaveIn::
	lockall
	applymovement LOCALID_FOSSIL_MANIAC, Common_Movement_WalkInPlaceFasterUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox Route114_FossilManiacsTunnel_Text_NotSafeThatWay, MSGBOX_DEFAULT
	setvar VAR_FOSSIL_MANIAC_STATE, 2
	releaseall
	end

Route114_FossilManiacsTunnel_EventScript_FossilManiac::
	lock
	faceplayer
	goto_if_eq VAR_WISH_TAG_PROGRESS, 4, Route114_FossilManiacsTunnel_EventScript_Jerry
	goto_if_set FLAG_RECEIVED_REVIVED_FOSSIL_MON, Route114_FossilManiacsTunnel_EventScript_PlayerRevivedFossil
	checkitem ITEM_ROOT_FOSSIL
	goto_if_eq VAR_RESULT, TRUE, Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil
	checkitem ITEM_CLAW_FOSSIL
	goto_if_eq VAR_RESULT, TRUE, Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil
	msgbox Route114_FossilManiacsTunnel_Text_LookInDesertForFossils, MSGBOX_DEFAULT
	release
	end

Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil::
	msgbox Route114_FossilManiacsTunnel_Text_DevonCorpRevivingFossils, MSGBOX_DEFAULT
	release
	end

Route114_FossilManiacsTunnel_EventScript_PlayerRevivedFossil::
	msgbox Route114_FossilManiacsTunnel_Text_FossilsAreWonderful, MSGBOX_DEFAULT
	release
	end

Route114_FossilManiacsTunnel_Text_LookInDesertForFossils:
	.string "I'm the FOSSIL MANIAC…\n"
	.string "I'm a nice guy who loves FOSSILS…\p"
	.string "Do you want a FOSSIL?\p"
	.string "But the FOSSILS around these parts all\n"
	.string "belong to me… None for you…\p"
	.string "If you can't bear to go without\n"
	.string "a FOSSIL, look in a desert where there\l"
	.string "are boulders and sand that may hide\l"
	.string "FOSSILS…$"

Route114_FossilManiacsTunnel_Text_DevonCorpRevivingFossils:
	.string "You found a FOSSIL, didn't you?\n"
	.string "That's so nice… It's so dreamy…\p"
	.string "What are you going to do with that\n"
	.string "FOSSIL?\p"
	.string "From what I've heard, DEVON is doing\n"
	.string "research on reviving POKéMON from\l"
	.string "FOSSILS…\p"
	.string "I love my FOSSILS, so I would never\n"
	.string "do anything like that…$"

Route114_FossilManiacsTunnel_Text_FossilsAreWonderful:
	.string "FOSSILS are so… Wonderful…\n"
	.string "It's so dreamy…$"

Route114_FossilManiacsTunnel_Text_NotSafeThatWay:
	.string "Oh…\n"
	.string "It's not safe that way…\p"
	.string "I was digging away, you see…\n"
	.string "When the whole wall collapsed…\p"
	.string "I think there's a giant cavern\n"
	.string "underneath now…\p"
	.string "But I've left it alone because I don't\n"
	.string "think there are any FOSSILS there…$"

Route114_FossilManiacsTunnel_EventScript_Jerry::
	msgbox Route114_FossilManiacsTunnel_Text_FoundWeirdObject, MSGBOX_DEFAULT
	playse SE_PIN
	applymovement LOCALID_FOSSIL_MANIAC, Common_Movement_QuestionMark
	waitmovement 0
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_0, 6, Route114_FossilManiacsTunnel_EventScript_JerryEnterLeft
	call_if_eq VAR_TEMP_0, 5, Route114_FossilManiacsTunnel_EventScript_JerryEnterRight
	msgbox Route114_FossilManiacsTunnel_Text_GoAtOnce, MSGBOX_DEFAULT
	applymovement LOCALID_JERRY, Route114_FossilManiacsTunnel_Movement_JerryExit
	waitmovement 0
	applymovement LOCALID_FOSSIL_MANIAC, Common_Movement_FaceUp
	waitmovement 0
	removeobject LOCALID_JERRY
	setvar VAR_WISH_TAG_PROGRESS, 5
	clearflag FLAG_HIDE_JERRY_FOSSILMANIACHOUSE
	release
	end

Route114_FossilManiacsTunnel_EventScript_JerryEnterLeft::
	setobjectxyperm LOCALID_JERRY, 5, 10
	addobject LOCALID_JERRY
	applymovement LOCALID_JERRY, Route114_FossilManiacsTunnel_Movement_JerryEnterLeft
	waitmovement 0
	applymovement LOCALID_FOSSIL_MANIAC, Common_Movement_FaceDown
	waitmovement 0
	msgbox Route114_FossilManiacsTunnel_Text_JerryIntro, MSGBOX_DEFAULT
	applymovement LOCALID_FOSSIL_MANIAC, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox Route114_FossilManiacsTunnel_Text_FossilManiac_Bell, MSGBOX_DEFAULT
	applymovement LOCALID_JERRY, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

Route114_FossilManiacsTunnel_EventScript_JerryEnterRight::
	addobject LOCALID_JERRY
	applymovement LOCALID_JERRY, Route114_FossilManiacsTunnel_Movement_JerryEnterRight
	waitmovement 0
	applymovement LOCALID_FOSSIL_MANIAC, Common_Movement_FaceRight
	waitmovement 0
	msgbox Route114_FossilManiacsTunnel_Text_JerryIntro, MSGBOX_DEFAULT
	applymovement LOCALID_FOSSIL_MANIAC, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox Route114_FossilManiacsTunnel_Text_FossilManiac_Bell, MSGBOX_DEFAULT
	applymovement LOCALID_JERRY, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

Route114_FossilManiacsTunnel_Text_FoundWeirdObject:
	.string "Don't you think FOSSILS are\n"
	.string "wonderful? It's so upsetting when\p"
	.string "you think you found a fossil, but\n"
	.string "it's just some artifact.$"

 Route114_FossilManiacsTunnel_Text_JerryIntro:
	.string "Did I hear you mention artifacts?\n"
	.string "Have you found any BELLS? I'm \p"
	.string "searching for one that makes a\n"
	.string "PURE TONE.$"

Route114_FossilManiacsTunnel_Text_FossilManiac_Bell:
	.string "A PURE BELL you say? I do recall\n"
	.string "something like that, but it wasn't\p"
	.string "a FOSSIL so it didn't mean much to me.\n"
	.string "You can have it if you'd like. My \p"
	.string "little brother may know where it is.$"

Route114_FossilManiacsTunnel_Text_GoAtOnce:
	.string "I will ask him at once!$"

Route114_FossilManiacsTunnel_Movement_JerryEnterLeft:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Route114_FossilManiacsTunnel_Movement_JerryEnterRight:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_left
	step_end

Route114_FossilManiacsTunnel_Movement_JerryExit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end