.set LOCALID_TWIN, 2

VerdanturfTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_OnTransition
	.byte 0

VerdanturfTown_OnTransition:
	setflag FLAG_VISITED_VERDANTURF_TOWN
	setvar VAR_CONTEST_HALL_STATE, 0
	end

VerdanturfTown_EventScript_Twin::
	lock
	faceplayer
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_TwinTunnelOpen
	msgbox VerdanturfTown_Text_ManTryingToDigTunnel, MSGBOX_DEFAULT
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

VerdanturfTown_EventScript_TwinTunnelOpen::
	msgbox VerdanturfTown_Text_ManDugTunnelForLove, MSGBOX_DEFAULT
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

VerdanturfTown_EventScript_Man::
	msgbox VerdanturfTown_Text_AirCleanHere, MSGBOX_NPC
	end

VerdanturfTown_EventScript_Camper::
	msgbox VerdanturfTown_Text_MakeBattleTentDebut, MSGBOX_NPC
	end

VerdanturfTown_EventScript_Boy::
	lock
	faceplayer
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_BoyTunnelOpen
	msgbox VerdanturfTown_Text_GuyTryingToBustThroughCave, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_BoyTunnelOpen::
	msgbox VerdanturfTown_Text_EasyToGetToRustboroNow, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_TownSign::
	msgbox VerdanturfTown_Text_TownSign, MSGBOX_SIGN
	end

VerdanturfTown_EventScript_WandasHouseSign::
	msgbox VerdanturfTown_Text_WandasHouse, MSGBOX_SIGN
	end

VerdanturfTown_EventScript_BattleTentSign::
	msgbox VerdanturfTown_Text_BattleTentSign, MSGBOX_SIGN
	end

VerdanturfTown_EventScript_RusturfTunnelSign::
	msgbox VerdanturfTown_Text_RusturfTunnelSign, MSGBOX_SIGN
	end

VerdanturfTown_Text_ManTryingToDigTunnel:
	.string "My papa told me.\p"
	.string "He says this tunnel is full of\n"
	.string "timid POKéMON.\p"
	.string "They get all scared of loud noise and\n"
	.string "make a big uproar.\p"
	.string "So they had to stop the big tunnel\n"
	.string "project.\p"
	.string "But there's one man. He's trying to dig\n"
	.string "the tunnel by himself!$"

VerdanturfTown_Text_ManDugTunnelForLove:
	.string "There was a man who dug a tunnel for\n"
	.string "a lady he loved.\p"
	.string "I don't really get it, but hey!$"

VerdanturfTown_Text_AirCleanHere:
	.string "The way the winds blow, volcanic ash\n"
	.string "is never blown in this direction.\p"
	.string "The air is clean and delicious here.\n"
	.string "Living here should do wonders for even\l"
	.string "frail and sickly people.$"

VerdanturfTown_Text_MakeBattleTentDebut:
	.string "My POKéMON and I, we've been riding\n"
	.string "a hot winning streak.\p"
	.string "So I decided to make my BATTLE TENT\n"
	.string "debut in this town.$"

VerdanturfTown_Text_GuyTryingToBustThroughCave:
	.string "Did you see the cave next to the\n"
	.string "POKéMON MART?\p"
	.string "There's a guy in there who's trying to\n"
	.string "bust up boulders so he can bust out\l"
	.string "through to the other side.\p"
	.string "It'd be great if we could go through…\n"
	.string "It'll make it easy to visit RUSTBORO.$"

VerdanturfTown_Text_EasyToGetToRustboroNow:
	.string "That cave next to the POKéMON MART\n"
	.string "is now a tunnel to the other side.\p"
	.string "It's great--it's easy to go shop for\n"
	.string "new DEVON products in RUSTBORO now.$"

VerdanturfTown_Text_TownSign:
	.string "VERDANTURF TOWN\p"
	.string "“The windswept highlands with the\n"
	.string "sweet fragrance of grass.”$"

VerdanturfTown_Text_WandasHouse:
	.string "WANDA'S HOUSE$"

VerdanturfTown_Text_BattleTentSign:
	.string "BATTLE TENT VERDANTURF SITE\n"
	.string "“Feast Your Eyes on Battles!”$"

VerdanturfTown_Text_RusturfTunnelSign:
	.string "RUSTURF TUNNEL\n"
	.string "“Linking RUSTBORO and VERDANTURF\p"
	.string "“The tunnel project has been\n"
	.string "canceled.”$"

VerdanturfTown_EventScript_Hank::
	trainerbattle_single TRAINER_HANK, VerdanturfTown_Text_HankIntro, VerdanturfTown_Text_HankDefeat
	msgbox VerdanturfTown_Text_HankPostBattle, MSGBOX_AUTOCLOSE
	end

VerdanturfTown_EventScript_Simba::
	trainerbattle_single TRAINER_SIMBA, VerdanturfTown_Text_SimbaIntro, VerdanturfTown_Text_SimbaDefeat
	msgbox VerdanturfTown_Text_SimbaPostBattle, MSGBOX_AUTOCLOSE
	end

VerdanturfTown_EventScript_Jack::
	trainerbattle_single TRAINER_JACK, VerdanturfTown_Text_JackIntro, VerdanturfTown_Text_JackDefeat
	msgbox VerdanturfTown_Text_JackPostBattle, MSGBOX_AUTOCLOSE
	end

VerdanturfTown_EventScript_Jill::
	trainerbattle_single TRAINER_JILL, VerdanturfTown_Text_JillIntro, VerdanturfTown_Text_JillDefeat, VerdanturfTown_EventScript_JillDefeated
	msgbox VerdanturfTown_Text_JillPostBattle, MSGBOX_AUTOCLOSE
	end

VerdanturfTown_EventScript_JillDefeated::
	giveitem ITEM_KINGS_ROCK
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	setflag FLAG_RECEIVED_HILL_KINGS_ROCK
	return

VerdanturfTown_EventScript_KOTH_Guide::
	lock
	faceplayer
	goto_if_defeated TRAINER_JILL, VerdanturfTown_EventScript_KOTH_Guide_Victory
	msgbox VerdanturfTown_Text_KOTH_Guide MSGBOX_NPC
	release
	end


VerdanturfTown_EventScript_KOTH_Guide_Victory::
	msgbox VerdanturfTown_Text_KOTH_Guide_Victory MSGBOX_NPC
	release
	end

VerdanturfTown_Text_KOTH_Guide:
	.string "Are you here to play KING OF THE HILL\n"
	.string "with us? If you beat everyone on the\p"
	.string "hill and become KING you win the\n"
	.string "special prize -- a KING'S ROCK!$"

VerdanturfTown_Text_KOTH_Guide_Victory:
	.string "Wow! I can't believe you beat KING\n"
	.string "JILL! You must be really strong!\p"
	.string "Now we'll have to get another KING'S\n"
	.string "ROCK from our parents.$"