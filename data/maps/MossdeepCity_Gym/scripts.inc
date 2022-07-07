MossdeepCity_Gym_MapScripts::
	.byte 0

MossdeepCity_Gym_EventScript_GetBook1::
	lock
	msgbox MossdeepCity_Gym_Text_Book1, MSGBOX_DEFAULT
	call MossdeepCity_Gym_EventScript_UnlockHall1
	release
	end

MossdeepCity_Gym_EventScript_UnlockHall1::
	playse SE_CLICK
	waitse
	setmetatile 11,33, METATILE_MossdeepGym_FloorDarkTop, FALSE
	setmetatile 12,33, METATILE_MossdeepGym_FloorDarkTop, FALSE
	setmetatile 13,33, METATILE_MossdeepGym_FloorDarkTop, FALSE
	setmetatile 14,33, METATILE_MossdeepGym_FloorDarkTop, FALSE

	setmetatile 11,32, METATILE_MossdeepGym_Wall, TRUE
	setmetatile 12,32, METATILE_MossdeepGym_Wall, TRUE
	setmetatile 13,32, METATILE_MossdeepGym_Wall, TRUE
	setmetatile 14,32, METATILE_MossdeepGym_Wall, TRUE

	setmetatile 11,31, METATILE_MossdeepGym_WallTop, TRUE
	setmetatile 12,31, METATILE_MossdeepGym_WallTop, TRUE
	setmetatile 13,31, METATILE_MossdeepGym_WallTop, TRUE
	setmetatile 14,31, METATILE_MossdeepGym_WallTop, TRUE
	special DrawWholeMapView
	msgbox MossdeepCity_Gym_Text_HallOpened, MSGBOX_DEFAULT
	return

MossdeepCity_Gym_Text_Book1:
	.string "Pulled a book from the shelf.\n"
	.string "The title is “AN INTRODUCTION TO\p"
	.string "BATTLES”.\p"
	.string "But I already know how to battle!$"

MossdeepCity_Gym_Text_HallOpened:
	.string "A hidden hallway appeared!$"

MossdeepCity_Gym_EventScript_GetBook2_Left::
	lock
	msgbox MossdeepCity_Gym_Text_Book2Left, MSGBOX_DEFAULT
	playse SE_CLICK
	waitse

	setmetatile 15,28, METATILE_MossdeepGym_WallTop, TRUE
	setmetatile 16,28, METATILE_MossdeepGym_WallTop, TRUE
	setmetatile 17,28, METATILE_MossdeepGym_WallTop, TRUE
	setmetatile 18,28, METATILE_MossdeepGym_WallTopRight, TRUE

	setmetatile 15,29, METATILE_MossdeepGym_Wall, TRUE
	setmetatile 16,29, METATILE_MossdeepGym_Wall, TRUE
	setmetatile 17,29, METATILE_MossdeepGym_Wall, TRUE
	setmetatile 18,29, METATILE_MossdeepGym_Wall, TRUE

	setmetatile 15,30, METATILE_MossdeepGym_FloorDarkTop, FALSE
	setmetatile 16,30, METATILE_MossdeepGym_FloorDarkTop, FALSE
	setmetatile 17,30, METATILE_MossdeepGym_FloorDarkTop, FALSE
	setmetatile 18,30, METATILE_MossdeepGym_FloorDarkTop, FALSE

	setmetatile 14,30 METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 14,29, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 14,28, METATILE_MossdeepGym_FloorDarkLeftCorner, FALSE

	special DrawWholeMapView
	msgbox MossdeepCity_Gym_Text_HallOpened, MSGBOX_DEFAULT
	release
	end

MossdeepCity_Gym_Text_Book2Left:
	.string "Pulled a book from the shelf.\p"
	.string "“We're no strangers to love.\n"
	.string "You know the rules and so do I”.\p"
	.string "This appears to be a book of lyrics!$"

MossdeepCity_Gym_EventScript_GetBook2_Right::
	lock
	msgbox MossdeepCity_Gym_Text_Book2Right, MSGBOX_DEFAULT
	playse SE_CLICK
	waitse
	setmetatile 23,29, METATILE_MossdeepGym_Floor, FALSE
	setmetatile 23,28, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 23,27, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 23,26, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 23,25, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 23,24, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 23,23, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 23,22, METATILE_MossdeepGym_FloorDarkLeftCorner, FALSE
	special DrawWholeMapView
	msgbox MossdeepCity_Gym_Text_HallOpened, MSGBOX_DEFAULT
	release
	end

MossdeepCity_Gym_Text_Book2Right:
	.string "Pulled a book from the shelf.\p"
	.string "“Harry Potter and the Goblet of\n"
	.string "Fire”. Dragons and mermaids?\p"
	.string "This author has quite the imagination!$"

MossdeepCity_Gym_EventScript_GetBook3_Right::
	lock
	msgbox MossdeepCity_Gym_Text_Book3Right, MSGBOX_DEFAULT
	playse SE_CLICK
	waitse
	setmetatile 25,18, METATILE_MossdeepGym_FloorDarkTopLeft, FALSE
	setmetatile 25,17, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 25,16, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 25,15, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 25,14, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 25,13, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 25,12, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 25,11, METATILE_MossdeepGym_FloorDarkLeft, FALSE

	setmetatile 24,14, METATILE_MossdeepGym_WallTopVert, FALSE
	setmetatile 24,13, METATILE_MossdeepGym_WallTopVert, FALSE
	setmetatile 24,12, METATILE_MossdeepGym_WallTopVert, FALSE
	setmetatile 24,11, METATILE_MossdeepGym_WallTopVert, FALSE

	setmetatile 25,14, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 25,13, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 25,12, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 25,11, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	special DrawWholeMapView
	msgbox MossdeepCity_Gym_Text_HallOpened, MSGBOX_DEFAULT
	release
	end

MossdeepCity_Gym_Text_Book3Right:
	.string "Pulled a book from the shelf. \p"
	.string "“One Hundred Years of Solitude”\n"
	.string "Wow, this is dark. But it makes\p"
	.string "me wonder: Is any of this real? Or\n"
	.string "am I just following a script?$"

MossdeepCity_Gym_EventScript_GetBook3_Mid::
	lock
	msgbox MossdeepCity_Gym_Text_Book3Mid, MSGBOX_DEFAULT
	playse SE_CLICK
	waitse
	setmetatile 20,16, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 20,15, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 20,14, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 20,13, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 20,12, METATILE_MossdeepGym_FloorDarkTop, FALSE
	setmetatile 19,12, METATILE_MossdeepGym_FloorDarkTop, FALSE
	setmetatile 18,12, METATILE_MossdeepGym_FloorDarkTop, FALSE
	setmetatile 17,12, METATILE_MossdeepGym_FloorDarkTop, FALSE
	setmetatile 16,12, METATILE_MossdeepGym_FloorDarkTop, FALSE

	setmetatile 20,11, METATILE_MossdeepGym_Wall, TRUE
	setmetatile 19,11, METATILE_MossdeepGym_Wall, TRUE
	setmetatile 18,11, METATILE_MossdeepGym_Wall, TRUE
	setmetatile 17,11, METATILE_MossdeepGym_Wall, TRUE
	setmetatile 16,11, METATILE_MossdeepGym_Wall, TRUE

	setmetatile 20,10, METATILE_MossdeepGym_WallTop, TRUE
	setmetatile 19,10, METATILE_MossdeepGym_WallTop, TRUE
	setmetatile 18,10, METATILE_MossdeepGym_WallTop, TRUE
	setmetatile 17,10, METATILE_MossdeepGym_WallTop, TRUE
	setmetatile 16,10, METATILE_MossdeepGym_WallTop, TRUE

	setmetatile 15,12, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 15,11, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 15,10, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 15,9, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	special DrawWholeMapView
	msgbox MossdeepCity_Gym_Text_HallOpened, MSGBOX_DEFAULT
	release
	end

MossdeepCity_Gym_Text_Book3Mid:
	.string "Pulled a book from the shelf. \p"
	.string "...\n"
	.string "This one is so degenerate I refuse\p"
	.string "to even describe it.$"

MossdeepCity_Gym_EventScript_GetBook3_Left::
	lock
	msgbox MossdeepCity_Gym_Text_Book3Left, MSGBOX_DEFAULT
	playse SE_CLICK
	waitse
	setmetatile 18,20, METATILE_MossdeepGym_FloorDarkTopLeft, FALSE
	setmetatile 17,20, METATILE_MossdeepGym_FloorDarkTop, FALSE
	setmetatile 16,20, METATILE_MossdeepGym_FloorDarkTop, FALSE
	setmetatile 15,20, METATILE_MossdeepGym_FloorDarkTop, FALSE
	setmetatile 14,20, METATILE_MossdeepGym_FloorDarkTop, FALSE

	setmetatile 17,19, METATILE_MossdeepGym_Wall, TRUE
	setmetatile 16,19, METATILE_MossdeepGym_Wall, TRUE
	setmetatile 15,19, METATILE_MossdeepGym_Wall, TRUE
	setmetatile 14,19, METATILE_MossdeepGym_Wall, TRUE

	setmetatile 17,18, METATILE_MossdeepGym_WallTop, TRUE
	setmetatile 16,18, METATILE_MossdeepGym_WallTop, TRUE
	setmetatile 15,18, METATILE_MossdeepGym_WallTop, TRUE
	setmetatile 14,18, METATILE_MossdeepGym_WallTop, TRUE

	special DrawWholeMapView
	msgbox MossdeepCity_Gym_Text_HallOpened, MSGBOX_DEFAULT
	release
	end

MossdeepCity_Gym_Text_Book3Left:
	.string "Pulled a book from the shelf. \n"
	.string "“Hear the Wind Sing”\p"
	.string "The narrator has certainly met.\n"
	.string "some interesting people!$"

MossdeepCity_Gym_EventScript_GetBook4_Left::
	lock
	msgbox MossdeepCity_Gym_Text_Book4Left, MSGBOX_DEFAULT
	playse SE_CLICK
	waitse
	setmetatile 4,18, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 4,17, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 4,16, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 4,15, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 4,14, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 4,13, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 4,12, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 4,11, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 4,10, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 4,9, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 4,8, METATILE_MossdeepGym_FloorDarkLeftCorner, FALSE
	special DrawWholeMapView
	msgbox MossdeepCity_Gym_Text_HallOpened, MSGBOX_DEFAULT
	release
	end

MossdeepCity_Gym_Text_Book4Left:
	.string "Pulled a book from the shelf. \n"
	.string "“A Little Life”\p"
	.string "Wow, you really can never truly know\n"
	.string "what a person is going through.$"

MossdeepCity_Gym_EventScript_GetBook4_Right::
	lock
	msgbox MossdeepCity_Gym_Text_Book4Right, MSGBOX_DEFAULT
	playse SE_CLICK
	waitse
	setmetatile 10,19, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 10,18, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 10,17, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 10,16, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 10,15, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 9,16, METATILE_MossdeepGym_WallTopVert, FALSE
	setmetatile 9,15, METATILE_MossdeepGym_WallTopVert, FALSE
	special DrawWholeMapView
	msgbox MossdeepCity_Gym_Text_HallOpened, MSGBOX_DEFAULT
	release
	end

MossdeepCity_Gym_Text_Book4Right:
	.string "Pulled a book from the shelf. \n"
	.string "“The Catcher in the Rye”\p"
	.string "Growing up seems rough - good thing\n"
	.string "I'll be ten years old forever!$"

MossdeepCity_Gym_EventScript_GetBook4_Mid::
	lock
	msgbox MossdeepCity_Gym_Text_Book4Mid, MSGBOX_DEFAULT
	playse SE_CLICK
	waitse
	setmetatile 6,17, METATILE_MossdeepGym_WallTopRight, FALSE
	setmetatile 7,19, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 7,18, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 7,17, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 7,16, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 7,15, METATILE_MossdeepGym_FloorDarkLeft, FALSE
	setmetatile 6,16, METATILE_MossdeepGym_WallTopVert, FALSE
	setmetatile 6,15, METATILE_MossdeepGym_WallTopVert, FALSE
	special DrawWholeMapView
	msgbox MossdeepCity_Gym_Text_HallOpened, MSGBOX_DEFAULT
	release
	end

MossdeepCity_Gym_Text_Book4Mid:
	.string "Pulled a book from the shelf. \p"
	.string "“Lord of the Rings: The Fellowship\n"
	.string "of the Ring”.\p"
	.string "I like this Tom Bombadil guy!$"


MossdeepCity_Gym_EventScript_Aaron::
	trainerbattle_single TRAINER_LEADER_AARON, MossdeepCity_Gym_Text_AaronIntro, MossdeepCity_Gym_Text_AaronDefeat, MossdeepCity_Gym_EventScript_AaronDefeated, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, MossdeepCity_Gym_EventScript_AaronRematch
	goto_if_unset FLAG_RECEIVED_TM04, MossdeepCity_Gym_EventScript_GiveCalmMind2
	msgbox MossdeepCity_Gym_Text_AaronPostBattle, MSGBOX_DEFAULT
	release
	end

MossdeepCity_Gym_EventScript_AaronDefeated::
	message MossdeepCity_Gym_Text_ReceivedMindBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
	setflag FLAG_BADGE07_GET
	setflag FLAG_HIDE_AQUA_HIDEOUT_GRUNTS
	clearflag FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY
	clearflag FLAG_UNKNOWN_0x393
	setvar VAR_0x8008, 7
	call Common_EventScript_SetGymTrainers
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS
	clearflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN
	setvar VAR_MOSSDEEP_CITY_STATE, 1
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 1
	call MossdeepCity_Gym_EventScript_GiveCalmMind
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox MossdeepCity_Gym_Text_RegisteredAaron, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL
	release
	end

MossdeepCity_Gym_EventScript_GiveCalmMind2::
	giveitem ITEM_TM04
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM04
	release
	end

MossdeepCity_Gym_EventScript_GiveCalmMind::
	giveitem ITEM_TM04
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM04
	return

MossdeepCity_Gym_EventScript_AaronRematch::
	trainerbattle_rematch_double TRAINER_LEADER_AARON, MossdeepCity_Gym_Text_AaronPreRematch, MossdeepCity_Gym_Text_AaronRematchDefeat, MossdeepCity_Gym_Text_AaronRematchNeedTwoMons
	msgbox MossdeepCity_Gym_Text_AaronPostRematch, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_Preston::
	trainerbattle_single TRAINER_PRESTON, MossdeepCity_Gym_Text_PrestonIntro, MossdeepCity_Gym_Text_PrestonDefeat
	msgbox MossdeepCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Virgil::
	trainerbattle_single TRAINER_VIRGIL, MossdeepCity_Gym_Text_VirgilIntro, MossdeepCity_Gym_Text_VirgilDefeat
	msgbox MossdeepCity_Gym_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Blake::
	trainerbattle_single TRAINER_BLAKE, MossdeepCity_Gym_Text_BlakeIntro, MossdeepCity_Gym_Text_BlakeDefeat
	msgbox MossdeepCity_Gym_Text_BlakePostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Hannah::
	trainerbattle_single TRAINER_HANNAH, MossdeepCity_Gym_Text_HannahIntro, MossdeepCity_Gym_Text_HannahDefeat
	msgbox MossdeepCity_Gym_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Samantha::
	trainerbattle_single TRAINER_SAMANTHA, MossdeepCity_Gym_Text_SamanthaIntro, MossdeepCity_Gym_Text_SamanthaDefeat
	msgbox MossdeepCity_Gym_Text_SamanthaPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Maura::
	trainerbattle_single TRAINER_MAURA, MossdeepCity_Gym_Text_MauraIntro, MossdeepCity_Gym_Text_MauraDefeat
	msgbox MossdeepCity_Gym_Text_MauraPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Sylvia::
	trainerbattle_single TRAINER_SYLVIA, MossdeepCity_Gym_Text_SylviaIntro, MossdeepCity_Gym_Text_SylviaDefeat
	msgbox MossdeepCity_Gym_Text_SylviaPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Nate::
	trainerbattle_single TRAINER_NATE, MossdeepCity_Gym_Text_NateIntro, MossdeepCity_Gym_Text_NateDefeat
	msgbox MossdeepCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Macey::
	trainerbattle_single TRAINER_MACEY, MossdeepCity_Gym_Text_MaceyIntro, MossdeepCity_Gym_Text_MaceyDefeat
	msgbox MossdeepCity_Gym_Text_MaceyPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Clifford::
	trainerbattle_single TRAINER_CLIFFORD, MossdeepCity_Gym_Text_CliffordIntro, MossdeepCity_Gym_Text_CliffordDefeat
	msgbox MossdeepCity_Gym_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Nicholas::
	trainerbattle_single TRAINER_NICHOLAS, MossdeepCity_Gym_Text_NicholasIntro, MossdeepCity_Gym_Text_NicholasDefeat
	msgbox MossdeepCity_Gym_Text_NicholasPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Kathleen::
	trainerbattle_single TRAINER_KATHLEEN, MossdeepCity_Gym_Text_KathleenIntro, MossdeepCity_Gym_Text_KathleenDefeat
	msgbox MossdeepCity_Gym_Text_KathleenPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, MossdeepCity_Gym_EventScript_GymGuidePostVictory
	msgbox MossdeepCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

MossdeepCity_Gym_EventScript_GymGuidePostVictory::
	msgbox MossdeepCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

MossdeepCity_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
	goto MossdeepCity_Gym_EventScript_GymStatue
	end

MossdeepCity_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
	goto MossdeepCity_Gym_EventScript_GymStatue
	end

MossdeepCity_Gym_EventScript_GymStatueCertified::
	msgbox MossdeepCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

MossdeepCity_Gym_EventScript_GymStatue::
	msgbox MossdeepCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

MossdeepCity_Gym_Text_GymGuideAdvice:
	.string "Yo, how's it going, CHAMPION-bound\n"
	.string "{PLAYER}?\p"
	.string "The GYM LEADER here uses\n"
	.string "PSYCHIC-type POKéMON.\p"
	.string "If you go up against him with\n"
	.string "FIGHTING- or POISON-type POKéMON,\l"
	.string "they'll inflict horrible damage!\p"
	.string "But to even get to the LEADER,\n"
	.string "you'll have to navigate the maze!\p"
	.string "Each book is also a secret switch\n"
	.string "so you'll need to make sure you\l"
	.string "find the right books!$"

MossdeepCity_Gym_Text_GymGuidePostVictory:
	.string "Wow, you're astounding!\n"
	.string "You're one great TRAINER!$"

MossdeepCity_Gym_Text_PrestonIntro:
	.string "Battles hinge on the strength of your\n"
	.string "spirit! The weak-spirited will never win!$"

MossdeepCity_Gym_Text_PrestonDefeat:
	.string "I lost!\n"
	.string "I must temper my spirit again!$"

MossdeepCity_Gym_Text_PrestonPostBattle:
	.string "The indecisive lose.\n"
	.string "That's my warning to you.$"

MossdeepCity_Gym_Text_VirgilIntro:
	.string "Let me see your talent!$"

MossdeepCity_Gym_Text_VirgilDefeat:
	.string "You possess spectacular talent!$"

MossdeepCity_Gym_Text_VirgilPostBattle:
	.string "If there are prodigies in the world,\n"
	.string "then our GYM LEADERS are them!\p"
	.string "However, you may be even more talented\n"
	.string "than them…$"

MossdeepCity_Gym_Text_BlakeIntro:
	.string "Fufufufu… Watch me levitate a POKé\n"
	.string "BALL telekinetically!\p"
	.string "Wrooooooooaaaar!\n"
	.string "… … … … … … …\p"
	.string "Sometimes, I'm out of sync…$"

MossdeepCity_Gym_Text_BlakeDefeat:
	.string "My POKéMON battling skills are out\n"
	.string "of sync, too!$"

MossdeepCity_Gym_Text_BlakePostBattle:
	.string "A POKé BALL was too heavy to lift\n"
	.string "psychically. But this dust bunny…\p"
	.string "Whoooooooooooooooh!\n"
	.string "… … … … … …\p"
	.string "No, I'm not cheating!\n"
	.string "I didn't blow on it! Honestly!$"

MossdeepCity_Gym_Text_HannahIntro:
	.string "When you lose to me, don't be too hard\n"
	.string "on yourself.\p"
	.string "It's not that you're weak--I'm just\n"
	.string "too strong!$"

MossdeepCity_Gym_Text_HannahDefeat:
	.string "You're just too strong!$"

MossdeepCity_Gym_Text_HannahPostBattle:
	.string "I'm not going to get down on myself for\n"
	.string "losing. I just need to train harder.\p"
	.string "Positive thinking--that's my strong\n"
	.string "point!$"

MossdeepCity_Gym_Text_SamanthaIntro:
	.string "I see it…\n"
	.string "I see your future…\p"
	.string "If you can beat me, I will tell you\n"
	.string "your future!$"

MossdeepCity_Gym_Text_SamanthaDefeat:
	.string "I surrender!$"

MossdeepCity_Gym_Text_SamanthaPostBattle:
	.string "You will wage a terrifically intense\n"
	.string "battle with our GYM LEADERS…\p"
	.string "The result…\n"
	.string "You won't hear it from me!$"

MossdeepCity_Gym_Text_MauraIntro:
	.string "The roads you have traveled…\n"
	.string "What you have experienced…\p"
	.string "Come at me with everything you've\n"
	.string "learned!$"

MossdeepCity_Gym_Text_MauraDefeat:
	.string "You've traveled a path of greatness!$"

MossdeepCity_Gym_Text_MauraPostBattle:
	.string "A bright future awaits those who have\n"
	.string "worked diligently.\p"
	.string "For those who lazed idly, there is\n"
	.string "only despair at the end.\p"
	.string "What goes around comes around…$"

MossdeepCity_Gym_Text_SylviaIntro:
	.string "Even at the risk of life, I will win\n"
	.string "this battle!$"

MossdeepCity_Gym_Text_SylviaDefeat:
	.string "What you do…\n"
	.string "It horrifies me…$"

MossdeepCity_Gym_Text_SylviaPostBattle:
	.string "How dare you beat me…\p"
	.string "It won't be my fault if something\n"
	.string "horrible befalls you…$"

MossdeepCity_Gym_Text_NateIntro:
	.string "Hohoho.\p"
	.string "You need me to show you how tenacious\n"
	.string "the PSYCHIC type can be.$"

MossdeepCity_Gym_Text_NateDefeat:
	.string "Oh! My, my!\n"
	.string "Your battle style is fantastic!$"

MossdeepCity_Gym_Text_NatePostBattle:
	.string "I… I don't let defeat rattle m-me,\n"
	.string "however b-badly.$"

MossdeepCity_Gym_Text_KathleenIntro:
	.string "Let me show you a perfectly awful,\n"
	.string "horrifying time!$"

MossdeepCity_Gym_Text_KathleenDefeat:
	.string "N-nooooo!$"

MossdeepCity_Gym_Text_KathleenPostBattle:
	.string "Your vitality is contagious!\n"
	.string "Get away from me quickly!$"

MossdeepCity_Gym_Text_CliffordIntro:
	.string "I may be past my prime, but I suggest\n"
	.string "you not patronize me.$"

MossdeepCity_Gym_Text_CliffordDefeat:
	.string "Ah, you overflow with the power\n"
	.string "of youth!$"

MossdeepCity_Gym_Text_CliffordPostBattle:
	.string "It seems that I could not overcome\n"
	.string "your youthful energy.$"

MossdeepCity_Gym_Text_MaceyIntro:
	.string "You're not getting through to the end!\n"
	.string "Not if I can help it!$"

MossdeepCity_Gym_Text_MaceyDefeat:
	.string "How could you be so ludicrously\n"
	.string "strong?$"

MossdeepCity_Gym_Text_MaceyPostBattle:
	.string "Humph! You may be strong, but you're\n"
	.string "not suitable for the PSYCHIC type!\p"
	.string "The way you battle is somehow brutal!$"

MossdeepCity_Gym_Text_NicholasIntro:
	.string "Wroooar! Have a taste of my super\n"
	.string "POKéMON hard-battling power!$"

MossdeepCity_Gym_Text_NicholasDefeat:
	.string "Oh!\n"
	.string "Done in!$"

MossdeepCity_Gym_Text_NicholasPostBattle:
	.string "All right! I think I'll develop a special\n"
	.string "invincible POKéMON power next.$"

MossdeepCity_Gym_Text_AaronIntro:
	.string "Reading any good books?$"

MossdeepCity_Gym_Text_AaronDefeat:
	.string "Looks like I have more research to do!\n"
	.string "Here, take this.$"

MossdeepCity_Gym_Text_ReceivedMindBadge:
	.string "{PLAYER} received the LIBRARY BADGE\n"
	.string "from AARON.$"

MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis:
	.string "The LIBRARY BADGE enhances the\n"
	.string "SP. ATK and SP. DEF of POKéMON.\p"
	.string "It also lets you use the HM move\n"
	.string "outside of battle.\p"
	.string "You should also take this, too.$"

MossdeepCity_Gym_Text_ExplainCalmMind:
	.string "That TM04 contains CALM MIND!\n"
	.string "Reading a good book also causes a\p"
	.string "CALM MIND! But it takes the TM to\n"
	.string "raise SP. ATK and SP.DEF. \p"
	.string "… … … … … …$"

MossdeepCity_Gym_Text_RegisteredAaron:
	.string "Registered GYM LEADER AARON\n"
	.string "in the POKéNAV.$"

MossdeepCity_Gym_Text_AaronPostBattle:
	.string "The love you have for your\n"
	.string "POKéMON is as strong as my love\l"
	.string "for books.\p"
	.string "You will become even stronger!$"

MossdeepCity_Gym_Text_AaronNeedTwoMons:
	.string "TATE: Hehehe… Were you surprised?\p"
	.string "LIZA: That there are two GYM LEADERS?\p"
	.string "TATE: Oops, you have only one…\n"
	.string "LIZA: POKéMON that can battle.\p"
	.string "TATE: We can't battle that way!\p"
	.string "LIZA: If you want to challenge us,\n"
	.string "bring some more POKéMON.$"

MossdeepCity_Gym_Text_GymStatue:
	.string "MOSSDEEP CITY POKéMON GYM$"

MossdeepCity_Gym_Text_GymStatueCertified:
	.string "MOSSDEEP CITY POKéMON GYM\p"
	.string "AARON'S CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"

MossdeepCity_Gym_Text_AaronPreRematch:
	.string "TATE: POKéMON…\n"
	.string "LIZA: POKéMON…\p"
	.string "TATE: By changing the party's mix…\n"
	.string "LIZA: The battle style changes.\p"
	.string "TATE: But me…\n"
	.string "LIZA: But me…\p"
	.string "TATE: I'll always be with LIZA!\n"
	.string "LIZA: I'll always be with TATE!\p"
	.string "TATE: Our combination…\n"
	.string "LIZA: We'll show you again and again!$"

MossdeepCity_Gym_Text_AaronRematchDefeat:
	.string "TATE: You and your POKéMON…\n"
	.string "LIZA: It's as if you were siblings!$"

MossdeepCity_Gym_Text_AaronPostRematch:
	.string "TATE: You can knock us down,\n"
	.string "but we'll never stay down!\p"
	.string "LIZA: Because the two of us,\n"
	.string "we always support each other!$"

MossdeepCity_Gym_Text_AaronRematchNeedTwoMons:
	.string "TATE: You're back again…\n"
	.string "LIZA: You're back again…\p"
	.string "TATE: To give us a rematch.\n"
	.string "LIZA: To give us a rematch.\p"
	.string "TATE: But…\n"
	.string "LIZA: For our match…\p"
	.string "TATE: You brought just one POKéMON!\n"
	.string "LIZA: You brought just one POKéMON!\p"
	.string "TATE: We need you to bring at least…\n"
	.string "LIZA: Two POKéMON when you come back.$"
