#ifndef GUARD_CONSTANTS_TRAINER_HILL_H
#define GUARD_CONSTANTS_TRAINER_HILL_H

#define TRAINER_HILL_1F        1
#define TRAINER_HILL_2F        2
#define TRAINER_HILL_3F        3
#define TRAINER_HILL_4F        4
#define TRAINER_HILL_ROOF      5
#define TRAINER_HILL_ENTRANCE  6

#define HILL_MODE_NORMAL  0
#define HILL_MODE_VARIETY 1
#define HILL_MODE_UNIQUE  2
#define HILL_MODE_EXPERT  3
#define NUM_TRAINER_HILL_MODES 4

#define NUM_TRAINER_HILL_FLOORS    4
#define NUM_TRAINER_HILL_FLOORS_JP 2

#define NUM_TRAINER_HILL_PRIZE_LISTS 11

#define TRAINER_HILL_FUNC_START                 0
#define TRAINER_HILL_FUNC_GET_OWNER_STATE       1
#define TRAINER_HILL_FUNC_GIVE_PRIZE            2
#define TRAINER_HILL_FUNC_CHECK_FINAL_TIME      3
#define TRAINER_HILL_FUNC_RESUME_TIMER          4
#define TRAINER_HILL_FUNC_SET_LOST              5
#define TRAINER_HILL_FUNC_GET_CHALLENGE_STATUS  6
#define TRAINER_HILL_FUNC_GET_CHALLENGE_TIME    7
#define TRAINER_HILL_FUNC_GET_ALL_FLOORS_USED   8
#define TRAINER_HILL_FUNC_GET_IN_EREADER_MODE   9
#define TRAINER_HILL_FUNC_IN_CHALLENGE          10
#define TRAINER_HILL_FUNC_POST_BATTLE_TEXT      11
#define TRAINER_HILL_FUNC_SET_ALL_TRAINER_FLAGS 12
#define TRAINER_HILL_FUNC_GET_GAME_SAVED        13
#define TRAINER_HILL_FUNC_SET_GAME_SAVED        14
#define TRAINER_HILL_FUNC_CLEAR_GAME_SAVED      15
#define TRAINER_HILL_FUNC_GET_WON               16
#define TRAINER_HILL_FUNC_SET_MODE              17

#define TRAINER_HILL_TEXT_INTRO        2
#define TRAINER_HILL_TEXT_PLAYER_LOST  3
#define TRAINER_HILL_TEXT_PLAYER_WON   4
#define TRAINER_HILL_TEXT_AFTER        5

#define HILL_TRAINERS_PER_FLOOR 2
#define NUM_TRAINER_HILL_TRAINERS     (NUM_TRAINER_HILL_FLOORS * HILL_TRAINERS_PER_FLOOR)
#define NUM_TRAINER_HILL_TRAINERS_JP  (NUM_TRAINER_HILL_FLOORS_JP * HILL_TRAINERS_PER_FLOOR)

// Values returned by TrainerHillGetChallengeStatus
#define TRAINER_HILL_PLAYER_STATUS_LOST 0
#define TRAINER_HILL_PLAYER_STATUS_ECARD_SCANNED 1
#define TRAINER_HILL_PLAYER_STATUS_NORMAL 2

#define TRAINER_HILL_OTID 0x10000000

// The full map of each Trainer Hill floor is 16x21.
// The first 5x21 at the top is the entrance/exit area,
// and the remaining 16x16 is the randomized portion of
// the room where the trainers are.
#define HILL_FLOOR_WIDTH         16
#define HILL_FLOOR_HEIGHT_MAIN   16
#define HILL_FLOOR_HEIGHT_MARGIN  5
#define HILL_FLOOR_HEIGHT        (HILL_FLOOR_HEIGHT_MAIN + HILL_FLOOR_HEIGHT_MARGIN)

#endif
