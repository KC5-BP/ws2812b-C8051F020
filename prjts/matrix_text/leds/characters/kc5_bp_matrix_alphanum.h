/*..-----------------------------------------------------------------------------------.
../ .---------------------------------------------------------------------------------. \
./´/
|x| __--""'\
|x|  ,__  -'""`;
|x| /   \  /"'  \
|x|   __// \-"-_/
|x| ´"   \  |           > Title : kc5_bp_matrix_alphanum
|x| \     |  \  _.-"',
|x| "^,-´\/\  '" ,--. \         > Src : Timers_Wait_Xms.h
|x|  \|\| | | , /    | |        >           (One of my own first c file)
|x|     '`'\|._ |   / /
|x|         '\),/  / |          > Creation: 2019.11.21
|x|           |/.-"_/           > By :  KC5-BP
|x| .__---+-_/'|--"
|x|         _| |_--,            > Description :
|x|        ',/ |   /                >   Letters declaration for Matrix display.
|x|        /|| |  /
|x|     |\| |/ |- |
|x| .-,-/ | /  '/-"
|x| -\|/-/\/ ^,'|
|x| _-     |  |/
|x|  .  --"  /
|x| /--__,.-/
.\`\__________________________________________________________________________________/´/
..`____________________________________________________________________________________´
========================================================================================>
=======================================================================================*/

//===================================================
//================================\HEADER'S_Definitions/================================>
#ifndef  __KC5_BP_MATRIX_ALPHANUM__
#define  __KC5_BP_MATRIX_ALPHANUM__	// __KC5_BP_MATRIX_ALPHANUM__ BEGIN

//----------------------------------\GLOBAL_Definition/---------------------------------.
#ifndef CHAR_DIM_3X7
#define CHAR_DIM_3X7 21
#endif
#ifndef CHAR_DIM_4X6
#define CHAR_DIM_4X6 24
#endif
#ifndef CHAR_DIM_4X7
#define CHAR_DIM_4X7 28
#endif
#ifndef CHAR_DIM_5X7
#define CHAR_DIM_5X7 35
#endif
//-- GLOBAL CHARACTERS ARRAYS	: --------------------------->
// M-V-W : Char Dim. : 5x7 : ----------------------------->
// I-T   : Char Dim. : 3x7 : ----------------------------->
// Other alphabet's letters : Char Dim. : 4x7 : ---------->
extern xdata char cBoard_A[CHAR_DIM_4X7] = {\
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 1, 1, 1, \
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 0, 0, 1, \
0, 1, 1, 0};
//-------------------->
extern xdata char cBoard_B[CHAR_DIM_4X7] = {\
1, 1, 1, 1, \
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 0, 1, 0, \
1, 1, 0, 0, \
1, 0, 1, 0, \
1, 1, 0, 0};
//-------------------->
extern xdata char cBoard_C[CHAR_DIM_4X7] = {\
0, 1, 1, 1, \
1, 0, 0, 0, \
1, 0, 0, 0, \
1, 0, 0, 0, \
1, 0, 0, 0, \
1, 0, 0, 0, \
0, 1, 1, 1};
//-------------------->
extern xdata char cBoard_D[CHAR_DIM_4X7] = {\
1, 1, 1, 0, \
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 1, 1, 0};
//-------------------->
extern xdata char cBoard_E[CHAR_DIM_4X7] = {\
1, 1, 1, 1, \
1, 0, 0, 0, \
1, 0, 0, 0, \
1, 1, 1, 0, \
1, 0, 0, 0, \
1, 0, 0, 0, \
1, 1, 1, 1};
//-------------------->
extern xdata char cBoard_F[CHAR_DIM_4X7] = {\
1, 0, 0, 0, \
1, 0, 0, 0, \
1, 0, 0, 0, \
1, 1, 1, 0, \
1, 0, 0, 0, \
1, 0, 0, 0, \
1, 1, 1, 1};
//-------------------->
extern xdata char cBoard_G[CHAR_DIM_4X7] = {\
0, 1, 1, 0, \
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 0, 1, 1, \
1, 0, 0, 0, \
1, 0, 0, 1, \
0, 1, 1, 0};
//-------------------->
extern xdata char cBoard_H[CHAR_DIM_4X7] = {\
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 1, 1, 1, \
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 0, 0, 1};
//-------------------->
extern xdata char cBoard_I[CHAR_DIM_3X7] = {\
1, 1, 1, \
0, 1, 0, \
0, 1, 0, \
0, 1, 0, \
0, 1, 0, \
0, 1, 0, \
1, 1, 1};
//-------------------->
extern xdata char cBoard_J[CHAR_DIM_4X7] = {\
0, 1, 1, 0, \
1, 0, 1, 0, \
0, 0, 1, 0, \
0, 0, 1, 0, \
0, 0, 1, 0, \
0, 0, 1, 0, \
0, 1, 1, 1};
//-------------------->
extern xdata char cBoard_K[CHAR_DIM_4X7] = {\
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 0, 1, 0, \
1, 1, 0, 0, \
1, 0, 1, 0, \
1, 0, 0, 1, \
1, 0, 0, 1};
//-------------------->
extern xdata char cBoard_L[CHAR_DIM_4X7] = {\
1, 1, 1, 1, \
1, 0, 0, 0, \
1, 0, 0, 0, \
1, 0, 0, 0, \
1, 0, 0, 0, \
1, 0, 0, 0, \
1, 0, 0, 0};
//-------------------->
extern xdata char cBoard_M[CHAR_DIM_5X7] = {\
1, 0, 0, 0, 1, \
1, 0, 0, 0, 1, \
1, 0, 0, 0, 1, \
1, 0, 0, 0, 1, \
1, 0, 1, 0, 1, \
1, 1, 0, 1, 1, \
1, 0, 0, 0, 1};
//-------------------->
extern xdata char cBoard_N[CHAR_DIM_4X7] = {\
1, 0, 0, 1, \
1, 0, 1, 1, \
1, 0, 1, 1, \
1, 1, 1, 1, \
1, 1, 0, 1, \
1, 1, 0, 1, \
1, 0, 0, 1};
//-------------------->
extern xdata char cBoard_O[CHAR_DIM_4X7] = {\
1, 1, 1, 1, \
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 1, 1, 1};
//-------------------->
extern xdata char cBoard_P[CHAR_DIM_4X7] = {\
1, 0, 0, 0, \
1, 0, 0, 0, \
1, 0, 0, 0, \
1, 1, 1, 0, \
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 1, 1, 0};
//-------------------->
extern xdata char cBoard_Q[CHAR_DIM_4X7] = {\
0, 1, 0, 1, \
1, 0, 1, 0, \
1, 1, 0, 1, \
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 0, 0, 1, \
0, 1, 1, 0};
//-------------------->
extern xdata char cBoard_R[CHAR_DIM_4X7] = {\
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 1, 1, 0, \
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 1, 1, 0};
//-------------------->
extern xdata char cBoard_S[CHAR_DIM_4X7] = {\
0, 1, 1, 0, \
1, 0, 0, 1, \
0, 0, 0, 1, \
0, 1, 1, 0, \
1, 0, 0, 0, \
1, 0, 0, 1, \
0, 1, 1, 0};
//-------------------->
extern xdata char cBoard_T[CHAR_DIM_3X7] = {\
0, 1, 0, \
0, 1, 0, \
0, 1, 0, \
0, 1, 0, \
0, 1, 0, \
0, 1, 0, \
1, 1, 1};
//-------------------->
extern xdata char cBoard_U[CHAR_DIM_4X7] = {\
0, 1, 1, 0, \
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 0, 0, 1};
//-------------------->
extern xdata char cBoard_V[CHAR_DIM_5X7] = {
	0, 0, 1, 0, 0,
	0, 1, 0, 1, 0,
	0, 1, 0, 1, 0,
	0, 1, 0, 1, 0,
	1, 0, 0, 0, 1,
	1, 0, 0, 0, 1,
	1, 0, 0, 0, 1};
//-------------------->
extern xdata char cBoard_W[CHAR_DIM_5X7] = {\
0, 1, 0, 1, 0, \
0, 1, 0, 1, 0, \
1, 0, 1, 0, 1, \
1, 0, 1, 0, 1, \
1, 0, 0, 0, 1, \
1, 0, 0, 0, 1, \
1, 0, 0, 0, 1};
//-------------------->
extern xdata char cBoard_X[CHAR_DIM_4X7] = {\
1, 0, 0, 1, \
1, 0, 0, 1, \
0, 1, 1, 0, \
0, 1, 1, 0, \
0, 1, 1, 0, \
1, 0, 0, 1, \
1, 0, 0, 1};
//-------------------->
extern xdata char cBoard_Y[CHAR_DIM_4X7] = {\
0, 1, 0, 0, \
0, 0, 1, 0, \
0, 0, 0, 1, \
0, 0, 0, 1, \
0, 1, 1, 1, \
1, 0, 0, 1, \
1, 0, 0, 1};
//-------------------->
extern xdata char cBoard_Z[CHAR_DIM_4X7] = {\
1, 1, 1, 1, \
1, 0, 0, 0, \
0, 1, 0, 0, \
0, 1, 0, 0, \
0, 0, 1, 0, \
0, 0, 0, 1, \
1, 1, 1, 1};

//-- GLOBAL NUMERICALS ARRAYS	: --------------------------->
// '-> Design : 5x7 : ------>
extern xdata char cBoard_0_Time[CHAR_DIM_5X7] = {\
0, 1, 1, 1, 0, \
1, 1, 0, 0, 1, \
1, 0, 1, 0, 1, \
1, 0, 1, 0, 1, \
1, 0, 1, 0, 1, \
1, 0, 0, 1, 1, \
0, 1, 1, 1, 0};
//-------------------->
extern xdata char cBoard_1_Time[CHAR_DIM_5X7] = {\
0, 1, 1, 1, 0, \
0, 0, 1, 0, 0, \
0, 0, 1, 0, 0, \
0, 0, 1, 0, 0, \
0, 0, 1, 0, 0, \
0, 1, 1, 0, 0, \
0, 0, 1, 0, 0};
//-------------------->
extern xdata char cBoard_2_Time[CHAR_DIM_5X7] = {\
1, 1, 1, 1, 1, \
0, 1, 0, 0, 0, \
0, 0, 1, 0, 0, \
0, 0, 0, 1, 0, \
1, 0, 1, 0, 1, \
1, 0, 0, 0, 1, \
0, 1, 1, 1, 0};
//-------------------->
extern xdata char cBoard_3_Time[CHAR_DIM_5X7] = {\
0, 1, 1, 1, 0, \
1, 0, 0, 0, 1, \
0, 0, 1, 0, 1, \
0, 0, 1, 1, 0, \
0, 0, 1, 0, 1, \
1, 0, 0, 0, 1, \
0, 1, 1, 1, 0};
//-------------------->
extern xdata char cBoard_4_Time[CHAR_DIM_5X7] = {\
0, 0, 0, 0, 1, \
0, 0, 0, 0, 1, \
0, 0, 0, 0, 1, \
0, 1, 1, 1, 1, \
1, 0, 0, 0, 1, \
1, 0, 1, 0, 1, \
1, 0, 0, 0, 1};
//-------------------->
extern xdata char cBoard_5_Time[CHAR_DIM_5X7] = {\
0, 1, 1, 1, 0, \
1, 0, 0, 0, 1, \
1, 0, 1, 0, 1, \
0, 0, 0, 0, 1, \
1, 1, 1, 1, 0, \
1, 0, 0, 0, 0, \
1, 1, 1, 1, 1};
//-------------------->
extern xdata char cBoard_6_Time[CHAR_DIM_5X7] = {\
0, 1, 1, 1, 0, \
1, 0, 0, 0, 1, \
1, 0, 1, 0, 1, \
1, 0, 0, 0, 1, \
1, 1, 1, 1, 0, \
1, 0, 0, 0, 0, \
0, 1, 1, 1, 0};
//-------------------->
extern xdata char cBoard_7_Time[CHAR_DIM_5X7] = {\
0, 0, 1, 0, 0, \
0, 0, 1, 0, 0, \
0, 0, 1, 0, 0, \
0, 0, 0, 1, 0, \
0, 1, 0, 1, 0, \
0, 0, 0, 0, 1, \
1, 1, 1, 1, 1};
//-------------------->
extern xdata char cBoard_8_Time[CHAR_DIM_5X7] = {\
0, 1, 1, 1, 0, \
1, 0, 0, 0, 1, \
1, 0, 1, 0, 1, \
1, 0, 0, 0, 1, \
0, 1, 1, 1, 0, \
1, 0, 0, 0, 1, \
0, 1, 1, 1, 0};
//-------------------->
extern xdata char cBoard_9_Time[CHAR_DIM_5X7] = {\
0, 1, 1, 1, 0, \
0, 0, 0, 0, 1, \
0, 1, 1, 1, 1, \
1, 0, 0, 0, 1, \
1, 0, 1, 0, 1, \
1, 0, 0, 0, 1, \
0, 1, 1, 1, 0};

// '-> Classic : 4x7 : ----->
extern xdata char cBoard_0_Val[CHAR_DIM_4X7] = {\
0, 1, 1, 0, \
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 0, 0, 1, \
0, 1, 1, 0};
//-------------------->
extern xdata char cBoard_1_Val[CHAR_DIM_4X7] = {\
0, 1, 1, 1, \
0, 0, 1, 0, \
0, 0, 1, 0, \
0, 0, 1, 0, \
0, 0, 1, 0, \
0, 1, 1, 0, \
0, 0, 1, 0};
//-------------------->
extern xdata char cBoard_2_Val[CHAR_DIM_4X7] = {\
1, 1, 1, 1, \
1, 0, 0, 0, \
0, 1, 0, 0, \
0, 0, 1, 0, \
0, 0, 0, 1, \
1, 0, 0, 1, \
0, 1, 1, 0};
//-------------------->
extern xdata char cBoard_3_Val[CHAR_DIM_4X7] = {\
0, 1, 1, 0, \
1, 0, 0, 1, \
0, 0, 0, 1, \
0, 0, 1, 0, \
0, 0, 0, 1, \
1, 0, 0, 1, \
0, 1, 1, 0};
//-------------------->
extern xdata char cBoard_4_Val[CHAR_DIM_4X7] = {\
0, 0, 0, 1, \
0, 0, 0, 1, \
0, 0, 0, 1, \
0, 1, 1, 1, \
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 0, 0, 1};
//-------------------->
extern xdata char cBoard_5_Val[CHAR_DIM_4X7] = {\
0, 1, 1, 0, \
1, 0, 0, 1, \
0, 0, 0, 1, \
0, 0, 0, 1, \
0, 1, 1, 0, \
1, 0, 0, 0, \
1, 1, 1, 1};
//-------------------->
extern xdata char cBoard_6_Val[CHAR_DIM_4X7] = {\
0, 1, 1, 0, \
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 1, 1, 0, \
1, 0, 0, 0, \
1, 0, 0, 1, \
0, 1, 1, 0};
//-------------------->
extern xdata char cBoard_7_Val[CHAR_DIM_4X7] = {\
0, 1, 0, 0, \
0, 1, 0, 0, \
0, 1, 0, 0, \
0, 0, 1, 0, \
0, 0, 1, 0, \
0, 0, 0, 1, \
1, 1, 1, 1};
//-------------------->
extern xdata char cBoard_8_Val[CHAR_DIM_4X7] = {\
0, 1, 1, 0, \
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 0, 0, 1, \
0, 1, 1, 0, \
1, 0, 0, 1, \
0, 1, 1, 0};
//-------------------->
extern xdata char cBoard_9_Val[CHAR_DIM_4X7] = {\
0, 1, 1, 0, \
1, 0, 0, 1, \
0, 0, 0, 1, \
0, 1, 1, 1, \
1, 0, 0, 1, \
1, 0, 0, 1, \
0, 1, 1, 0};

// '-> MOB Design : 4x6 : -->
extern xdata char cBoard_0_Mob[CHAR_DIM_4X6] = {\
1, 1, 0, 1, \
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 1, 0, 1};
//-------------------->
extern xdata char cBoard_1_Mob[CHAR_DIM_4X6] = {\
0, 0, 1, 0, \
0, 0, 1, 0, \
0, 0, 1, 0, \
0, 0, 1, 0, \
0, 0, 0, 0, \
0, 1, 1, 0};
//-------------------->
extern xdata char cBoard_2_Mob[CHAR_DIM_4X6] = {\
1, 1, 1, 1, \
0, 0, 0, 0, \
1, 0, 0, 0, \
1, 1, 1, 1, \
0, 0, 0, 1, \
1, 1, 1, 1};
//-------------------->
extern xdata char cBoard_3_Mob[CHAR_DIM_4X6] = {\
1, 1, 0, 1, \
0, 0, 0, 1, \
0, 0, 0, 1, \
1, 1, 0, 1, \
0, 0, 0, 1, \
1, 1, 0, 1};
//-------------------->
extern xdata char cBoard_4_Mob[CHAR_DIM_4X6] = {\
0, 0, 0, 1, \
1, 0, 1, 1, \
1, 0, 0, 1, \
0, 1, 0, 1, \
0, 1, 0, 0, \
0, 0, 1, 0};
//-------------------->
extern xdata char cBoard_5_Mob[CHAR_DIM_4X6] = {\
1, 1, 1, 1, \
0, 0, 0, 1, \
1, 1, 1, 1, \
0, 0, 0, 0, \
1, 0, 0, 0, \
1, 1, 1, 1};
//-------------------->
extern xdata char cBoard_6_Mob[CHAR_DIM_4X6] = {\
1, 1, 0, 1, \
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 1, 0, 1, \
1, 0, 0, 0, \
1, 1, 1, 1};
//-------------------->
extern xdata char cBoard_7_Mob[CHAR_DIM_4X6] = {\
0, 1, 0, 0, \
0, 0, 1, 0, \
0, 0, 1, 0, \
0, 0, 0, 1, \
0, 0, 0, 0, \
1, 1, 1, 1};
//-------------------->
extern xdata char cBoard_8_Mob[CHAR_DIM_4X6] = {\
1, 0, 1, 0, \
1, 0, 0, 1, \
1, 0, 0, 1, \
1, 1, 1, 1, \
1, 0, 0, 1, \
0, 1, 0, 1};
//-------------------->
extern xdata char cBoard_9_Mob[CHAR_DIM_4X6] = {\
0, 0, 0, 1, \
0, 0, 0, 1, \
0, 0, 0, 1, \
1, 1, 0, 1, \
1, 0, 0, 1, \
1, 1, 0, 1};

//-- GLOBAL NUMERICALS ARRAYS	: --------------------------->
// Special Char., like ' ', ',', '.', '!', '?', ... ------>
// ' ' : 3x7
extern xdata char cBoard_Space[CHAR_DIM_3X7] = {\
0, 0, 0, \
0, 0, 0, \
0, 0, 0, \
0, 0, 0, \
0, 0, 0, \
0, 0, 0, \
0, 0, 0};
//-------------------->
// '.' : 3x7
extern xdata char cBoard_Dot[CHAR_DIM_3X7] = {\
0, 0, 0, \
1, 1, 0, \
1, 1, 0, \
0, 0, 0, \
0, 0, 0, \
0, 0, 0, \
0, 0, 0};
//-------------------->
// ',' : 3x7
extern xdata char cBoard_Comma[CHAR_DIM_3X7] = {\
1, 0, 0, \
0, 1, 0, \
1, 1, 0, \
0, 0, 0, \
0, 0, 0, \
0, 0, 0, \
0, 0, 0};
//-------------------->
// '!' : 3x7
extern xdata char cBoard_ExclaMark[CHAR_DIM_3X7] = {\
0, 1, 0, \
0, 0, 0, \
0, 1, 0, \
1, 0, 1, \
1, 0, 1, \
1, 0, 1, \
1, 1, 1};
//-------------------->
// '?' : 4x7
extern xdata char cBoard_QuestMark[CHAR_DIM_4X7] = {\
0, 1, 0, 0, \
0, 0, 0, 0, \
0, 1, 0, 0, \
0, 0, 1, 0, \
1, 0, 0, 1, \
1, 0, 0, 1, \
0, 1, 1, 0};
// '?' : 5x7
extern xdata char cBoard_QuestMark_Mob[CHAR_DIM_5X7] = {\
0, 1, 0, 0, 0, \
0, 0, 0, 0, 0, \
0, 1, 0, 0, 0, \
0, 1, 1, 0, 1, \
0, 0, 0, 0, 1, \
1, 0, 0, 0, 1, \
1, 1, 1, 0, 1};
//-------------------->
// ';' : 3x7
extern xdata char cBoard_SemiColon[CHAR_DIM_3X7] = {\
1, 0, 0, \
0, 1, 0, \
1, 1, 0, \
0, 0, 0, \
1, 1, 0, \
1, 1, 0, \
0, 0, 0};
//-------------------->
// ':' : 3x7
extern xdata char cBoard_Colon[CHAR_DIM_3X7] = {\
0, 0, 0, \
1, 1, 0, \
1, 1, 0, \
0, 0, 0, \
1, 1, 0, \
1, 1, 0, \
0, 0, 0};
//-------------------->
// '=' : 3x7
extern xdata char cBoard_Equal[CHAR_DIM_3X7] = {\
0, 0, 0, \
0, 0, 0, \
1, 1, 1, \
0, 0, 0, \
1, 1, 1, \
0, 0, 0, \
0, 0, 0};
//-------------------->
// <'> : 2x7
extern xdata char cBoard_Apost[14] = {\
0, 0, \
0, 0, \
0, 0, \
0, 0, \
1, 0, \
0, 1, \
0, 1};
//-------------------->
// '*' : 3x7
extern xdata char cBoard_Asterisk[CHAR_DIM_3X7] = {\
0, 0, 0, \
0, 0, 0, \
1, 0, 1, \
0, 1, 0, \
1, 1, 1, \
0, 1, 0, \
0, 0, 0};
//-------------------->
// '(' : 5x7
extern xdata char cBoard_OpenBracket[CHAR_DIM_5X7] = {\
0, 0, 1, 0, 0, \
0, 1, 0, 0, 0, \
0, 1, 0, 0, 0, \
0, 1, 0, 0, 0, \
0, 1, 0, 0, 0, \
0, 1, 0, 0, 0, \
0, 0, 1, 0, 0};
//-------------------->
// ')' : 5x7
extern xdata char cBoard_CloseBracket[CHAR_DIM_5X7] = {\
0, 0, 1, 0, 0, \
0, 0, 0, 1, 0, \
0, 0, 0, 1, 0, \
0, 0, 0, 1, 0, \
0, 0, 0, 1, 0, \
0, 0, 0, 1, 0, \
0, 0, 1, 0, 0};
//-------------------->
// '{' : 5x7
extern xdata char cBoard_OpenRoBracket[CHAR_DIM_5X7] = {\
0, 0, 1, 0, 0, \
0, 1, 0, 0, 0, \
0, 1, 0, 0, 0, \
1, 0, 0, 0, 0, \
0, 1, 0, 0, 0, \
0, 1, 0, 0, 0, \
0, 0, 1, 0, 0};
//-------------------->
// '}' : 5x7
extern xdata char cBoard_CloseRoBracket[CHAR_DIM_5X7] = {\
0, 0, 1, 0, 0, \
0, 0, 0, 1, 0, \
0, 0, 0, 1, 0, \
0, 0, 0, 0, 1, \
0, 0, 0, 1, 0, \
0, 0, 0, 1, 0, \
0, 0, 1, 0, 0};
//-------------------->
// '[' : 5x7
extern xdata char cBoard_OpenSqBracket[CHAR_DIM_5X7] = {\
0, 1, 1, 0, 0, \
0, 1, 0, 0, 0, \
0, 1, 0, 0, 0, \
0, 1, 0, 0, 0, \
0, 1, 0, 0, 0, \
0, 1, 0, 0, 0, \
0, 1, 1, 0, 0};
//-------------------->
// ']' : 5x7
extern xdata char cBoard_CloseSqBracket[CHAR_DIM_5X7] = {\
0, 0, 1, 1, 0, \
0, 0, 0, 1, 0, \
0, 0, 0, 1, 0, \
0, 0, 0, 1, 0, \
0, 0, 0, 1, 0, \
0, 0, 0, 1, 0, \
0, 0, 1, 1, 0};
//-------------------->
// '-' : 3x7
extern xdata char cBoard_Hyphen[CHAR_DIM_3X7] = {\
0, 0, 0, \
0, 0, 0, \
0, 0, 0, \
1, 1, 1, \
0, 0, 0, \
0, 0, 0, \
0, 0, 0};
//-------------------->
// '_' : 4x7
extern xdata char cBoard_Underscore[CHAR_DIM_4X7] = {\
1, 1, 1, 1, \
0, 0, 0, 0, \
0, 0, 0, 0, \
0, 0, 0, 0, \
0, 0, 0, 0, \
0, 0, 0, 0, \
0, 0, 0, 0};
//-------------------->
// '~' : 5x7
extern xdata char cBoard_Tilda[CHAR_DIM_5X7] = {\
0, 0, 0, 0, 0, \
0, 0, 0, 0, 0, \
0, 0, 0, 1, 0, \
1, 0, 1, 0, 1, \
0, 1, 0, 0, 0, \
0, 0, 0, 0, 0, \
0, 0, 0, 0, 0};
//-------------------->
// '+' : 3x7
extern xdata char cBoard_Plus[CHAR_DIM_3X7] = {\
0, 0, 0, \
0, 0, 0, \
0, 1, 0, \
1, 1, 1, \
0, 1, 0, \
0, 0, 0, \
0, 0, 0};
//-------------------->
// '%' for division : 3x7
extern xdata char cBoard_xMult[CHAR_DIM_3X7] = {\
0, 0, 0, \
1, 0, 1, \
1, 0, 0, \
0, 1, 0, \
0, 0, 1, \
1, 0, 1, \
0, 0, 0};
//-------------------->
// '@' : 5x7
extern xdata char cBoard_At[CHAR_DIM_5X7] = {\
0, 1, 1, 1, 0, \
1, 0, 0, 0, 0, \
1, 0, 1, 1, 1, \
1, 0, 1, 0, 1, \
1, 0, 0, 1, 1, \
1, 0, 0, 0, 1, \
0, 1, 1, 1, 0};
//-------------------->
// '°' degree symbol : 3x7
extern xdata char cBoard_Degree[CHAR_DIM_3X7] = {\
0, 0, 0, \
0, 0, 0, \
0, 0, 0, \
0, 0, 0, \
0, 1, 0, \
1, 0, 1, \
0, 1, 0};
//-------------------->
// '#' : 5x7
extern xdata char cBoard_HashtagV1[CHAR_DIM_5X7] = {\
1, 0, 1, 0, 0, \
1, 0, 1, 0, 0, \
1, 1, 1, 1, 1, \
0, 1, 0, 1, 0, \
1, 1, 1, 1, 1, \
0, 0, 1, 0, 1, \
0, 0, 1, 0, 1};
// '#' : 5x7
extern xdata char cBoard_HashtagV2[CHAR_DIM_5X7] = {\
0, 1, 0, 1, 0, \
0, 1, 0, 1, 0, \
1, 1, 1, 1, 1, \
0, 1, 0, 1, 0, \
1, 1, 1, 1, 1, \
0, 1, 0, 1, 0, \
0, 1, 0, 1, 0};
//-------------------->
// '&' : 5x7
extern xdata char cBoard_Ampersand[CHAR_DIM_5X7] = {\
0, 1, 1, 0, 1, \
1, 0, 0, 1, 0, \
1, 0, 1, 0, 1, \
0, 1, 0, 0, 0, \
1, 0, 1, 0, 0, \
1, 0, 1, 0, 0, \
0, 1, 0, 0, 0};
//-------------------->
// '/' : 3x7
extern xdata char cBoard_Slash[CHAR_DIM_3X7] = {\
1, 0, 0, \
1, 0, 0, \
0, 1, 0, \
0, 1, 0, \
0, 1, 0, \
0, 0, 1, \
0, 0, 1};
//-------------------->
// '^' => Heart  : 6x7
extern xdata char cBoard_Heart[42] = {\
0, 0, 0, 1, 0, 0, 0, \
0, 0, 1, 0, 1, 0, 0, \
0, 1, 0, 0, 0, 1, 0, \
1, 0, 0, 0, 0, 0, 1, \
1, 0, 0, 1, 0, 0, 1, \
0, 1, 1, 0, 1, 1, 0};

#endif	// __KC5_BP_MATRIX_ALPHANUM__ END