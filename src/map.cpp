#include <windows.h>
#include "map.hpp"

void Map::printInitmap(){
    for (auto& point : init_map){
        point.printRectangle();
        Sleep(10);//调用Sleep函数可营造动画效果
    }
}
