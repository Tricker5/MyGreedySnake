#pragma once

#include <deque>
#include "point.hpp"
#include "food.hpp"

class Food;
class Snake{
public:
    enum Direction {UP, DOWN, LEFT, RIGHT};
    Snake(){
        snake.emplace_back(14, 8);
        snake.emplace_back(15, 8);
        snake.emplace_back(16, 8);
        direction = Direction::DOWN;
    }
    // 初始化蛇
    void initSnake();
    // 蛇增长
    void move();
    // 蛇正常移动，头增长，尾缩短
    void normalMove();
    // 超出边界
    bool overEdge();
    // 撞到自身
    bool hitItself();
    // 改变方向
    bool changeDirection();
    // 获得普通食物
    bool getFood(const Food&);
    // 获得限时食物
    bool getBigFood(Food&);
private:
    std::deque<Point> snake;
    Direction direction;
    friend class Food;
};
