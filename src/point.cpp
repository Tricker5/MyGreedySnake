#include <iostream>
#include "point.hpp"
#include "tools.hpp"

void Point::printRectangle(){
    setCursorPosition(x, y);
    std::cout << "■";
}

void Point::printCircle(){
    setCursorPosition(x, y);
    std::cout << "●" ;
}

void Point::clear(){
    setCursorPosition(x, y);
    std::cout << "  " ;
}

void Point::changePosition(const int _x, const int _y){
    x = _x;
    y = _y;
}