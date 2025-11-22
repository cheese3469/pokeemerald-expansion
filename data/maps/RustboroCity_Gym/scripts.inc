# 1 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_MapScripts::
# 2 "data/maps/RustboroCity_Gym/scripts.pory"
	.byte 0
# 3 "data/maps/RustboroCity_Gym/scripts.pory"

# 4 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Roxanne::
# 5 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_GYM_FOSSILS
# 6 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
# 7 "data/maps/RustboroCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 8 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Gym_EventScript_RoxanneRematch
# 9 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, RustboroCity_Gym_EventScript_GiveRockTomb
# 10 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 11 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 12 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 13 "data/maps/RustboroCity_Gym/scripts.pory"

# 14 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneDefeated::
# 15 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_Text_ReceivedStoneBadge
# 16 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 17 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 18 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
# 19 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 20 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 21 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 22 "data/maps/RustboroCity_Gym/scripts.pory"
    setvar VAR_RUSTBORO_GYM_STATE, 3
# 23 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 24 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 25 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 26 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 27 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveRockTomb
# 28 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 29 "data/maps/RustboroCity_Gym/scripts.pory"

# 30 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveRockTomb::
# 31 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 32 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 33 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 34 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
# 35 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 36 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 37 "data/maps/RustboroCity_Gym/scripts.pory"

# 38 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneRematch::
# 39 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
# 40 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
# 41 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 42 "data/maps/RustboroCity_Gym/scripts.pory"

# 43 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 44 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
# 45 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 46 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 47 "data/maps/RustboroCity_Gym/scripts.pory"

# 48 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Tommy::
# 49 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
# 50 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 51 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 52 "data/maps/RustboroCity_Gym/scripts.pory"

# 53 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc::
# 54 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 55 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 56 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 57 "data/maps/RustboroCity_Gym/scripts.pory"

# 58 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide::
# 59 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 60 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 61 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
# 62 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 63 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 64 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 65 "data/maps/RustboroCity_Gym/scripts.pory"

# 66 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuidePostVictory::
# 67 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 68 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 69 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 70 "data/maps/RustboroCity_Gym/scripts.pory"

# 71 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue::
# 72 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 73 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 74 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 75 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 76 "data/maps/RustboroCity_Gym/scripts.pory"

# 77 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue::
# 78 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 79 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 80 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 81 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 82 "data/maps/RustboroCity_Gym/scripts.pory"

# 83 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatueCertified::
# 84 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 85 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 86 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 87 "data/maps/RustboroCity_Gym/scripts.pory"

# 88 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue::
# 89 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 90 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 91 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 92 "data/maps/RustboroCity_Gym/scripts.pory"

# 93 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RegisterRoxanne::
# 94 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 95 "data/maps/RustboroCity_Gym/scripts.pory"
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
# 96 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 97 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 98 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 99 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 100 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 101 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 102 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 103 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 104 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 105 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 106 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 107 "data/maps/RustboroCity_Gym/scripts.pory"

# 108 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuideAdvice:
# 109 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Yo, how's it going?\p"
# 110 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Listen, my friend!\n"
# 111 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you like to become the CHAMPION?\p"
# 112 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm no TRAINER, not me, but I can\n"
# 113 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "sure give you winning advice.\p"
# 114 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's settled, then! We'll aim for the\n"
# 115 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON CHAMPIONSHIP together!\p"
# 116 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It's your job as a TRAINER to collect\n"
# 117 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GYM BADGES, am I right?\p"
# 118 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "But GYM LEADERS aren't pushovers!\p"
# 119 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "And that's where I come in!\n"
# 120 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm here to provide expert advice!\p"
# 121 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE, the GYM LEADER, is a fan\n"
# 122 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "of ROCK-type POKéMON.\p"
# 123 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The ROCK type is very durable, but\n"
# 124 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "it can't stand WATER-type and\l"
# 125 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GRASS-type moves.\p"
# 126 "data/maps/RustboroCity_Gym/scripts.pory"
    .string "And with our recent renovations, ROXANNE\n"
# 127 "data/maps/RustboroCity_Gym/scripts.pory"
    .string "has updated her team, so you may see\l"
# 128 "data/maps/RustboroCity_Gym/scripts.pory"
    .string "POKéMON of other types as well.\p"
# 129 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Come see me afterwards, if you beat\n"
# 130 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the GYM LEADER.\p"
# 131 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, go for it!$"
# 132 "data/maps/RustboroCity_Gym/scripts.pory"

# 133 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuidePostVictory:
# 134 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Whoa! What a breathtaking victory!\n"
# 135 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My cheering must've worked!\p"
# 136 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Great!\n"
# 137 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Check your TRAINER CARD.\p"
# 138 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE you got should be\n"
# 139 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "properly recorded on it.\p"
# 140 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "In other words…\p"
# 141 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You've climbed the first step on\n"
# 142 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the stairs to the CHAMPIONSHIP!\p"
# 143 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's got to feel awesome!$"
# 144 "data/maps/RustboroCity_Gym/scripts.pory"

# 145 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshIntro:
# 146 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Don't take us GYM TRAINERS lightly!\n"
# 147 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'll show you why we're better!$"
# 148 "data/maps/RustboroCity_Gym/scripts.pory"

# 149 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshDefeat:
# 150 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You were too good for me…$"
# 151 "data/maps/RustboroCity_Gym/scripts.pory"

# 152 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshPostBattle:
# 153 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You haven't seen anything of the ROCK\n"
# 154 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "type's terrifying power!$"
# 155 "data/maps/RustboroCity_Gym/scripts.pory"

# 156 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyIntro:
# 157 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you can't beat me, you won't stand\n"
# 158 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "a chance against ROXANNE!$"
# 159 "data/maps/RustboroCity_Gym/scripts.pory"

# 160 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyDefeat:
# 161 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wow! You've got some potential!$"
# 162 "data/maps/RustboroCity_Gym/scripts.pory"

# 163 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyPostBattle:
# 164 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE is stronger than me by\n"
# 165 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "several times.\p"
# 166 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You'd better be on your guard!$"
# 167 "data/maps/RustboroCity_Gym/scripts.pory"

# 168 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcIntro:
# 169 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "We might be in the middle of town,\n"
# 170 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "but so what?\p"
# 171 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My ROCK POKéMON need room to\n"
# 172 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rampage!$"
# 173 "data/maps/RustboroCity_Gym/scripts.pory"

# 174 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcDefeat:
# 175 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, man oh man!\n"
# 176 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Our challenger is one feisty customer!$"
# 177 "data/maps/RustboroCity_Gym/scripts.pory"

# 178 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcPostBattle:
# 179 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I have to hand it to our LEADER.\p"
# 180 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It took smarts and sense for her to\n"
# 181 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "pick the ROCK type at her young age.$"
# 182 "data/maps/RustboroCity_Gym/scripts.pory"

# 183 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneIntro:
# 184 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hello, I am ROXANNE, the RUSTBORO\n"
# 185 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON GYM LEADER.\p"
# 186 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I became a GYM LEADER so that I might\n"
# 187 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "apply what I learned at the POKéMON\l"
# 188 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TRAINER'S SCHOOL in battle.\p"
# 189 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you kindly demonstrate how you\n"
# 190 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battle, and with which POKéMON?$"
# 191 "data/maps/RustboroCity_Gym/scripts.pory"

# 192 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneDefeat:
# 193 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "So…\n"
# 194 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I lost…\p"
# 195 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It seems that I still have much more\n"
# 196 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "to learn…\p"
# 197 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I understand.\p"
# 198 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The POKéMON LEAGUE's rules state\n"
# 199 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that TRAINERS are to be given this\l"
# 200 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "if they defeat a GYM LEADER.\p"
# 201 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please accept the official POKéMON\n"
# 202 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "LEAGUE STONE BADGE.$"
# 203 "data/maps/RustboroCity_Gym/scripts.pory"

# 204 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReceivedStoneBadge:
# 205 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the STONE BADGE\n"
# 206 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "from ROXANNE.$"
# 207 "data/maps/RustboroCity_Gym/scripts.pory"

# 208 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_StoneBadgeInfoTakeThis:
# 209 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE enables POKéMON to\n"
# 210 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "use the HM move CUT outside of battle.\p"
# 211 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please take this with you, too.$"
# 212 "data/maps/RustboroCity_Gym/scripts.pory"

# 213 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ExplainRockTomb:
# 214 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That TECHNICAL MACHINE, TM39,\n"
# 215 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "contains ROCK TOMB.\p"
# 216 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It not only inflicts damage by dropping\n"
# 217 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rocks, it also lowers SPEED.\p"
# 218 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you use a TM, it instantly teaches\n"
# 219 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the move to a POKéMON.\p"
# 220 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Remember, a TM can be used only once,\n"
# 221 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so think before you use it.$"
# 222 "data/maps/RustboroCity_Gym/scripts.pory"

# 223 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostBattle:
# 224 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Since you are so strong, you should\n"
# 225 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "challenge other GYM LEADERS.\p"
# 226 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "By battling many TRAINERS, you should\n"
# 227 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "learn many things.$"
# 228 "data/maps/RustboroCity_Gym/scripts.pory"

# 229 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatue:
# 230 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM$"
# 231 "data/maps/RustboroCity_Gym/scripts.pory"

# 232 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatueCertified:
# 233 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\p"
# 234 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE'S CERTIFIED TRAINERS:\n"
# 235 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 236 "data/maps/RustboroCity_Gym/scripts.pory"

# 237 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRegisterCall:
# 238 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 239 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Beep!\p"
# 240 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: Oh, hello, {PLAYER}?\n"
# 241 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This is ROXANNE of RUSTBORO CITY.\p"
# 242 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I heard from BRAWLY that you're\n"
# 243 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "moving up through the ranks of\l"
# 244 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TRAINERS at an incredible clip.\p"
# 245 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, I'd rather not think that\n"
# 246 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I can't beat you.\p"
# 247 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I promise, I will shape up my GYM\n"
# 248 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so that you may challenge us again.\p"
# 249 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I hope you'll be looking forward to\n"
# 250 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that occasion as much as me!\p"
# 251 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 252 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Click!$"
# 253 "data/maps/RustboroCity_Gym/scripts.pory"

# 254 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RegisteredRoxanne:
# 255 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Registered GYM LEADER ROXANNE\n"
# 256 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 257 "data/maps/RustboroCity_Gym/scripts.pory"

# 258 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePreRematch:
# 259 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 260 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 261 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 262 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 263 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 264 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become. Let us battle!$"
# 265 "data/maps/RustboroCity_Gym/scripts.pory"

# 266 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchDefeat:
# 267 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grr…\n"
# 268 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Again, I have lost…$"
# 269 "data/maps/RustboroCity_Gym/scripts.pory"

# 270 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostRematch:
# 271 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I still have much to learn\n"
# 272 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "when it comes to battling POKéMON.\p"
# 273 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That awareness makes me love battling\n"
# 274 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "all that much more!$"
# 275 "data/maps/RustboroCity_Gym/scripts.pory"

# 276 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons:
# 277 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 278 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 279 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 280 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 281 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 282 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become…\p"
# 283 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, no…\n"
# 284 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You only have one POKéMON with you?\p"
# 285 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please return with at least one more\n"
# 286 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON.$"

RustboroCity_Gym_EventScript_GymIntro::
# 290 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 291 "data/maps/RustboroCity_Gym/scripts.pory"
	playse SE_PIN
# 292 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_RUSTBORO_GYM_GUIDE, Common_Movement_ExclamationMark
# 293 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_RUSTBORO_GYM_GUIDE, Common_Movement_WalkInPlaceFasterLeft
# 294 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 295 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox Rustboro_Gym_Text_GymIntro, MSGBOX_DEFAULT
# 296 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_RUSTBORO_GYM_GUIDE, Common_Movement_FaceOriginalDirection
# 297 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 298 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_GYM_STATE, 1
# 299 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
	end


RustboroCity_Gym_EventScript_DungeonTime::
# 329 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_GYM_STATE, 2
	end


RustboroCity_Gym_EventScript_NoLeaving::
# 334 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 335 "data/maps/RustboroCity_Gym/scripts.pory"
	playse SE_PIN
# 336 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_RUSTBORO_GYM_GUIDE, Common_Movement_ExclamationMark
# 337 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_RUSTBORO_GYM_GUIDE, Common_Movement_WalkInPlaceFasterLeft
# 338 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox Rustboro_Gym_Text_NoLeaving, MSGBOX_DEFAULT
# 339 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Rustboro_Gym_Movement_NoLeaving
# 340 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 341 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement LOCALID_RUSTBORO_GYM_GUIDE, Common_Movement_FaceOriginalDirection
# 342 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 0
# 343 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
	end


# 355 "data/maps/RustboroCity_Gym/scripts.pory"
Rustboro_Gym_Movement_NoLeaving:
# 356 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 357 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_up
# 358 "data/maps/RustboroCity_Gym/scripts.pory"
	step_end

Rustboro_Gym_EventScript_Liam::
# 362 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LIAM, Rustboro_Gym_Text_LiamIntro, Rustboro_Gym_Text_LiamDefeat
# 363 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox Rustboro_Gym_Text_LiamPostBattle, MSGBOX_AUTOCLOSE
	end


Rustboro_Gym_EventScript_Oswald::
# 381 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_OSWALD, Rustboro_Gym_Text_OswaldIntro, Rustboro_Gym_Text_OswaldDefeat
# 382 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox Rustboro_Gym_Text_OswaldPostBattle, MSGBOX_AUTOCLOSE
	end


Rustboro_Gym_EventScript_Russell::
# 402 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_RUSSELL, Rustboro_Gym_Text_RussellIntro, Rustboro_Gym_Text_RussellDefeat
# 403 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox Rustboro_Gym_Text_RussellPostBattle, MSGBOX_AUTOCLOSE
	end


Rustboro_Gym_EventScript_Brayden::
# 421 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRAYDEN, Rustboro_Gym_Text_BraydenIntro, Rustboro_Gym_Text_BraydenDefeat
# 422 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox Rustboro_Gym_Text_BraydenPostBattle, MSGBOX_AUTOCLOSE
	end


Rustboro_Gym_EventScript_Tyler::
# 440 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TYLER, Rustboro_Gym_Text_TylerIntro, Rustboro_Gym_Text_TylerDefeat
# 441 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox Rustboro_Gym_Text_TylerPostBattle, MSGBOX_AUTOCLOSE
	end


Rustboro_Gym_EventScript_Adam::
# 459 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ADAM, Rustboro_Gym_Text_AdamIntro, Rustboro_Gym_Text_AdamDefeat
# 460 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox Rustboro_Gym_Text_AdamPostBattle, MSGBOX_AUTOCLOSE
	end


Rustboro_Gym_EventScript_Abe::
# 478 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ABE, Rustboro_Gym_Text_AbeIntro, Rustboro_Gym_Text_AbeDefeat
# 479 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox Rustboro_Gym_Text_AbePostBattle, MSGBOX_AUTOCLOSE
	end


Rustboro_Gym_Text_GymIntro::
# 303 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hey!\n"
	.string "Thanks for visiting the RUSTBORO\l"
	.string "CITY POKéMON GYM. I'm your guide, and\l"
	.string "I'm here to tell you all about our\n"
	.string "recent renovations.\p"
	.string "This gym is now a lot bigger than how\n"
	.string "you may remember it. And we have a lot\l"
	.string "more GYM TRAINERS too. You may even\l"
	.string "find some helpful items lying around.\p"
	.string "And while our renovations took place,\n"
	.string "the GYM TRAINERS and ROXANNE had plenty\l"
	.string "of time to expand theit teams, so you\l"
	.string "may notice a wider range in the POKéMON\l"
	.string "used in the GYM.\p"
	.string "But most importantly, once you begin\n"
	.string "the gym's trial, you won't be able to\l"
	.string "leave until you fight our GYM LEADER,\l"
	.string "ROXANNE.\p"
	.string "So, once you step foot into the maze\n"
	.string "you see before you, there is no exit\l"
	.string "until you face off against ROXANNE.\l"
	.string "Good luck out there!$"

Rustboro_Gym_Text_NoLeaving::
# 347 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hey!\n"
	.string "What did I say about leaving once\l"
	.string "you entered the gym?\p"
	.string "You are stuck in here until you\n"
	.string "battle ROXANNE. Good luck!$"

Rustboro_Gym_Text_LiamIntro::
# 367 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I have the cutest ROCK POKéMON!$"

Rustboro_Gym_Text_LiamDefeat::
# 371 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "At least my POKéMON will always be cute.$"

Rustboro_Gym_Text_LiamPostBattle::
# 375 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Whoever said a rock can't be cute was\n"
	.string "totally wrong.$"

Rustboro_Gym_Text_OswaldIntro::
# 386 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Looks like you're stuck between\n"
	.string "a rock and a hard place!$"

Rustboro_Gym_Text_OswaldDefeat::
# 391 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You wiggled your way out this time.$"

Rustboro_Gym_Text_OswaldPostBattle::
# 395 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I've never understood what's so bad\n"
	.string "about being stuck between a rock and\l"
	.string "a hard place. I like rocks!$"

Rustboro_Gym_Text_RussellIntro::
# 407 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Better watch out, my POKéMON are going\n"
	.string "to rock your world!$"

Rustboro_Gym_Text_RussellDefeat::
# 412 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Turns out it was me who got rocked.$"

Rustboro_Gym_Text_RussellPostBattle::
# 416 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm never going to stop rocking.$"

Rustboro_Gym_Text_BraydenIntro::
# 426 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm going to rock until I reach the top!$"

Rustboro_Gym_Text_BraydenDefeat::
# 430 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I just hit rock bottom...$"

Rustboro_Gym_Text_BraydenPostBattle::
# 434 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "A true rocker never stops rocking.\n"
	.string "Even when they have hit rock bottom.$"

Rustboro_Gym_Text_TylerIntro::
# 445 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I can't wait to battle with my ROCK\n"
	.string "POKéMON after a log day in lab.$"

Rustboro_Gym_Text_TylerDefeat::
# 450 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "All I ever see is rocks...$"

Rustboro_Gym_Text_TylerPostBattle::
# 454 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "What's your favorite type of rock?$"

Rustboro_Gym_Text_AdamIntro::
# 464 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm about to teach you a lesson. A\n"
	.string "geology lesson!$"

Rustboro_Gym_Text_AdamDefeat::
# 469 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well isn't someone a know-it-all?$"

Rustboro_Gym_Text_AdamPostBattle::
# 473 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I think rocks are the coolest.$"

Rustboro_Gym_Text_AbeIntro::
# 483 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "According to my calculations, it's\n"
	.string "time to battle!$"

Rustboro_Gym_Text_AbeDefeat::
# 488 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I guess my math was a bit off.$"

Rustboro_Gym_Text_AbePostBattle::
# 492 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Today I'm researching rocks. And\n"
	.string "tomorrow I'll also be researching\l"
	.string "rocks. And the day after that too.\l"
	.string "It never ends!$"
