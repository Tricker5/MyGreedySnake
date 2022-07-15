#include <windows.h>
#include <start_interface.hpp>

void StartInterface::printFirst(){
    for (auto &point : start_snake){
        point.printRectangle();
        Sleep(speed);
    }
}

void StartInterface::printSecond(){
    for(int i = 10; i != 40; ++i){
        // 计算蛇头的下一个位置，并将其压入start_snake中，绘制出来，将蛇尾去掉
        int j = (((i - 2) % 8) < 4 ) ? (15 + (i - 2) % 8) : (21 - (i - 2) % 8);
        start_snake.emplace_back(Point(i, j));
        start_snake.back().printRectangle();
        start_snake.front().clear();
        start_snake.pop_front();
        Sleep(speed);
    }
}


void StartInterface::printThird(){
    while(!start_snake.empty() || text_snake.back().getX() < 33){ // 当蛇还没消失或文字没移动到指定位置   
        // 如果蛇还没消失，继续移动
        if (!start_snake.empty()){ 
            start_snake.front().clear();
            start_snake.pop_front();
        }
        clearText();// 清除已有文字
        printText();// 绘制更新位置后的文字
        Sleep(speed);
    }
}

void StartInterface::printText(){
    for(auto &point : text_snake){
        if (point.getX() >= 0)
            point.printRectangle();
    }
}

void StartInterface::clearText(){
    // 清除的同时将文字整体向右移动一格
    for(auto &point : text_snake){
        if (point.getX() >= 0){
            point.clear();
        }
        point.changePosition(point.getX() + 1, point.getY());
    }
}

void StartInterface::action(){
    printFirst();
    printSecond();
    printThird();
}