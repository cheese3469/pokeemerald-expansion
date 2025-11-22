# 1 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_MapScripts::
# 2 "data/maps/PetalburgWoods/scripts.pory"
	.byte 0
# 3 "data/maps/PetalburgWoods/scripts.pory"

# 4 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft::
# 5 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 6 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 7 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
# 8 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 9 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 10 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 11 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 12 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 13 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 14 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 15 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 16 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherLeft
# 17 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 18 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 19 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 20 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 21 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 22 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft
# 23 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 24 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 25 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 26 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
# 27 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 28 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 29 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 30 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 31 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 32 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 33 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 34 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
# 35 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 36 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 37 "data/maps/PetalburgWoods/scripts.pory"
	end
# 38 "data/maps/PetalburgWoods/scripts.pory"

# 39 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight::
# 40 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 41 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 42 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerRight
# 43 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 44 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 45 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 46 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 47 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 48 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 49 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 50 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 51 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 52 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 53 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherRight
# 54 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 55 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 56 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 57 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 58 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 59 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight
# 60 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 61 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 62 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 63 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 64 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 65 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 66 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 67 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 68 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 69 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 70 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitRight
# 71 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 72 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 73 "data/maps/PetalburgWoods/scripts.pory"
	end
# 74 "data/maps/PetalburgWoods/scripts.pory"

# 75 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherIntro::
# 76 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 77 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 78 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
# 79 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 80 "data/maps/PetalburgWoods/scripts.pory"
	return
# 81 "data/maps/PetalburgWoods/scripts.pory"

# 82 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherPostBattle::
# 83 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
# 84 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 85 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaRunAway
# 86 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 87 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_GRUNT
# 88 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 89 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 90 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
# 91 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 92 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_BagFull
# 93 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 94 "data/maps/PetalburgWoods/scripts.pory"
	end
# 95 "data/maps/PetalburgWoods/scripts.pory"

# 96 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_BagFull::
# 97 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 98 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 99 "data/maps/PetalburgWoods/scripts.pory"
	end
# 100 "data/maps/PetalburgWoods/scripts.pory"

# 101 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherFinish::
# 102 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
# 103 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
# 104 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 105 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
# 106 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 107 "data/maps/PetalburgWoods/scripts.pory"
	return
# 108 "data/maps/PetalburgWoods/scripts.pory"

# 109 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RemoveDevonResearcher::
# 110 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE
# 111 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 112 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
# 113 "data/maps/PetalburgWoods/scripts.pory"
	end
# 114 "data/maps/PetalburgWoods/scripts.pory"

# 115 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 116 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 117 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 118 "data/maps/PetalburgWoods/scripts.pory"
	delay_4
# 119 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 120 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 121 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 122 "data/maps/PetalburgWoods/scripts.pory"
	face_left
# 123 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 124 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 125 "data/maps/PetalburgWoods/scripts.pory"
	face_down
# 126 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 127 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 128 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 129 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 130 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 131 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 132 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 133 "data/maps/PetalburgWoods/scripts.pory"

# 134 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitLeft:
# 135 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 136 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 137 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 138 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 139 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 140 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 141 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 142 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 143 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 144 "data/maps/PetalburgWoods/scripts.pory"

# 145 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
# 146 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 147 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 148 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 149 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 150 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 151 "data/maps/PetalburgWoods/scripts.pory"

# 152 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
# 153 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 154 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 155 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 156 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 157 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 158 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_right
# 159 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 160 "data/maps/PetalburgWoods/scripts.pory"

# 161 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitRight:
# 162 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 163 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 164 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 165 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 166 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 167 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 168 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 169 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 170 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 171 "data/maps/PetalburgWoods/scripts.pory"

# 172 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_WatchResearcherLeave:
# 173 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 174 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 175 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 176 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 177 "data/maps/PetalburgWoods/scripts.pory"

# 178 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
# 179 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 180 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 181 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 182 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 183 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 184 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 185 "data/maps/PetalburgWoods/scripts.pory"

# 186 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
# 187 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 188 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 189 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 190 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 191 "data/maps/PetalburgWoods/scripts.pory"

# 192 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherStartExit:
# 193 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_down
# 194 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 195 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 196 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 197 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 198 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 199 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 200 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 201 "data/maps/PetalburgWoods/scripts.pory"

# 202 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherLeft:
# 203 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 204 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 205 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 206 "data/maps/PetalburgWoods/scripts.pory"

# 207 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaBackOff:
# 208 "data/maps/PetalburgWoods/scripts.pory"
	lock_facing_direction
# 209 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 210 "data/maps/PetalburgWoods/scripts.pory"
	unlock_facing_direction
# 211 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 212 "data/maps/PetalburgWoods/scripts.pory"

# 213 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaRunAway:
# 214 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 215 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 216 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 217 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 218 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 219 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 220 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 221 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 222 "data/maps/PetalburgWoods/scripts.pory"

# 223 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherRight:
# 224 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 225 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 226 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 227 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 228 "data/maps/PetalburgWoods/scripts.pory"

# 229 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaEntrance:
# 230 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 231 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 232 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 233 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 234 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 235 "data/maps/PetalburgWoods/scripts.pory"

# 236 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachPlayer:
# 237 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 238 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 239 "data/maps/PetalburgWoods/scripts.pory"

# 240 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy1::
# 241 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
# 242 "data/maps/PetalburgWoods/scripts.pory"
	end
# 243 "data/maps/PetalburgWoods/scripts.pory"

# 244 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy2::
# 245 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
# 246 "data/maps/PetalburgWoods/scripts.pory"
	end
# 247 "data/maps/PetalburgWoods/scripts.pory"

# 248 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign1::
# 249 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
# 250 "data/maps/PetalburgWoods/scripts.pory"
	end
# 251 "data/maps/PetalburgWoods/scripts.pory"

# 252 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Lyle::
# 253 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
# 254 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
# 255 "data/maps/PetalburgWoods/scripts.pory"
	end
# 256 "data/maps/PetalburgWoods/scripts.pory"

# 257 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_James::
# 258 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_JAMES, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose
# 259 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_AUTOCLOSE
# 260 "data/maps/PetalburgWoods/scripts.pory"
	end
# 261 "data/maps/PetalburgWoods/scripts.pory"

# 262 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NotAOneToBeFound:
# 263 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hmmm…\n"
# 264 "data/maps/PetalburgWoods/scripts.pory"
	.string "Not a one to be found…$"
# 265 "data/maps/PetalburgWoods/scripts.pory"

# 266 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HaveYouSeenShroomish:
# 267 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hello, have you seen any POKéMON\n"
# 268 "data/maps/PetalburgWoods/scripts.pory"
	.string "called SHROOMISH around here?\p"
# 269 "data/maps/PetalburgWoods/scripts.pory"
	.string "I really love that POKéMON.$"
# 270 "data/maps/PetalburgWoods/scripts.pory"

# 271 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWasGoingToAmbushYou:
# 272 "data/maps/PetalburgWoods/scripts.pory"
	.string "I was going to ambush you, but you\n"
# 273 "data/maps/PetalburgWoods/scripts.pory"
	.string "had to dawdle in PETALBURG WOODS\l"
# 274 "data/maps/PetalburgWoods/scripts.pory"
	.string "forever, didn't you?\p"
# 275 "data/maps/PetalburgWoods/scripts.pory"
	.string "I got sick of waiting, so here I am!$"
# 276 "data/maps/PetalburgWoods/scripts.pory"

# 277 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HandOverThosePapers:
# 278 "data/maps/PetalburgWoods/scripts.pory"
	.string "You! DEVON RESEARCHER!\p"
# 279 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hand over those papers!$"
# 280 "data/maps/PetalburgWoods/scripts.pory"

# 281 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouHaveToHelpMe:
# 282 "data/maps/PetalburgWoods/scripts.pory"
	.string "Aiyeeeh!\p"
# 283 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're a POKéMON TRAINER, aren't you?\n"
# 284 "data/maps/PetalburgWoods/scripts.pory"
	.string "You've got to help me, please!$"
# 285 "data/maps/PetalburgWoods/scripts.pory"

# 286 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NoOneCrossesTeamAqua:
# 287 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hunh? What do you think you're doing?\n"
# 288 "data/maps/PetalburgWoods/scripts.pory"
	.string "What, you're going to protect him?\p"
# 289 "data/maps/PetalburgWoods/scripts.pory"
	.string "No one who crosses TEAM AQUA\n"
# 290 "data/maps/PetalburgWoods/scripts.pory"
	.string "gets any mercy, not even a kid!\p"
# 291 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me!$"
# 292 "data/maps/PetalburgWoods/scripts.pory"

# 293 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureKiddingMe:
# 294 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're kidding me! You're tough!$"
# 295 "data/maps/PetalburgWoods/scripts.pory"

# 296 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouveGotSomeNerve:
# 297 "data/maps/PetalburgWoods/scripts.pory"
	.string "Grrr… You've got some nerve\n"
# 298 "data/maps/PetalburgWoods/scripts.pory"
	.string "meddling with TEAM AQUA!\l"
# 299 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me again!\p"
# 300 "data/maps/PetalburgWoods/scripts.pory"
	.string "I wish I could say that, but I'm out of\n"
# 301 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON…\p"
# 302 "data/maps/PetalburgWoods/scripts.pory"
	.string "And, hey, we of TEAM AQUA are also\n"
# 303 "data/maps/PetalburgWoods/scripts.pory"
	.string "after something in RUSTBORO.\p"
# 304 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll let you go today!$"
# 305 "data/maps/PetalburgWoods/scripts.pory"

# 306 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ThatWasAwfullyClose:
# 307 "data/maps/PetalburgWoods/scripts.pory"
	.string "Whew…\n"
# 308 "data/maps/PetalburgWoods/scripts.pory"
	.string "That was awfully close!\p"
# 309 "data/maps/PetalburgWoods/scripts.pory"
	.string "Thanks to you, he didn't rob me of\n"
# 310 "data/maps/PetalburgWoods/scripts.pory"
	.string "these important papers.\p"
# 311 "data/maps/PetalburgWoods/scripts.pory"
	.string "I know, I'll give you a GREAT BALL as\n"
# 312 "data/maps/PetalburgWoods/scripts.pory"
	.string "my thanks!$"
# 313 "data/maps/PetalburgWoods/scripts.pory"

# 314 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro:
# 315 "data/maps/PetalburgWoods/scripts.pory"
	.string "Didn't that TEAM AQUA thug say\n"
# 316 "data/maps/PetalburgWoods/scripts.pory"
	.string "they were after something in\l"
# 317 "data/maps/PetalburgWoods/scripts.pory"
	.string "RUSTBORO, too?$"
# 318 "data/maps/PetalburgWoods/scripts.pory"

# 319 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICantBeWastingTime:
# 320 "data/maps/PetalburgWoods/scripts.pory"
	.string "Uh-oh! It's a crisis!\n"
# 321 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be wasting time!$"
# 322 "data/maps/PetalburgWoods/scripts.pory"

# 323 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureLoadedWithItems:
# 324 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're loaded with items.\n"
# 325 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't give you this GREAT BALL.$"
# 326 "data/maps/PetalburgWoods/scripts.pory"

# 327 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_GoBugPokemonTeam:
# 328 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a whole bunch of POKéMON!\p"
# 329 "data/maps/PetalburgWoods/scripts.pory"
	.string "Go, go, go!\n"
# 330 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG POKéMON team!$"
# 331 "data/maps/PetalburgWoods/scripts.pory"

# 332 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICouldntWin:
# 333 "data/maps/PetalburgWoods/scripts.pory"
	.string "I have all these POKéMON,\n"
# 334 "data/maps/PetalburgWoods/scripts.pory"
	.string "but I couldn't win…$"
# 335 "data/maps/PetalburgWoods/scripts.pory"

# 336 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ImOutOfPokeBalls:
# 337 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a bunch of POKéMON.\n"
# 338 "data/maps/PetalburgWoods/scripts.pory"
	.string "Now I'm out of POKé BALLS.$"
# 339 "data/maps/PetalburgWoods/scripts.pory"

# 340 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_InstantlyPopularWithBugPokemon:
# 341 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you take BUG POKéMON to school,\n"
# 342 "data/maps/PetalburgWoods/scripts.pory"
	.string "you get to be instantly popular!$"
# 343 "data/maps/PetalburgWoods/scripts.pory"

# 344 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfILose:
# 345 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 346 "data/maps/PetalburgWoods/scripts.pory"

# 347 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_PeopleRespectYou:
# 348 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you have a big BUG POKéMON,\n"
# 349 "data/maps/PetalburgWoods/scripts.pory"
	.string "people respect you for it.$"
# 350 "data/maps/PetalburgWoods/scripts.pory"

# 351 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_StayOutOfTallGrass:
# 352 "data/maps/PetalburgWoods/scripts.pory"
	.string "Yo, there!\n"
# 353 "data/maps/PetalburgWoods/scripts.pory"
	.string "Your POKéMON doing okay?\p"
# 354 "data/maps/PetalburgWoods/scripts.pory"
	.string "If your POKéMON are weak and you want\n"
# 355 "data/maps/PetalburgWoods/scripts.pory"
	.string "to avoid battles, you should stay out\l"
# 356 "data/maps/PetalburgWoods/scripts.pory"
	.string "of tall grass.$"
# 357 "data/maps/PetalburgWoods/scripts.pory"

# 358 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HiddenItemsExplanation:
# 359 "data/maps/PetalburgWoods/scripts.pory"
	.string "Sometimes, there are things on the\n"
# 360 "data/maps/PetalburgWoods/scripts.pory"
	.string "ground even if you can't see them.\p"
# 361 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's why I always check where I'm\n"
# 362 "data/maps/PetalburgWoods/scripts.pory"
	.string "walking.$"
# 363 "data/maps/PetalburgWoods/scripts.pory"

# 364 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsExperience:
# 365 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 366 "data/maps/PetalburgWoods/scripts.pory"
	.string "Any POKéMON that appears even once\n"
# 367 "data/maps/PetalburgWoods/scripts.pory"
	.string "in a battle is awarded EXP Points.\p"
# 368 "data/maps/PetalburgWoods/scripts.pory"
	.string "To raise a weak POKéMON, put it at the\n"
# 369 "data/maps/PetalburgWoods/scripts.pory"
	.string "left of the team list.\p"
# 370 "data/maps/PetalburgWoods/scripts.pory"
	.string "As soon as a battle starts, switch it\n"
# 371 "data/maps/PetalburgWoods/scripts.pory"
	.string "out. It will earn EXP Points without\l"
# 372 "data/maps/PetalburgWoods/scripts.pory"
	.string "being exposed to any harm.$"

PetalburgWoods_EventScript_Dustin::
# 377 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_DUSTIN, PetalburgWoods_Text_DustinIntro, PetalburgWoods_Text_DustinDefeat
# 378 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_DustinPostBattle, MSGBOX_AUTOCLOSE
	end


PetalburgWoods_EventScript_Kyler::
# 394 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_KYLER, PetalburgWoods_Text_KylerIntro, PetalburgWoods_Text_KylerDefeat
# 395 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_KylerPostBattle, MSGBOX_AUTOCLOSE
	end


PetalburgWoods_EventScript_Frank::
# 411 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_FRANK, PetalburgWoods_Text_FrankIntro, PetalburgWoods_Text_FrankDefeat
# 412 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_FrankPostBattle, MSGBOX_AUTOCLOSE
	end


PetalburgWoods_EventScript_Lily::
# 428 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_LILY, PetalburgWoods_Text_LilyIntro, PetalburgWoods_Text_LilyDefeat, PetalburgWoods_EventScript_MiracleSeed
# 429 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_unset FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_Lily_2
# 433 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_LilyPostBattle, MSGBOX_AUTOCLOSE
PetalburgWoods_EventScript_Lily_1:
	end

PetalburgWoods_EventScript_Lily_2:
# 430 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_MiracleSeed
	goto PetalburgWoods_EventScript_Lily_1


PetalburgWoods_EventScript_MiracleSeed::
# 454 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveThisSeed, MSGBOX_AUTOCLOSE
# 455 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 456 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PetalburgWoods_EventScript_MiracleSeed_2
# 460 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_RECEIVED_MIRACLE_SEED
# 461 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryBattlingOthers, MSGBOX_AUTOCLOSE
PetalburgWoods_EventScript_MiracleSeed_1:
	end

PetalburgWoods_EventScript_MiracleSeed_2:
# 457 "data/maps/PetalburgWoods/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto PetalburgWoods_EventScript_MiracleSeed_1


PetalburgWoods_EventScript_Leaf0::
# 480 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 481 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 482 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 483 "data/maps/PetalburgWoods/scripts.pory"
	addobject LOCALID_PETALBURG_WOODS_LEAF
# 484 "data/maps/PetalburgWoods/scripts.pory"
	setobjectxy LOCALID_PETALBURG_WOODS_LEAF, 6, 15
# 485 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_GENERIC_DUNGEON, 1
# 486 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_Leaf2
	end


PetalburgWoods_EventScript_Leaf1::
# 491 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 492 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 493 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 494 "data/maps/PetalburgWoods/scripts.pory"
	addobject LOCALID_PETALBURG_WOODS_LEAF
# 495 "data/maps/PetalburgWoods/scripts.pory"
	setobjectxy LOCALID_PETALBURG_WOODS_LEAF, 6, 16
# 496 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_GENERIC_DUNGEON, 2
# 497 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_Leaf2
	end


PetalburgWoods_EventScript_Leaf2::
# 502 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_LEAF, PetalburgWoods_Movement_LeafApproach
# 503 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 504 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_PETALBURG_WOODS_LEAF, PetalburgWoods_Text_LeafIntro, PetalburgWoods_Text_LeafDefeat, PetalburgWoods_EventScript_LeafPostBattle
# 505 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
	end


PetalburgWoods_EventScript_LeafPostBattle::
# 510 "data/maps/PetalburgWoods/scripts.pory"
	setvar B_LEVEL_CAP_VARIABLE, 15
# 511 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 2
# 512 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_LeafLevelCap, MSGBOX_AUTOCLOSE
# 513 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_GENERIC_DUNGEON, 1
	goto_if_eq PetalburgWoods_EventScript_LeafPostBattle_2
# 519 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_LEAF, PetalburgWoods_Movement_LeafLeave1
# 520 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 521 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_LEAF
PetalburgWoods_EventScript_LeafPostBattle_1:
# 523 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_GENERIC_DUNGEON, 0
	end

PetalburgWoods_EventScript_LeafPostBattle_2:
# 514 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_LEAF, PetalburgWoods_Movement_LeafLeave0
# 515 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 516 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_LEAF
	goto PetalburgWoods_EventScript_LeafPostBattle_1


# 527 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_LeafApproach:
# 528 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 528 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 528 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 528 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 528 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 528 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 528 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 528 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 528 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 529 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 529 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 529 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 529 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 529 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 530 "data/maps/PetalburgWoods/scripts.pory"
	step_end

# 533 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_LeafLeave0:
# 534 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 535 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 535 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 535 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 536 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 536 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
	step_end

# 539 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_LeafLeave1:
# 540 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 541 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 541 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 541 "data/maps/PetalburgWoods/scripts.pory"
	walk_right
# 542 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
	step_end

PetalburgWoods_Text_DustinIntro::
# 381 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hey! I was playing with that!$"

PetalburgWoods_Text_DustinDefeat::
# 385 "data/maps/PetalburgWoods/scripts.pory"
	.string "Fine, you can have a turn...$"

PetalburgWoods_Text_DustinPostBattle::
# 389 "data/maps/PetalburgWoods/scripts.pory"
	.string "Do you want to play in the trees with me?$"

PetalburgWoods_Text_KylerIntro::
# 398 "data/maps/PetalburgWoods/scripts.pory"
	.string "Do you want to hear some bug facts?$"

PetalburgWoods_Text_KylerDefeat::
# 402 "data/maps/PetalburgWoods/scripts.pory"
	.string "Okay, no bug facts this time.$"

PetalburgWoods_Text_KylerPostBattle::
# 406 "data/maps/PetalburgWoods/scripts.pory"
	.string "I really like bugs.$"

PetalburgWoods_Text_FrankIntro::
# 415 "data/maps/PetalburgWoods/scripts.pory"
	.string "Me and my bugs are ready to rumble!$"

PetalburgWoods_Text_FrankDefeat::
# 419 "data/maps/PetalburgWoods/scripts.pory"
	.string "Uh oh, my bugs got tumbled!$"

PetalburgWoods_Text_FrankPostBattle::
# 423 "data/maps/PetalburgWoods/scripts.pory"
	.string "My bugs are rough and tough!$"

PetalburgWoods_Text_LilyIntro::
# 438 "data/maps/PetalburgWoods/scripts.pory"
	.string "Look at this cool seed I found!\n"
	.string "You can have it if you battle with me!$"

PetalburgWoods_Text_LilyDefeat::
# 443 "data/maps/PetalburgWoods/scripts.pory"
	.string "Thanks for fighting, hope you enjoy\n"
	.string "the cool seed!$"

PetalburgWoods_Text_LilyPostBattle::
# 448 "data/maps/PetalburgWoods/scripts.pory"
	.string "Don't worry, there are plenty more\n"
	.string "cool seeds I can find!$"

PetalburgWoods_Text_HaveThisSeed::
# 466 "data/maps/PetalburgWoods/scripts.pory"
	.string "Here, take this cool seed I found,\n"
	.string "it's a MIRACLE SEED. If a POKéMON\l"
	.string "holds that item, its GRASS-type moves\l"
	.string "become stronger.$"

PetalburgWoods_Text_TryBattlingOthers::
# 473 "data/maps/PetalburgWoods/scripts.pory"
	.string "There are some boys on Route 104\n"
	.string "who are watching over other convenient\l"
	.string "items for POKéMON to hold.$"

PetalburgWoods_Text_LeafIntro::
# 545 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hi {PLAYER}, good to see you again!\n"
	.string "Did you have any trouble finding your way\l"
	.string "through the woods?\p"
	.string "Oh? You ran in to TEAM AQUA? I hope they\n"
	.string "didn't give you too much trouble! A strong\l"
	.string "trainer like you should be able to handle\l"
	.string "a grunt no problem.\p"
	.string "Speaking of being a strong trainer, let's\n"
	.string "see if these woods toughened you up at all!$"

PetalburgWoods_Text_LeafDefeat::
# 557 "data/maps/PetalburgWoods/scripts.pory"
	.string "Wow, what a fight!$"

PetalburgWoods_Text_LeafLevelCap::
# 561 "data/maps/PetalburgWoods/scripts.pory"
	.string "Thanks for another great battle!\n"
	.string "Your POKéMON will be able to level up more now.\l"
	.string "See you later!$"
