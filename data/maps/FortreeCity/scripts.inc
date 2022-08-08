FortreeCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, FortreeCity_OnResume
	.byte 0

FortreeCity_OnTransition:
	setflag FLAG_VISITED_FORTREE_CITY
	end

FortreeCity_OnResume:
	setstepcallback STEP_CB_FORTREE_BRIDGE
	end

FortreeCity_EventScript_Man::
	msgbox FortreeCity_Text_SawGiganticPokemonInSky, MSGBOX_NPC
	end

FortreeCity_EventScript_Woman::
	lock
	faceplayer
	goto_if_set FLAG_KECLEON_FLED_FORTREE, FortreeCity_EventScript_WomanGymAccessible
	msgbox FortreeCity_Text_SomethingBlockingGym, MSGBOX_DEFAULT
	release
	end

FortreeCity_EventScript_WomanGymAccessible::
	msgbox FortreeCity_Text_ThisTimeIllBeatWinona, MSGBOX_DEFAULT
	release
	end

FortreeCity_EventScript_Girl::
	msgbox FortreeCity_Text_TreesGrowByDrinkingRainwater, MSGBOX_NPC
	end

FortreeCity_EventScript_OldMan::
	msgbox FortreeCity_Text_EveryoneHealthyAndLively, MSGBOX_NPC
	end

FortreeCity_EventScript_Boy::
	msgbox FortreeCity_Text_BugPokemonComeThroughWindow, MSGBOX_NPC
	end

FortreeCity_EventScript_GameboyKid::
	msgbox FortreeCity_Text_PokemonThatEvolveWhenTraded, MSGBOX_NPC
	end

FortreeCity_EventScript_CitySign::
	msgbox FortreeCity_Text_CitySign, MSGBOX_SIGN
	end

FortreeCity_EventScript_GymSign::
	msgbox FortreeCity_Text_GymSign, MSGBOX_SIGN
	end

FortreeCity_EventScript_Kecleon::
	lock
	faceplayer
	checkitem ITEM_DEVON_SCOPE
	goto_if_eq VAR_RESULT, TRUE, FortreeCity_EventScript_AskUseDevonScope
	msgbox FortreeCity_Text_SomethingUnseeable, MSGBOX_DEFAULT
	release
	end

FortreeCity_EventScript_AskUseDevonScope::
	msgbox FortreeCity_Text_UnseeableUseDevonScope, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, FortreeCity_EventScript_UseDevonScope
	release
	end

FortreeCity_EventScript_UseDevonScope::
	msgbox FortreeCity_Text_UsedDevonScopePokemonFled, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Movement_KecleonAppears
	waitmovement 0
	waitse
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	applymovement VAR_LAST_TALKED, FortreeCity_Movement_KecleonFlee
	waitmovement 0
	removeobject VAR_LAST_TALKED
	setflag FLAG_KECLEON_FLED_FORTREE
	release
	end

FortreeCity_Movement_KecleonFlee:
	walk_right
	step_end

FortreeCity_Text_SawGiganticPokemonInSky:
	.string "No one believes me, but I saw this\n"
	.string "gigantic POKéMON in the sky.\p"
	.string "It seemed to squirm as it flew toward\n"
	.string "ROUTE 131.\p"
	.string "By the way… Sniff…\n"
	.string "Um… You, uh…smell singed.\p"
	.string "Were you at a volcano or something?$"

FortreeCity_Text_SomethingBlockingGym:
	.string "I want to go to the POKéMON GYM,\n"
	.string "but something's blocking the way.\p"
	.string "After all the bother I went through\n"
	.string "training on ROUTE 120…$"

FortreeCity_Text_ThisTimeIllBeatWinona:
	.string "I've got my pride-and-joy POKéMON\n"
	.string "with me. This time, I'll beat WINONA.$"

FortreeCity_Text_TreesGrowByDrinkingRainwater:
	.string "The ground absorbs rainwater, and\n"
	.string "trees grow by drinking that water…\p"
	.string "Our FORTREE CITY exists because\n"
	.string "there's both water and soil.$"

FortreeCity_Text_EveryoneHealthyAndLively:
	.string "The CITY consists of homes built on\n"
	.string "trees.\p"
	.string "Perhaps because of that lifestyle,\n"
	.string "everyone is healthy and lively.\p"
	.string "Why, even myself--I feel as if I've\n"
	.string "grown thirty years younger.$"

FortreeCity_Text_BugPokemonComeThroughWindow:
	.string "Living on top of trees is okay.\p"
	.string "But sometimes BUG POKéMON come in\n"
	.string "through windows.\l"
	.string "It can be really startling.$"

FortreeCity_Text_PokemonThatEvolveWhenTraded:
	.string "There are POKéMON that evolve when\n"
	.string "you trade them! That's what I heard.$"

FortreeCity_Text_SomethingUnseeable:
	.string "Something unseeable is in the way.$"

FortreeCity_Text_UnseeableUseDevonScope:
	.string "Something unseeable is in the way.\p"
	.string "Want to use the DEVON SCOPE?$"

FortreeCity_Text_UsedDevonScopePokemonFled:
	.string "{PLAYER} used the DEVON SCOPE.\p"
	.string "An invisible POKéMON became completely\n"
	.string "visible!\p"
	.string "The startled POKéMON fled!$"

FortreeCity_Text_CitySign:
	.string "FORTREE CITY\n"
	.string "“The treetop city that frolics with\l"
	.string "nature.”$"

FortreeCity_Text_GymSign:
	.string "FORTREE CITY POKéMON GYM\n"
	.string "LEADER: WINONA\p"
	.string "“The bird user taking flight into\n"
	.string "the world.”$"

FortreeCity_EventScript_EggGiver::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_FORTREE_EGG, FortreeCity_EventScript_EggReceived
	msgbox FortreeCity_Text_YouAreTrainer
	has_party_with_type TYPE_GRASS, 3
	goto_if_eq VAR_RESULT, FALSE, FortreeCity_EventScript_BringGrassType 
	msgbox FortreeCity_Text_WillYouRaiseEgg, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, FortreeCity_EventScript_DeclineEgg
	getpartysize
	goto_if_eq VAR_RESULT, PARTY_SIZE, FortreeCity_EventScript_NoRoomForEgg
	msgbox FortreeCity_Text_GiveEgg
	setflag FLAG_RECEIVED_FORTREE_EGG
	playfanfare MUS_OBTAIN_ITEM
	message FortreeCity_Text_ReceivedTheEgg
	waitfanfare
	giveegg SPECIES_BONSLY
	release
	end

FortreeCity_EventScript_NoRoomForEgg::
	msgbox FortreeCity_Text_NoRoomForEgg
	release
	end

FortreeCity_EventScript_EggReceived::
	msgbox FortreeCity_Text_EggCheckup MSGBOX_NPC
	release
	end

FortreeCity_EventScript_BringGrassType::
	msgbox FortreeCity_Text_BringGrassType, MSGBOX_NPC
	release
	end

FortreeCity_EventScript_DeclineEgg::
	msgbox FortreeCity_Text_EggSad, MSGBOX_NPC
	release
	end

FortreeCity_Text_EggCheckup:
	.string "Oh, it's you! How is that EGG doing?\n"
	.string "I wonder what what GRASS-type POKéMON\p"
	.string "will hatch from it! I hope it's cute.$"

FortreeCity_Text_YouAreTrainer:
	.string "Excuse me, you are a trainer, aren't you?\n"
	.string "I recently found this EGG in the middle\p"
	.string "of several strange-looking trees. I \n"
	.string "couldn't bear the thought of this poor \p"
	.string "EGG being left alone.$"

FortreeCity_Text_BringGrassType:
	.string "Since this EGG was in the middle of\n"
	.string "a grove of trees, I believe it will \p"
	.string "grow in to an adorable GRASS-TYPE \n"
	.string "POKéMON! If you can show me 3 GRASS-\p"
	.string "TYPE POKéMON you have raised, I will\n"
	.string "leave this EGG in your care.$"

FortreeCity_Text_WillYouRaiseEgg:
	.string "You have raised a few GRASS -TYPE\n"
	.string "POKéMON of your own! Will you\p"
	.string "also raise this egg?$"

FortreeCity_Text_NoRoomForEgg:
	.string "Oh dear! You have so many\n"
	.string "wonderful POKéMON with you that\p"
	.string "you have no room for this EGG!\p"
	.string "Please do return when you have\n"
	.string "made space in your party.$"

FortreeCity_Text_EggSad:
	.string "Oh, I am sorry to hear that. I truly\n"
	.string "believed that this EGG would be at home\p"
	.string "with you.$"

FortreeCity_Text_GiveEgg:
	.string "Oh, how wonderful! I am sure this EGG\n"
	.string "will grow healthy and happy with you!$"

FortreeCity_Text_ReceivedTheEgg:
	.string "{PLAYER} received the EGG!$"
