#pragma once

class Point{
public:
    Point() = default;
    Point(const int _x, const int _y) : x(_x), y(_y){}
    // 输出方块
    void printRectangle();
    // 输出圆形
    void printCircle();
    // 清除输出
    void clear();
    // 改变位置
    void changePosition(const int _x, const int _y);
    bool operator == (const Point& point){
        return (x == point.x) && (y == point.y);
    }
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
private:
    int x, y;
};