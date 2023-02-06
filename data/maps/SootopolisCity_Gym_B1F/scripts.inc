SootopolisCity_Gym_B1F_MapScripts::
	.byte 0

SootopolisCity_Gym_B1F_EventScript_Andrea::
	trainerbattle_single TRAINER_ANDREA, SootopolisCity_Gym_B1F_Text_AndreaIntro, SootopolisCity_Gym_B1F_Text_AndreaDefeat
	msgbox SootopolisCity_Gym_B1F_Text_AndreaPostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_B1F_EventScript_Kris::
	trainerbattle_single TRAINER_KRIS, SootopolisCity_Gym_B1F_Text_KrisIntro, SootopolisCity_Gym_B1F_Text_KrisDefeat
	msgbox SootopolisCity_Gym_B1F_Text_KrisPostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_B1F_EventScript_Brianna::
	trainerbattle_single TRAINER_BRIANNA, SootopolisCity_Gym_B1F_Text_BriannaIntro, SootopolisCity_Gym_B1F_Text_BriannaDefeat
	msgbox SootopolisCity_Gym_B1F_Text_BriannaPostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_B1F_EventScript_Connor::
	trainerbattle_single TRAINER_CONNOR, SootopolisCity_Gym_B1F_Text_ConnorIntro, SootopolisCity_Gym_B1F_Text_ConnorDefeat
	msgbox SootopolisCity_Gym_B1F_Text_ConnorPostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_B1F_EventScript_Miyagi::
	trainerbattle_single TRAINER_MIYAGI, SootopolisCity_Gym_B1F_Text_MiyagiIntro, SootopolisCity_Gym_B1F_Text_MiyagiDefeat
	msgbox SootopolisCity_Gym_B1F_Text_MiyagiPostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_B1F_EventScript_Olivia::
	trainerbattle_single TRAINER_OLIVIA, SootopolisCity_Gym_B1F_Text_OliviaIntro, SootopolisCity_Gym_B1F_Text_OliviaDefeat
	msgbox SootopolisCity_Gym_B1F_Text_OliviaPostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_B1F_EventScript_Tiffany::
	trainerbattle_single TRAINER_TIFFANY, SootopolisCity_Gym_B1F_Text_TiffanyIntro, SootopolisCity_Gym_B1F_Text_TiffanyDefeat
	msgbox SootopolisCity_Gym_B1F_Text_TiffanyPostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_B1F_EventScript_Brett::
	trainerbattle_single TRAINER_BRETT, SootopolisCity_Gym_B1F_Text_BrettIntro, SootopolisCity_Gym_B1F_Text_BrettDefeat
	msgbox SootopolisCity_Gym_B1F_Text_BrettPostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_B1F_EventScript_Annika::
	trainerbattle_single TRAINER_ANNIKA, SootopolisCity_Gym_B1F_Text_AnnikaIntro, SootopolisCity_Gym_B1F_Text_AnnikaDefeat
	msgbox SootopolisCity_Gym_B1F_Text_AnnikaPostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_B1F_EventScript_Daniel::
	trainerbattle_single TRAINER_DANIEL, SootopolisCity_Gym_B1F_Text_DanielIntro, SootopolisCity_Gym_B1F_Text_DanielDefeat
	msgbox SootopolisCity_Gym_B1F_Text_DanielPostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_B1F_Text_AndreaIntro:
	.string "I'll show you the sublime techniques\n"
	.string "I learned from our LEADER TYLER!$"

SootopolisCity_Gym_B1F_Text_AndreaDefeat:
	.string "Hmm, maybe his allergies are the secret?$"

SootopolisCity_Gym_B1F_Text_AndreaPostBattle:
	.string "Watch what happens if you crack all\n"
	.string "the floor tiles.$"

SootopolisCity_Gym_B1F_Text_KrisIntro:
	.string "You came all the way here, but you won't\n"
	.string "get to see TYLER.\p"
	.string "Not if you lose to me, you won't!$"

SootopolisCity_Gym_B1F_Text_KrisDefeat:
	.string "You're strong!\n"
	.string "I was fooled by your cool looks!$"

SootopolisCity_Gym_B1F_Text_KrisPostBattle:
	.string "You might be good enough to avoid\n"
	.string "being wiped out in one hit by TYLER.$"

SootopolisCity_Gym_B1F_Text_DanielIntro:
	.string "The sight of TYLER conducting\n"
	.string "a battle…\p"
	.string "It's really weird.$"

SootopolisCity_Gym_B1F_Text_DanielDefeat:
	.string "Like, he just keeps sneezing!$"

SootopolisCity_Gym_B1F_Text_DanielPostBattle:
	.string "Why would he choose GRASS POKéMON?!\n"
	.string "He just keeps sneezing and coughing!$"

SootopolisCity_Gym_B1F_Text_ConnorIntro:
	.string "I should teach you how harsh battles\n"
	.string "can be.$"

SootopolisCity_Gym_B1F_Text_ConnorDefeat:
	.string "Oh.\n"
	.string "You're strong.$"

SootopolisCity_Gym_B1F_Text_ConnorPostBattle:
	.string "I'll tell you something good.\p"
	.string "If you want to reach TYLER, you\n"
	.string "need to walk on each floor tile once.$"

SootopolisCity_Gym_B1F_Text_MiyagiIntro:
	.string "The POKéMON GYM of the highest level\n"
	.string "in the HOENN region…\p"
	.string "That's the SOOTOPOLIS GYM.$"

SootopolisCity_Gym_B1F_Text_MiyagiDefeat:
	.string "What a high level you are!$"

SootopolisCity_Gym_B1F_Text_MiyagiPostBattle:
	.string "Rather than being satisfied by being\n"
	.string "in a strong GYM, I imagine training in\l"
	.string "other places will make you stronger.\l"
	.string "But above all, it looks more fun.$"

SootopolisCity_Gym_B1F_Text_OliviaIntro:
	.string "I train my POKéMON together with\n"
	.string "the best of the best!.\p"
	.string "Don't think I'm a pushover.$"

SootopolisCity_Gym_B1F_Text_OliviaDefeat:
	.string "I was beaten…$"

SootopolisCity_Gym_B1F_Text_OliviaPostBattle:
	.string "I think you have potential.\n"
	.string "Why don't you stay and train with us?$"

SootopolisCity_Gym_B1F_Text_TiffanyIntro:
	.string "Imagine this gym but instead of\n"
	.string "leaves and grass, there was ice\p"
	.string "I think that would be\n"
	.string "would be elegantly beautiful!$"

SootopolisCity_Gym_B1F_Text_TiffanyDefeat:
	.string "Well, excuse me?!$"

SootopolisCity_Gym_B1F_Text_TiffanyPostBattle:
	.string "I still think it would be wonderful.$"

SootopolisCity_Gym_B1F_Text_BrettIntro:
	.string "When I'm with my POKéMON, the time\n"
	.string "flies by before you can say, “Oops!”$"

SootopolisCity_Gym_B1F_Text_BrettDefeat:
	.string "Oops!$"

SootopolisCity_Gym_B1F_Text_BrettPostBattle:
	.string "I wish I could forget about lost causes\n"
	.string "before I can manage an “Oops!”$"

SootopolisCity_Gym_B1F_Text_AnnikaIntro:
	.string "I can battle with really rare POKéMON\n"
	.string "if you'd like.$"

SootopolisCity_Gym_B1F_Text_AnnikaDefeat:
	.string "Oh, there now! Did you have a good look\n"
	.string "at my POKéMON?$"

SootopolisCity_Gym_B1F_Text_AnnikaPostBattle:
	.string "I came to this GYM because I\n"
	.string "wanted to see the legendary\p"
	.string "sneezing GYM LEADER for myself.\n"
	.string "I'm not sure what I expected.$"

SootopolisCity_Gym_B1F_Text_BriannaIntro:
	.string "Giggle…\n"
	.string "Your grim look is so charming.$"

SootopolisCity_Gym_B1F_Text_BriannaDefeat:
	.string "Oh, dear.\n"
	.string "I went much too easy on you.$"

SootopolisCity_Gym_B1F_Text_BriannaPostBattle:
	.string "Maybe next time, I'll be harder.\n"
	.string "I'm sure. Giggle…$"

