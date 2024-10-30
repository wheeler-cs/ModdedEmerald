#ifndef GUARD_CONSTANTS_APPRENTICE_H
#define GUARD_CONSTANTS_APPRENTICE_H

#define NUM_APPRENTICES 16
#define APPRENTICE_SPECIES_COUNT 10

#define NUM_WHICH_MON_QUESTIONS  MULTI_PARTY_SIZE
#define NUM_WHICH_MOVE_QUESTIONS 5
// + 2 below is 1 each for the lead mon question and the win speech question
#define MAX_APPRENTICE_QUESTIONS NUM_WHICH_MON_QUESTIONS + NUM_WHICH_MOVE_QUESTIONS + 2

#define APPRENTICE_LVL_MODE_50    (FRONTIER_LVL_50 + 1)
#define APPRENTICE_LVL_MODE_OPEN  (FRONTIER_LVL_OPEN + 1)

#define APPRENTICE_FUNC_GAVE_LVLMODE         0
#define APPRENTICE_FUNC_SET_LVLMODE          1
#define APPRENTICE_FUNC_SET_ID               2 // Unused
#define APPRENTICE_FUNC_SHUFFLE_SPECIES      3
#define APPRENTICE_FUNC_RANDOMIZE_QUESTIONS  4
#define APPRENTICE_FUNC_ANSWERED_QUESTION    5
#define APPRENTICE_FUNC_IS_FINAL_QUESTION    6 // Unused
#define APPRENTICE_FUNC_MENU                 7
#define APPRENTICE_FUNC_PRINT_MSG            8
#define APPRENTICE_FUNC_RESET                9
#define APPRENTICE_FUNC_CHECK_GONE           10
#define APPRENTICE_FUNC_GET_QUESTION         11
#define APPRENTICE_FUNC_GET_NUM_PARTY_MONS   12
#define APPRENTICE_FUNC_SET_PARTY_MON        13
#define APPRENTICE_FUNC_INIT_QUESTION_DATA   14
#define APPRENTICE_FUNC_FREE_QUESTION_DATA   15
#define APPRENTICE_FUNC_BUFFER_STRING        16
#define APPRENTICE_FUNC_SET_MOVE             17
#define APPRENTICE_FUNC_SET_LEAD_MON         18
#define APPRENTICE_FUNC_OPEN_BAG             19
#define APPRENTICE_FUNC_TRY_SET_HELD_ITEM    20
#define APPRENTICE_FUNC_SAVE                 21
#define APPRENTICE_FUNC_SET_GFX_SAVED        22 // Unused
#define APPRENTICE_FUNC_SET_GFX              23
#define APPRENTICE_FUNC_SHOULD_LEAVE         24
#define APPRENTICE_FUNC_SHIFT_SAVED          25

#define APPRENTICE_MSG_PLEASE_TEACH             0
#define APPRENTICE_MSG_REJECT                   1
#define APPRENTICE_MSG_WHICH_LVL_MODE           2
#define APPRENTICE_MSG_THANKS_LVL_MODE          3
#define APPRENTICE_MSG_WHICH_MON_FIRST          4
#define APPRENTICE_MSG_THANKS_MON_FIRST         5
#define APPRENTICE_MSG_WHICH_MON                6
#define APPRENTICE_MSG_THANKS_MON               7
#define APPRENTICE_MSG_WHICH_MOVE               8
#define APPRENTICE_MSG_THANKS_MOVE              9
#define APPRENTICE_MSG_WHAT_HELD_ITEM           10
#define APPRENTICE_MSG_PICK_WIN_SPEECH          11
#define APPRENTICE_MSG_THANKS_HELD_ITEM         12
#define APPRENTICE_MSG_HOLD_NOTHING             13
#define APPRENTICE_MSG_THANKS_NO_HELD_ITEM      14
#define APPRENTICE_MSG_THANKS_WIN_SPEECH        15
#define APPRENTICE_MSG_ITEM_ALREADY_SUGGESTED   16

#define APPRENTICE_QUESTION_WHICH_FIRST    1
#define APPRENTICE_QUESTION_WHICH_MON      2
#define APPRENTICE_QUESTION_WHICH_MOVE     3
#define APPRENTICE_QUESTION_WHAT_ITEM      4
#define APPRENTICE_QUESTION_WIN_SPEECH     5

// Would be redundant with the above set if they used the same values
#define QUESTION_ID_WIN_SPEECH    0
#define QUESTION_ID_WHAT_ITEM     1
#define QUESTION_ID_WHICH_MOVE    2
#define QUESTION_ID_WHICH_FIRST   3

#define APPRENTICE_ASK_WHICH_LEVEL  0
#define APPRENTICE_ASK_3SPECIES     1
#define APPRENTICE_ASK_2SPECIES     2
#define APPRENTICE_ASK_MOVES        3
#define APPRENTICE_ASK_GIVE         4
#define APPRENTICE_ASK_YES_NO       6

#define APPRENTICE_BUFF_SPECIES1         0
#define APPRENTICE_BUFF_SPECIES2         1
#define APPRENTICE_BUFF_SPECIES3         2
#define APPRENTICE_BUFF_MOVE1            3
#define APPRENTICE_BUFF_MOVE2            4
#define APPRENTICE_BUFF_ITEM             5
#define APPRENTICE_BUFF_NAME             6
#define APPRENTICE_BUFF_WIN_SPEECH       7
#define APPRENTICE_BUFF_LEVEL            8
#define APPRENTICE_BUFF_LEAD_MON_SPECIES 9

#endif // GUARD_CONSTANTS_APPRENTICE_H
