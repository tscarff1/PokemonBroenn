PetalburgCity_House1_MapScripts::
	.byte 0

PetalburgCity_House1_EventScript_Man::
	msgbox PetalburgCity_House1_Text_TravelingIsWonderful, MSGBOX_NPC
	end

PetalburgCity_House1_EventScript_Woman::
	msgbox PetalburgCity_House1_Text_GoOnAdventure, MSGBOX_NPC
	end

PetalburgCity_House1_Text_TravelingIsWonderful:
	.string "Traveling is wonderful!\p"
	.string "When I was young, I roamed the seas\n"
	.string "and the mountains!\p"

PetalburgCity_House1_Text_GoOnAdventure:
	.string "Sigh…\p"
	.string "I wish I could go on an adventure\n"
	.string "with some POKéMON…\p"
	.string "Crawl through some damp grass…\n"
	.string "Climb rocky, rugged mountains…\p"
	.string "Cross the raging seas…\n"
	.string "Wander about in dark caves…\p"
	.string "And, sometimes, even get a little\n"
	.string "homesick…\p"
	.string "It must be fabulous to travel!$"

PetalburgCity_House1_EventScript_EggWoman::
	msgbox PetalburgCity_House1_Text_EggWomanTravel, MSGBOX_NPC
	goto_if_set FLAG_RECEIVED_PETALBURG_EGG, PetalburgCity_House1_EventScript_ReceivedEgg
	goto_if_unset FLAG_BADGE01_GET, PetalburgCity_House1_EventScript_NoBadges
	msgbox PetalburgCity_House1_Text_GiveEgg, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PetalburgCity_House1_EventScript_DeclineEgg
	getpartysize
	goto_if_eq VAR_RESULT, PARTY_SIZE, PetalburgCity_House1_EventScript_NoRoomForEgg
	msgbox PetalburgCity_House1_Text_ShowEggWorld, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_OLDALE_EGG
	playfanfare MUS_OBTAIN_ITEM
	message OldaleTown_Text_ReceivedTheEgg
	waitfanfare
	giveegg SPECIES_TOGEPI
	release
	end

PetalburgCity_House1_EventScript_NoBadges::
	msgbox PetalburgCity_House1_Text_NoBadges, MSGBOX_NPC
	release
	end

PetalburgCity_House1_EventScript_ReceivedEgg::
	msgbox PetalburgCity_House1_Text_HowIsEgg, MSGBOX_NPC
	release
	end

PetalburgCity_House1_EventScript_DeclineEgg::
	msgbox PetalburgCity_House1_Text_DeclineEgg, MSGBOX_NPC
	release
	end

PetalburgCity_House1_EventScript_NoRoomForEgg::
	msgbox PetalburgCity_House1_Text_NoRoomForEgg, MSGBOX_NPC
	release
	end

PetalburgCity_House1_Text_EggWomanTravel:
	.string "I used to spend my time travelling the\n"
	.string "world, but those days are long behind me.$"

PetalburgCity_House1_Text_NoBadges:
	.string "Say! You seem like an adventurer!\p"
	.string "If you come back after you've earned a\n"
	.string "badge, I'll' give you something to take\p"
	.string "on your journey.$"

PetalburgCity_House1_Text_GiveEgg:
	.string "Oh! I can see you've travelled some distance.\n"
	.string "How would you like to take this EGG with you?$"

PetalburgCity_House1_Text_HowIsEgg:
	.string "Say, how is your journey coming along?$"

PetalburgCity_House1_Text_DeclineEgg:
	.string "I suppose you aren't the adventurer I \n"
	.string "thought you were...$"

PetalburgCity_House1_Text_ReceivedTheEgg:
	.string "{PLAYER} received the EGG!$"

PetalburgCity_House1_Text_NoRoomForEgg:
	.string "You don't have any room for an EGG!\n"
	.string "Please come back once you've made room$"
	
PetalburgCity_House1_Text_ShowEggWorld:
	.string "Wonderful! I can only imagine the signts\n"
	.string "you and that EGG will see together$"
