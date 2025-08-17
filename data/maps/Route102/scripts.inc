# 1 "data/maps/Route102/scripts.pory"
Route102_MapScripts::
# 2 "data/maps/Route102/scripts.pory"
	.byte 0
# 3 "data/maps/Route102/scripts.pory"

# 4 "data/maps/Route102/scripts.pory"
Route102_EventScript_LittleBoy::
# 5 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
# 6 "data/maps/Route102/scripts.pory"
	end
# 7 "data/maps/Route102/scripts.pory"

# 8 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignOldale::
# 9 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
# 10 "data/maps/Route102/scripts.pory"
	end
# 11 "data/maps/Route102/scripts.pory"

# 12 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignPetalburg::
# 13 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
# 14 "data/maps/Route102/scripts.pory"
	end
# 15 "data/maps/Route102/scripts.pory"

# 16 "data/maps/Route102/scripts.pory"
Route102_EventScript_Boy::
# 17 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
# 18 "data/maps/Route102/scripts.pory"
	end
# 19 "data/maps/Route102/scripts.pory"

# 20 "data/maps/Route102/scripts.pory"
Route102_EventScript_Calvin::
# 21 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_CALVIN, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated
# 22 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_AUTOCLOSE
# 23 "data/maps/Route102/scripts.pory"
	end
# 24 "data/maps/Route102/scripts.pory"

# 25 "data/maps/Route102/scripts.pory"
Route102_EventScript_Rick::
# 26 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 27 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 28 "data/maps/Route102/scripts.pory"
	end
# 29 "data/maps/Route102/scripts.pory"

# 30 "data/maps/Route102/scripts.pory"
Route102_EventScript_Tiana::
# 31 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
# 32 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
# 33 "data/maps/Route102/scripts.pory"
	end
# 34 "data/maps/Route102/scripts.pory"

# 35 "data/maps/Route102/scripts.pory"
Route102_EventScript_Allen::
# 36 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 37 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
# 38 "data/maps/Route102/scripts.pory"
	end
# 39 "data/maps/Route102/scripts.pory"

# 40 "data/maps/Route102/scripts.pory"
Route102_Text_WatchMeCatchPokemon:
# 41 "data/maps/Route102/scripts.pory"
	.string "WALLY: {PLAYER}…\n"
# 42 "data/maps/Route102/scripts.pory"
	.string "POKéMON hide in tall grass like this,\l"
# 43 "data/maps/Route102/scripts.pory"
	.string "don't they?\p"
# 44 "data/maps/Route102/scripts.pory"
	.string "Please watch me and see if I can\n"
# 45 "data/maps/Route102/scripts.pory"
	.string "catch one properly.\p"
# 46 "data/maps/Route102/scripts.pory"
	.string "…Whoa!$"
# 47 "data/maps/Route102/scripts.pory"

# 48 "data/maps/Route102/scripts.pory"
Route102_Text_WallyIDidIt:
# 49 "data/maps/Route102/scripts.pory"
	.string "WALLY: I did it… It's my…\n"
# 50 "data/maps/Route102/scripts.pory"
	.string "My POKéMON!$"
# 51 "data/maps/Route102/scripts.pory"

# 52 "data/maps/Route102/scripts.pory"
Route102_Text_LetsGoBack:
# 53 "data/maps/Route102/scripts.pory"
	.string "{PLAYER}, thank you!\n"
# 54 "data/maps/Route102/scripts.pory"
	.string "Let's go back to the GYM!$"
# 55 "data/maps/Route102/scripts.pory"

# 56 "data/maps/Route102/scripts.pory"
Route102_Text_ImNotVeryTall:
# 57 "data/maps/Route102/scripts.pory"
	.string "I'm…not very tall, so I sink right\n"
# 58 "data/maps/Route102/scripts.pory"
	.string "into tall grass.\p"
# 59 "data/maps/Route102/scripts.pory"
	.string "The grass goes up my nose and…\n"
# 60 "data/maps/Route102/scripts.pory"
	.string "Fwafwafwafwafwa…\p"
# 61 "data/maps/Route102/scripts.pory"
	.string "Fwatchoo!$"
# 62 "data/maps/Route102/scripts.pory"

# 63 "data/maps/Route102/scripts.pory"
Route102_Text_CatchWholeBunchOfPokemon:
# 64 "data/maps/Route102/scripts.pory"
	.string "I'm going to catch a whole bunch of\n"
# 65 "data/maps/Route102/scripts.pory"
	.string "POKéMON!$"
# 66 "data/maps/Route102/scripts.pory"

# 67 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignOldale:
# 68 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
# 69 "data/maps/Route102/scripts.pory"
	.string "{RIGHT_ARROW} OLDALE TOWN$"
# 70 "data/maps/Route102/scripts.pory"

# 71 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignPetalburg:
# 72 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
# 73 "data/maps/Route102/scripts.pory"
	.string "{LEFT_ARROW} PETALBURG CITY$"
# 74 "data/maps/Route102/scripts.pory"

# 75 "data/maps/Route102/scripts.pory"
Route102_EventScript_Leaf0::
# 76 "data/maps/Route102/scripts.pory"
	lockall
# 77 "data/maps/Route102/scripts.pory"
	addobject LOCALID_ROUTE102_LEAF
# 78 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_ROUTE102_LEAF, 39, 10
# 79 "data/maps/Route102/scripts.pory"
	goto Route102_EventScript_Leaf
# 80 "data/maps/Route102/scripts.pory"
	end
# 81 "data/maps/Route102/scripts.pory"

# 82 "data/maps/Route102/scripts.pory"
Route102_EventScript_Leaf1::
# 83 "data/maps/Route102/scripts.pory"
	lockall
# 84 "data/maps/Route102/scripts.pory"
	addobject LOCALID_ROUTE102_LEAF
# 85 "data/maps/Route102/scripts.pory"
	setobjectxy LOCALID_ROUTE102_LEAF, 39, 11
# 86 "data/maps/Route102/scripts.pory"
	goto Route102_EventScript_Leaf
# 87 "data/maps/Route102/scripts.pory"
	end
# 88 "data/maps/Route102/scripts.pory"

# 89 "data/maps/Route102/scripts.pory"
Route102_EventScript_Leaf::
# 90 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_LEAF, Route102_Movement_LeafStartWalkRight
# 91 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 92 "data/maps/Route102/scripts.pory"
	playse SE_PIN
# 93 "data/maps/Route102/scripts.pory"
	msgbox Route102_Hi, MSGBOX_DEFAULT
# 94 "data/maps/Route102/scripts.pory"
	closemessage
# 95 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_LEAF, Common_Movement_Delay48
# 96 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 97 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_LEAF, Route102_Movement_LeafApproachPlayer
# 98 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 99 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_LeafIntro, MSGBOX_DEFAULT
# 100 "data/maps/Route102/scripts.pory"
	closemessage
# 101 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_LEAF, Common_Movement_WalkInPlaceFasterLeft
# 102 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 103 "data/maps/Route102/scripts.pory"
    msgbox Route102_Text_LeafIntroPause, MSGBOX_DEFAULT
# 104 "data/maps/Route102/scripts.pory"
	closemessage
# 105 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_LEAF, Common_Movement_WalkInPlaceFasterRight
# 106 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 107 "data/maps/Route102/scripts.pory"
    msgbox Route102_Text_LeafIntro2, MSGBOX_DEFAULT
# 108 "data/maps/Route102/scripts.pory"
	closemessage
# 109 "data/maps/Route102/scripts.pory"
    applymovement LOCALID_ROUTE102_LEAF, Common_Movement_WalkInPlaceFasterLeft
# 110 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 111 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_LEAF, Route102_Movement_LeafStartToLeave
# 112 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 113 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_LeafChallenge, MSGBOX_DEFAULT
# 114 "data/maps/Route102/scripts.pory"
	closemessage
# 115 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_LEAF, Route102_Movement_LeafLeave
# 116 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 117 "data/maps/Route102/scripts.pory"
	setvar VAR_ROUTE102_STATE, 1
# 118 "data/maps/Route102/scripts.pory"
    removeobject LOCALID_ROUTE102_LEAF
# 119 "data/maps/Route102/scripts.pory"
    setflag FLAG_HIDE_ROUTE102_LEAF
# 120 "data/maps/Route102/scripts.pory"
	releaseall
# 121 "data/maps/Route102/scripts.pory"
	end
# 122 "data/maps/Route102/scripts.pory"

# 123 "data/maps/Route102/scripts.pory"
Route102_Movement_LeafStartWalkRight:
# 124 "data/maps/Route102/scripts.pory"
	walk_right
# 125 "data/maps/Route102/scripts.pory"
	walk_right
# 126 "data/maps/Route102/scripts.pory"
	walk_right
# 127 "data/maps/Route102/scripts.pory"
	walk_right
# 128 "data/maps/Route102/scripts.pory"
	walk_right
# 129 "data/maps/Route102/scripts.pory"
	step_end
# 130 "data/maps/Route102/scripts.pory"

# 131 "data/maps/Route102/scripts.pory"
Route102_Movement_LeafApproachPlayer:
# 132 "data/maps/Route102/scripts.pory"
	walk_right
# 133 "data/maps/Route102/scripts.pory"
	walk_right
# 134 "data/maps/Route102/scripts.pory"
	walk_right
# 135 "data/maps/Route102/scripts.pory"
	step_end
# 136 "data/maps/Route102/scripts.pory"

# 137 "data/maps/Route102/scripts.pory"
Route102_Movement_LeafStartToLeave:
# 138 "data/maps/Route102/scripts.pory"
	walk_left
# 139 "data/maps/Route102/scripts.pory"
	walk_left
# 140 "data/maps/Route102/scripts.pory"
	walk_left
# 141 "data/maps/Route102/scripts.pory"
	walk_left
# 142 "data/maps/Route102/scripts.pory"
	step_end
# 143 "data/maps/Route102/scripts.pory"

# 144 "data/maps/Route102/scripts.pory"
Route102_Movement_LeafLeave:
# 145 "data/maps/Route102/scripts.pory"
	walk_left
# 146 "data/maps/Route102/scripts.pory"
	walk_left
# 147 "data/maps/Route102/scripts.pory"
	walk_left
# 148 "data/maps/Route102/scripts.pory"
	walk_left
# 149 "data/maps/Route102/scripts.pory"
	step_end
# 150 "data/maps/Route102/scripts.pory"

# 151 "data/maps/Route102/scripts.pory"
Route102_Hi:
# 152 "data/maps/Route102/scripts.pory"
	.string "Hi!\n"
# 153 "data/maps/Route102/scripts.pory"
    .string "I'm Leaf!$"
# 154 "data/maps/Route102/scripts.pory"

# 155 "data/maps/Route102/scripts.pory"
Route102_Text_LeafIntro:
# 156 "data/maps/Route102/scripts.pory"
	.string "LEAF: Are you a new trainer?\n"
# 157 "data/maps/Route102/scripts.pory"
    .string "It seems like you just got a POKéMON.\p"
# 158 "data/maps/Route102/scripts.pory"
    .string "I've been searching all of HOENN in\n"
# 159 "data/maps/Route102/scripts.pory"
    .string "hopes of finding up and coming trainers.$"
# 160 "data/maps/Route102/scripts.pory"

# 161 "data/maps/Route102/scripts.pory"
Route102_Text_LeafIntroPause:
# 162 "data/maps/Route102/scripts.pory"
    .string "You seem to have potential...$"
# 163 "data/maps/Route102/scripts.pory"

# 164 "data/maps/Route102/scripts.pory"
Route102_Text_LeafIntro2:
# 165 "data/maps/Route102/scripts.pory"
    .string "LEAF: You may have noticed that your\n"
# 166 "data/maps/Route102/scripts.pory"
    .string "POKéMON stopped gaining experience at\l"
# 167 "data/maps/Route102/scripts.pory"
    .string "a certain level.\p"
# 168 "data/maps/Route102/scripts.pory"
    .string "Many new trainers struggle to train\n"
# 169 "data/maps/Route102/scripts.pory"
    .string "their POKéMON past a certain point, but\l"
# 170 "data/maps/Route102/scripts.pory"
    .string "I can help you with that.\p"
# 171 "data/maps/Route102/scripts.pory"
    .string "I'll check in on you throughout your\n"
# 172 "data/maps/Route102/scripts.pory"
    .string "journey to make sure your POKéMON can\l"
# 173 "data/maps/Route102/scripts.pory"
    .string "get the training they need.$"
# 174 "data/maps/Route102/scripts.pory"

# 175 "data/maps/Route102/scripts.pory"
Route102_Text_LeafChallenge:
# 176 "data/maps/Route102/scripts.pory"
	.string "I'll see you at the end of this route.\n"
# 177 "data/maps/Route102/scripts.pory"
	.string "You better be ready to battle!$"

Route102_EventScript_LeafBattle::
# 182 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_ROUTE102_LEAF, Route102_Text_LeafBattleIntro, Route102_Text_LeafDefeat, Route102_EventScript_LevelCap
	end


Route102_EventScript_LevelCap::
# 187 "data/maps/Route102/scripts.pory"
	setvar B_LEVEL_CAP_VARIABLE, 10
# 188 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_LeafLevelCap, MSGBOX_AUTOCLOSE
# 189 "data/maps/Route102/scripts.pory"
	applymovement LOCALID_ROUTE102_LEAF2, Route102_Movement_LeafDefeated
# 190 "data/maps/Route102/scripts.pory"
	setflag FLAG_HIDE_ROUTE102_LEAF2
	end


# 210 "data/maps/Route102/scripts.pory"
Route102_Movement_LeafDefeated:
# 211 "data/maps/Route102/scripts.pory"
	walk_left
# 212 "data/maps/Route102/scripts.pory"
	walk_left
# 213 "data/maps/Route102/scripts.pory"
	walk_left
# 214 "data/maps/Route102/scripts.pory"
	walk_left
# 215 "data/maps/Route102/scripts.pory"
	walk_left
# 216 "data/maps/Route102/scripts.pory"
	walk_left
# 217 "data/maps/Route102/scripts.pory"
	walk_left
# 218 "data/maps/Route102/scripts.pory"
	walk_left
# 219 "data/maps/Route102/scripts.pory"
	step_end

Route102_Text_LeafLevelCap::
# 194 "data/maps/Route102/scripts.pory"
	.string "LEAF: What a great fight!\n"
	.string "You may notice that you can now level\l"
	.string "up your POKéMON even more.\p"
	.string "I'll see you again soon!$"

Route102_Text_LeafBattleIntro::
# 201 "data/maps/Route102/scripts.pory"
	.string "Alright! Time to show me what you got.\n"
	.string "I hope you have been training!$"

Route102_Text_LeafDefeat::
# 206 "data/maps/Route102/scripts.pory"
	.string "Wow, you have been training!$"
