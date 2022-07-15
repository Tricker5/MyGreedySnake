#include <windows.h>
#include <cstdio>
#include "tools.hpp"


void setCursorVisible(bool is_show_cursor){
    _CONSOLE_CURSOR_INFO corsor_info{1, is_show_cursor};
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &corsor_info);
}


void setWindowSize(int cols, int lines){
    system("title MyGreedySnake");
    char cmd[30];
    sprintf(cmd, "mode con cols=%d lines=%d", cols * 2, lines); // 一个图形■占两个字符，故宽度乘以2
    system(cmd);
}

void setCursorPosition(const int x, const int y){
    COORD position; // COORD windows api自带坐标结构体
    position.X = x * 2;
    position.Y = y;
    // 通过光标句柄将其位置获得
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

void setColor(int color_id){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_id);
}

void setBackColor(){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
        FOREGROUND_BLUE |
        BACKGROUND_BLUE |
        BACKGROUND_GREEN |
        BACKGROUND_RED 
    );
}