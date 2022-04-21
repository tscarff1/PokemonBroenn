MaxGym_MapScripts::
	.byte 0

MaxGym_EventScript_Statue::
	lock
	goto_if_set FLAG_BADGE06_GET, MaxGym_EventScript_StatueAfterWin
	msgbox MaxGym_Text_Statue, MSGBOX_DEFAULT
	release
	end

MaxGym_EventScript_StatueAfterWin::
	msgbox MaxGym_Text_StatueAfterWin, MSGBOX_DEFAULT
	release
	end

MaxGym_EventScript_Guide::
	lock
	faceplayer
	goto_if_set FLAG_BADGE06_GET, MaxGym_EventScript_GuideAfterWin
	msgbox MaxGym_Text_Guide, MSGBOX_DEFAULT
	release
	end

MaxGym_EventScript_GuideAfterWin::
	msgbox MaxGym_Text_GuideAfterWin, MSGBOX_DEFAULT
	release
	end

MaxGym_Text_Statue:
	.string "FORTREE CITY POKéMON GYM$"

MaxGym_Text_StatueAfterWin:
	.string "FORTREE CITY POKéMON GYM\p"
	.string "MAX'S CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"

MaxGym_Text_GuideAfterWin:
	.string "Amazing, you really beat Max!\n"
	.string "I'm sure it was an incredible\p"
	.string "battle, but I couldn't actually\n"
	.string "see it in the darkness...$"

MaxGym_Text_Guide:
	.string "Champ in the making!\n"
	.string "Welcome to the FORTREE CITY GYM!\p"
	.string "This GYM is dedicated to POKéMON\n"
	.string "of the DARK type. Try not to get\p"
	.string "lost in the darkness!$"

MaxGym_EventScript_Max::
	trainerbattle_single TRAINER_MAX, MaxGym_Text_MaxIntro, MaxGym_Text_MaxLoss, MaxGym_EventScript_MaxDefeated, NO_MUSIC
	goto_if_unset FLAG_RECEIVED_TM40, MaxGym_EventScript_GiveAerialAce2
	msgbox MaxGym_Text_MaxPostBattle, MSGBOX_DEFAULT
	release
	end

MaxGym_EventScript_MaxDefeated::
	message MaxGym_Text_ReceivedMoonBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox MaxGym_Text_ExplainBadgeTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_FORTREE_GYM
	setflag FLAG_BADGE06_GET
	setvar VAR_0x8008, 6
	call Common_EventScript_SetGymTrainers
	call MaxGym_EventScript_GiveAerialAce
	setvar VAR_SCOTT_FORTREE_CALL_STEP_COUNTER, 0
	setflag FLAG_SCOTT_CALL_FORTREE_GYM
	release
	end

MaxGym_EventScript_GiveAerialAce::
	giveitem ITEM_TM40
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox MaxGym_Text_ExplainAerialAce, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM40
	release
	end

MaxGym_EventScript_GiveAerialAce2::
	giveitem ITEM_TM40
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox MaxGym_Text_ExplainAerialAce, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM40
	release
	end

MaxGym_Text_MaxIntro:
	.string "Oh! A trainer!\n"
	.string "Does this mean I have to stop\p"
	.string "playing Guilty Gear?\n"
	.string "Nah, I can do both.$"

MaxGym_Text_MaxLoss:
	.string "You won?! I knew I needed a \n"
	.string "smoke before we battled...\p"
	.string "Now, I bestow upon you this\n"
	.string "official BADGE!$"

MaxGym_Text_ExplainBadgeTakeThis:
	.string "With the MOON BADGE, all POKéMON up\n"
	.string "to LV 70, even those you got through\l"
	.string "trades, will obey your every command.\p"
	.string "You will also be able to use\n"
	.string "the HM move FLY outside of battle.\p"
	.string "And this…\n"
	.string "This is a gift from me.$"

MaxGym_Text_MaxPostBattle:
	.string "Why AERIAL ACE? I don't actually\n"
	.string "know. I feel like someone out there\p"
	.string "just kind of got lazy.$"

MaxGym_Text_ReceivedMoonBadge:
	.string "{PLAYER} received the MOON BADGE!$"

MaxGym_Text_ExplainAerialAce:
	.string "AERIAL ACE is a great move! It\n"
	.string "never misses. Just like my\p"
	.string "SUPER MOVES in Guilty Gear!$"

MaxGym_EventScript_Humberto::
	trainerbattle_single TRAINER_HUMBERTO, MaxGym_Text_HumbertoIntro, MaxGym_Text_HumbertoDefeat
	msgbox MaxGym_Text_HumbertoPostBattle, MSGBOX_AUTOCLOSE
	end

MaxGym_Text_HumbertoIntro:
	.string "When MAX takes to battle, his face\n"
	.string "shines with beautiful determination…\p"
	.string "I'm not letting you witness that\n"
	.string "lovely sight!$"

MaxGym_Text_HumbertoDefeat:
	.string "Urk!\n"
	.string "I couldn't stop you.$"

MaxGym_Text_HumbertoPostBattle:
	.string "You'd better watch it!\n"
	.string "Don't get distracted staring at Max\l"
	.string "or you'll go crashing in to a heap!$"

MaxGym_EventScript_Ashley::
	trainerbattle_single TRAINER_ASHLEY, MaxGym_Text_AshleyIntro, MaxGym_Text_AshleyDefeat
	msgbox MaxGym_Text_AshleyPostBattle, MSGBOX_AUTOCLOSE
	end

MaxGym_Text_AshleyIntro:
	.string "MAX taught me personally!\n"
	.string "You can't beat me easily!$"

MaxGym_Text_AshleyDefeat:
	.string "I was beaten…$"

MaxGym_Text_AshleyPostBattle:
	.string "Thanks to MAX, the people of\n"
	.string "FORTREE live in a lot of fear.$"

MaxGym_EventScript_Edwardo::
	trainerbattle_single TRAINER_EDWARDO, MaxGym_Text_EdwardoIntro, MaxGym_Text_EdwardoDefeat
	msgbox MaxGym_Text_EdwardoPostBattle, MSGBOX_AUTOCLOSE
	end

MaxGym_Text_EdwardoIntro:
	.string "The lovers of DARK POKéMON aspire\n"
	.string "to join this GYM.\p"
	.string "As a member of the FORTREE GYM,\n"
	.string "I'm not allowed to lose!$"

MaxGym_Text_EdwardoDefeat:
	.string "It was too much of a load for me\n"
	.string "to bear…$"

MaxGym_Text_EdwardoPostBattle:
	.string "The world is huge, and there are\n"
	.string "countless tough TRAINERS.\p"
	.string "I'm going to keep learning and make\n"
	.string "myself even stronger.$"

MaxGym_EventScript_Flint::
	trainerbattle_single TRAINER_FLINT, MaxGym_Text_FlintIntro, MaxGym_Text_FlintDefeat
	msgbox MaxGym_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
	end

MaxGym_Text_FlintIntro:
	.string "There's no need for MAX, our GYM\n"
	.string "LEADER, to deal with you!\p"
	.string "I'm plenty good enough for you!$"

MaxGym_Text_FlintDefeat:
	.string "MAX, I…\n"
	.string "I lost!$"

MaxGym_Text_FlintPostBattle:
	.string "MAX is cute and he's strong.\n"
	.string "He's the ultimate LEADER!\p"
	.string "Blush…$"
