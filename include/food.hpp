#pragma once

#include "snake.hpp"

class Snake;
class Food{
public:
    // 默认构造函数
    Food() : cnt(0), flash_flag(false), big_flag(false), x(0), y(0), big_x(0), big_y(0), progress_bar(0) {}
    // 绘制食物
    void drawFood(Snake&);
    // 绘制限时食物
    void drawBigFood(Snake&);
    // 闪烁限时食物
    void flashBigFood();
    // 判断食物是否和蛇身重叠
    bool isOverlap(const int &tmp_x, const int &tmp_y, Snake& csnake);
    // 获取食物历史总量
    int getCnt(){ return cnt; }
    // 获取进度条
    int getProgressBar(){ return progress_bar; }
    // 获取限时食物标记
    bool getBigFlag(){ return big_flag; }
private:
    bool flash_flag; // 闪烁标记
    bool big_flag; // 是否有限时食物标记
    int cnt; // 食物历史总量
    int x, y;
    int big_x, big_y;
    int progress_bar; // 限时食物进度条
    friend class Snake;
};