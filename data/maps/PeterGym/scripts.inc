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
