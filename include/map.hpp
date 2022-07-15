#pragma once

#include <vector>
#include "point.hpp"

class Map{
public:
    //默认构造函数，将正方形各点压入init_map
    Map(){
        init_map.emplace_back(Point(1, 1));
        init_map.emplace_back(Point(2, 1));
        init_map.emplace_back(Point(3, 1));
        init_map.emplace_back(Point(4, 1));
        init_map.emplace_back(Point(5, 1));
        init_map.emplace_back(Point(6, 1));
        init_map.emplace_back(Point(7, 1));
        init_map.emplace_back(Point(8, 1));
        init_map.emplace_back(Point(9, 1));
        init_map.emplace_back(Point(10, 1));
        init_map.emplace_back(Point(11, 1));
        init_map.emplace_back(Point(12, 1));
        init_map.emplace_back(Point(13, 1));
        init_map.emplace_back(Point(14, 1));
        init_map.emplace_back(Point(15, 1));
        init_map.emplace_back(Point(16, 1));
        init_map.emplace_back(Point(17, 1));
        init_map.emplace_back(Point(18, 1));
        init_map.emplace_back(Point(19, 1));
        init_map.emplace_back(Point(20, 1));
        init_map.emplace_back(Point(21, 1));
        init_map.emplace_back(Point(22, 1));
        init_map.emplace_back(Point(23, 1));
        init_map.emplace_back(Point(24, 1));
        init_map.emplace_back(Point(25, 1));
        init_map.emplace_back(Point(26, 1));
        init_map.emplace_back(Point(27, 1));
        init_map.emplace_back(Point(28, 1));
        init_map.emplace_back(Point(29, 1));
        init_map.emplace_back(Point(30, 1));
        init_map.emplace_back(Point(1, 2));
        init_map.emplace_back(Point(30, 2));
        init_map.emplace_back(Point(1, 3));
        init_map.emplace_back(Point(30, 3));
        init_map.emplace_back(Point(1, 4));
        init_map.emplace_back(Point(30, 4));
        init_map.emplace_back(Point(1, 5));
        init_map.emplace_back(Point(30, 5));
        init_map.emplace_back(Point(1, 6));
        init_map.emplace_back(Point(30, 6));
        init_map.emplace_back(Point(1, 7));
        init_map.emplace_back(Point(30, 7));
        init_map.emplace_back(Point(1, 8));
        init_map.emplace_back(Point(30, 8));
        init_map.emplace_back(Point(1, 9));
        init_map.emplace_back(Point(30, 9));
        init_map.emplace_back(Point(1, 10));
        init_map.emplace_back(Point(30, 10));
        init_map.emplace_back(Point(1, 11));
        init_map.emplace_back(Point(30, 11));
        init_map.emplace_back(Point(1, 12));
        init_map.emplace_back(Point(30, 12));
        init_map.emplace_back(Point(1, 13));
        init_map.emplace_back(Point(30, 13));
        init_map.emplace_back(Point(1, 14));
        init_map.emplace_back(Point(30, 14));
        init_map.emplace_back(Point(1, 15));
        init_map.emplace_back(Point(30, 15));
        init_map.emplace_back(Point(1, 16));
        init_map.emplace_back(Point(30, 16));
        init_map.emplace_back(Point(1, 17));
        init_map.emplace_back(Point(30, 17));
        init_map.emplace_back(Point(1, 18));
        init_map.emplace_back(Point(30, 18));
        init_map.emplace_back(Point(1, 19));
        init_map.emplace_back(Point(30, 19));
        init_map.emplace_back(Point(1, 20));
        init_map.emplace_back(Point(30, 20));
        init_map.emplace_back(Point(1, 21));
        init_map.emplace_back(Point(30, 21));
        init_map.emplace_back(Point(1, 22));
        init_map.emplace_back(Point(30, 22));
        init_map.emplace_back(Point(1, 23));
        init_map.emplace_back(Point(30, 23));
        init_map.emplace_back(Point(1, 24));
        init_map.emplace_back(Point(30, 24));
        init_map.emplace_back(Point(1, 25));
        init_map.emplace_back(Point(30, 25));
        init_map.emplace_back(Point(1, 26));
        init_map.emplace_back(Point(30, 26));
        init_map.emplace_back(Point(1, 27));
        init_map.emplace_back(Point(30, 27));
        init_map.emplace_back(Point(1, 28));
        init_map.emplace_back(Point(30, 28));
        init_map.emplace_back(Point(1, 29));
        init_map.emplace_back(Point(30, 29));
        init_map.emplace_back(Point(1, 30));
        init_map.emplace_back(Point(2, 30));
        init_map.emplace_back(Point(3, 30));
        init_map.emplace_back(Point(4, 30));
        init_map.emplace_back(Point(5, 30));
        init_map.emplace_back(Point(6, 30));
        init_map.emplace_back(Point(7, 30));
        init_map.emplace_back(Point(8, 30));
        init_map.emplace_back(Point(9, 30));
        init_map.emplace_back(Point(10, 30));
        init_map.emplace_back(Point(11, 30));
        init_map.emplace_back(Point(12, 30));
        init_map.emplace_back(Point(13, 30));
        init_map.emplace_back(Point(14, 30));
        init_map.emplace_back(Point(15, 30));
        init_map.emplace_back(Point(16, 30));
        init_map.emplace_back(Point(17, 30));
        init_map.emplace_back(Point(18, 30));
        init_map.emplace_back(Point(19, 30));
        init_map.emplace_back(Point(20, 30));
        init_map.emplace_back(Point(21, 30));
        init_map.emplace_back(Point(22, 30));
        init_map.emplace_back(Point(23, 30));
        init_map.emplace_back(Point(24, 30));
        init_map.emplace_back(Point(25, 30));
        init_map.emplace_back(Point(26, 30));
        init_map.emplace_back(Point(27, 30));
        init_map.emplace_back(Point(28, 30));
        init_map.emplace_back(Point(29, 30));
        init_map.emplace_back(Point(30, 30));
    }
    //绘制初始地图
    void printInitmap();
private:
    std::vector<Point> init_map;//保存初始地图
    /*Map类可自定义多种地图，只需将表示地图的各个点保存在相应的map中，并在Snake类中增加相应判断撞墙函数即可
    std::vector<Point> map1;
    std::vector<Point> map2;
    */
};