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
	.string "Me? I'm not a trainer, I'm a breeder!"
	
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
	.string "hatched yet..."

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
