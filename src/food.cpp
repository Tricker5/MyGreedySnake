#include <cstdlib>
#include <iostream>
#include "food.hpp"
#include "tools.hpp"


void Food::drawFood(Snake& csnake){
    // 利用rand函数获得坐标，并将其范围限制在2-29内，即在地图内，如果获得的坐标与蛇身重叠，则重新获取。
    // 同时每5颗食物就出现一颗限时食物
    while(true){
        int tmp_x = rand() % 30;
        int tmp_y = rand() % 30;
        if(tmp_x < 2) tmp_x += 2;
        if(tmp_y < 2) tmp_y += 2;
        if (isOverlap(tmp_x, tmp_y, csnake)) continue;
        x = tmp_x;
        y = tmp_y;
        setCursorPosition(x, y);
        setColor(13);
        std::cout << "★";
        ++cnt;
        cnt %= 5;
        if (cnt == 0){
            drawBigFood(csnake);
        }
        break;
    }
}

void Food::drawBigFood(Snake& csnake){
    setCursorPosition(5, 0);
    setColor(11);
    std::cout << "------------------------------------------" ;//进度条
    progress_bar = 42;
    while(true){
        int tmp_x = rand() % 30;
        int tmp_y = rand() % 30;
        if(tmp_x < 2) tmp_x += 2;
        if(tmp_y < 2) tmp_y += 2;
        if (isOverlap(tmp_x, tmp_y, csnake)) continue;
        big_x = tmp_x;
        big_y = tmp_y;
        setCursorPosition(big_x, big_y);
        setColor(18);
        std::cout << "■" ;
        big_flag = true;
        flash_flag = true;
        break;
    }
}

void Food::flashBigFood(){
    setCursorPosition(big_x, big_y);
    setColor(18);
    if(flash_flag){
        std::cout << "  ";
        flash_flag = false;
    }else{
        std::cout << "■";
        flash_flag = true;
    }
    setCursorPosition(26, 0);
    setColor(11);
    for (int i = 42; i >= progress_bar; --i)//进度条缩短
        std::cout << "\b \b" ;
    --progress_bar;
    if(progress_bar == 0){
        setCursorPosition(big_x, big_y);
        std::cout << "  " ;
        big_flag = false;
        big_x = 0;
        big_y = 0;
    }
}

bool Food::isOverlap(const int &tmp_x, const int &tmp_y, Snake& csnake){
    for (auto& point : csnake.snake){
        if ((point.getX() == tmp_x && point.getY() == tmp_y) || (tmp_x == x && tmp_y == y)){
            return true;
        }
    }
    return false;
}