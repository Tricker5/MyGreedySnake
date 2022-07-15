#pragma once

#include <deque>
#include <vector>
#include "point.hpp"

class StartInterface{
public:
    StartInterface() : speed(35){
        start_snake.emplace_back(Point(0,14)); // Éß
        start_snake.emplace_back(Point(1,14));
        start_snake.emplace_back(Point(2,15));
        start_snake.emplace_back(Point(3,16));
        start_snake.emplace_back(Point(4,17));
        start_snake.emplace_back(Point(5,18));
        start_snake.emplace_back(Point(6,17));
        start_snake.emplace_back(Point(7,16));
        start_snake.emplace_back(Point(8,15));
        start_snake.emplace_back(Point(9,14));
        
        text_snake.emplace_back(Point(-26, 14)); // S
        text_snake.emplace_back(Point(-25, 14));
        text_snake.emplace_back(Point(-27, 15));
        text_snake.emplace_back(Point(-26, 16));
        text_snake.emplace_back(Point(-25, 17));
        text_snake.emplace_back(Point(-27, 18));
        text_snake.emplace_back(Point(-26, 18));

        text_snake.emplace_back(Point(-23, 14)); // N
        text_snake.emplace_back(Point(-23, 15));
        text_snake.emplace_back(Point(-23, 16));
        text_snake.emplace_back(Point(-23, 17));
        text_snake.emplace_back(Point(-23, 18));
        text_snake.emplace_back(Point(-22, 15));
        text_snake.emplace_back(Point(-21, 16));
        text_snake.emplace_back(Point(-20, 17));
        text_snake.emplace_back(Point(-19, 14));
        text_snake.emplace_back(Point(-19, 15));
        text_snake.emplace_back(Point(-19, 16));
        text_snake.emplace_back(Point(-19, 17));
        text_snake.emplace_back(Point(-19, 18));

        text_snake.emplace_back(Point(-17, 18)); // A
        text_snake.emplace_back(Point(-16, 17));
        text_snake.emplace_back(Point(-15, 16));
        text_snake.emplace_back(Point(-14, 15));
        text_snake.emplace_back(Point(-14, 16));
        text_snake.emplace_back(Point(-13, 14));
        text_snake.emplace_back(Point(-13, 16));
        text_snake.emplace_back(Point(-12, 15));
        text_snake.emplace_back(Point(-12, 16));
        text_snake.emplace_back(Point(-11, 16));
        text_snake.emplace_back(Point(-10, 17));
        text_snake.emplace_back(Point(-9, 18));

        text_snake.emplace_back(Point(-7, 14)); // K
        text_snake.emplace_back(Point(-7, 15));
        text_snake.emplace_back(Point(-7, 16));
        text_snake.emplace_back(Point(-7, 17));
        text_snake.emplace_back(Point(-7, 18));
        text_snake.emplace_back(Point(-6, 16));
        text_snake.emplace_back(Point(-5, 15));
        text_snake.emplace_back(Point(-5, 17));
        text_snake.emplace_back(Point(-4, 14));
        text_snake.emplace_back(Point(-4, 18));

        text_snake.emplace_back(Point(-2, 14)); // E
        text_snake.emplace_back(Point(-2, 15));
        text_snake.emplace_back(Point(-2, 16));
        text_snake.emplace_back(Point(-2, 17));
        text_snake.emplace_back(Point(-2, 18));
        text_snake.emplace_back(Point(-1, 14));
        text_snake.emplace_back(Point(-1, 16));
        text_snake.emplace_back(Point(-1, 18));
        text_snake.emplace_back(Point(0, 14));
        text_snake.emplace_back(Point(0, 16));
        text_snake.emplace_back(Point(0, 18));

    }

    // 蛇从左边出现到完全出现的过程
    void printFirst();
    // 蛇在中央的游动过程
    void printSecond();
    // 蛇从接触右边到消失的过程
    void printThird();
    void printText();
    void clearText();
    void action();
private:
    std::deque<Point> start_snake; // 开始动画中的蛇
    std::vector<Point> text_snake; // 开始动画中的文字
    int speed; // 动画速度
};