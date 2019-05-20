#ifndef _Game_H_  
#define _Game_H_  

#define ROW 9
#define ROWS ROW+2

#define COL 9
#define COLS ROW+2

#define Easy_count 10

void InitBoard(char board[ROWS][COLS], int row, int col, char flag);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS], int row, int col, int count);
void Sweep(char board1[ROWS][COLS], char board2[ROWS][COLS], int x, int y, int *Num);
int GetCount(char board[ROWS][COLS], int x, int y);
void sign(char board[ROWS][COLS], int x, int y);
void unsign(char board[ROWS][COLS], int x, int y);
#endif