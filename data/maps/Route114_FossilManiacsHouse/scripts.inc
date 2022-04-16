.set LOCALID_LILBRO, 1
.set LOCALID_JERRY, 2

Route114_FossilManiacsHouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_FossilManiacsHouse_OnTransition
	.byte 0

Route114_FossilManiacsHouse_OnTransition:
	setflag FLAG_LANDMARK_FOSSIL_MANIACS_HOUSE
	goto_if_eq VAR_WISH_TAG_PROGRESS, 5, Route114_FossilManiacsHouse_EventScript_SetupJerry
	end

Route114_FossilManiacsHouse_EventScript_SetupJerry::
	setobjectxyperm LOCALID_LILBRO, 5, 4
	setobjectmovementtype LOCALID_LILBRO, Common_Movement_FaceUp
	end

Route114_FossilManiacsHouse_EventScript_FossilManiacsBrother::
	lock
	faceplayer
	goto_if_eq VAR_WISH_TAG_PROGRESS, 5, Route114_FossilManiacsHouse_EventScript_WhereWasBell
	goto_if_set FLAG_RECEIVED_TM28, Route114_FossilManiacsHouse_EventScript_ReceivedDig
	msgbox Route114_FossilManiacsHouse_Text_HaveThisToDigLikeMyBrother, MSGBOX_DEFAULT
	giveitem ITEM_TM28
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM28
	release
	end

Route114_FossilManiacsHouse_EventScript_ReceivedDig::
	msgbox Route114_FossilManiacsHouse_Text_DigReturnsYouToEntrance, MSGBOX_DEFAULT
	release
	end

Route114_FossilManiacsHouse_EventScript_RockDisplay::
	msgbox Route114_FossilManiacsHouse_Text_RocksFillDisplayCase, MSGBOX_SIGN
	end

Route114_FossilManiacsHouse_EventScript_Bookshelf::
	msgbox Route114_FossilManiacsHouse_Text_CrammedWithBooks, MSGBOX_SIGN
	end

Route114_FossilManiacsHouse_Text_HaveThisToDigLikeMyBrother:
	.string "My big brother's the FOSSIL MANIAC…\n"
	.string "He's a nice guy who loves FOSSILS…\p"
	.string "He loves digging holes, too…\n"
	.string "He dug this hole by himself…\p"
	.string "You can have this, so you can DIG\n"
	.string "holes just like my big brother…$"

Route114_FossilManiacsHouse_Text_DigReturnsYouToEntrance:
	.string "If you make a POKéMON DIG inside a\n"
	.string "cave, you're returned to the entrance…$"

Route114_FossilManiacsHouse_Text_RocksFillDisplayCase:
	.string "Rocks in peculiar shapes fill\n"
	.string "the display case…$"

Route114_FossilManiacsHouse_Text_CrammedWithBooks:
	.string "THE COMPOSITION OF STRATA…\n"
	.string "HOW RAIN SHAPES THE LAND…\l"
	.string "STONES, SOIL, AND ROCK…\p"
	.string "It's crammed with books.$"

Route114_FossilManiacsHouse_EventScript_WhereWasBell::
	msgbox Route114_FossilManiacsHouse_Text_WhereWasBell, MSGBOX_DEFAULT
	release
	end

Route114_FossilManiacsHouse_Text_WhereWasBell:
	.string "Now where did I put that bell…$"

Route114_FossilManiacsHouse_EventScript_Jerry::
	lockall
	applymovement LOCALID_LILBRO, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	applymovement LOCALID_LILBRO, Common_Movement_FaceRight
	waitmovement 0
	msgbox Route114_FossilManiacsHouse_Text_IsThisTheBell, MSGBOX_DEFAULT
	applymovement LOCALID_JERRY, Common_Movement_WalkInPlaceFasterLeft
	playse SE_PIN
	applymovement LOCALID_JERRY, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox Route114_FossilManiacsHouse_Text_IsTheBell, MSGBOX_DEFAULT
	applymovement LOCALID_JERRY, Common_Movement_FacePlayer
	waitmovement 0
	msgbox Route114_FossilManiacsHouse_Text_TakeTheBell, MSGBOX_DEFAULT
	giveitem ITEM_PURE_BELL
	setvar VAR_WISH_TAG_PROGRESS, 6
	applymovement LOCALID_LILBRO, Route114_FossilManiacsHouse_Movement_LilBroMoveLeft
	waitmovement 0
	applymovement LOCALID_JERRY, Route114_FossilManiacsHouse_Movement_JerryLeaveDown
	waitmovement 0
	playse SE_EXIT
	removeobject LOCALID_JERRY
	clearflag FLAG_HIDE_JERRY_ROUTE114
	release
	end


Route114_FossilManiacsHouse_Text_IsThisTheBell:
	.string "Is this the bell you were looking for?$"

Route114_FossilManiacsHouse_Text_IsTheBell:
	.string "Yes! That's it! It looks exactly as\n"
	.string "the legends described it! I can't\p"
	.string "believe it's been lying around here\n"
	.string "all this time!$"

Route114_FossilManiacsHouse_Text_TakeTheBell:
	.string "However, Jirachi is a POKéMON.\n"
	.string "Which means I believe it will\p"
	.string "respond better to someone who is\n"
	.string "more intimate with POKéMON: A\p"
	.string "trainer like yourself. Please,\n"
	.string "take this PURE BELL and we can\p"
	.string "find JIRACHI together!$"

Route114_FossilManiacsHouse_Text_MeetMeOutside:
	.string "Please meet me outside and we\n"
	.string "discuss where we will search\p"
	.string "for JIRACHI!$"

Route114_FossilManiacsHouse_Movement_LilBroMoveLeft:
	walk_left
	step_end

Route114_FossilManiacsHouse_Movement_JerryLeaveDown:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	step_end
