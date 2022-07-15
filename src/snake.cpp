#include <conio.h>
#include <iostream>
#include "snake.hpp"
#include "tools.hpp"

void Snake::initSnake(){
    for(auto& point : snake){
        point.printCircle();
    }
}

void Snake::move(){
    switch (direction){
    case Direction::UP:
        snake.emplace_back(Point(snake.back().getX(), snake.back().getY() - 1));
        break;
    case Direction::DOWN:
        snake.emplace_back(Point(snake.back().getX(), snake.back().getY() + 1));
        break;
    case Direction::LEFT:
        snake.emplace_back(Point(snake.back().getX() - 1, snake.back().getY()));
        break;
    case Direction::RIGHT:
        snake.emplace_back(Point(snake.back().getX() + 1, snake.back().getY()));
        break;
    default:
        break;
    }
    setColor(14);
    snake.back().printCircle();
}

void Snake::normalMove(){
    move();
    // 头增尾减
    snake.front().clear();
    snake.pop_front();
}

bool Snake::overEdge(){
    return snake.back().getX() < 30 &&
           snake.back().getY() < 30 &&
           snake.back().getX() > 1  &&
           snake.back().getY() > 1;
}

bool Snake::hitItself(){
    decltype(snake.size()) cnt = 1;
    Point *head = new Point(snake.back().getX(), snake.back().getY());//获得头部坐标
    // 如果整条蛇中与蛇头不相同的坐标不等于蛇长，则意味着蛇头碰撞到自身
    for(auto &point : snake){
        if(!(point == *head))
            ++cnt;
        else
            break;
    }
    delete head;
    if(cnt == snake.size())
        return true;
    else
        return false;
}

bool Snake::changeDirection(){
    char ch;
    if (kbhit()){
        ch = getch();
        switch (ch){
        case -32:
            ch = getch();
            switch (ch){
            case 72:
                if (direction != Direction::DOWN)//如果方向与当前运动方向相反，无效
                    direction = Direction::UP;
                break;
            case 80:
                if (direction != Direction::UP)
                    direction = Direction::DOWN;
                break;
            case 75:
                if (direction != Direction::RIGHT)
                    direction = Direction::LEFT;
                break;
            case 77:
                if (direction != Direction::LEFT)
                    direction = Direction::RIGHT;
                break;
            default:
                break;
            }
            return true;

        case 27://ESC
            return false;

        default:
            return true;

        }
    }
    return true;
}

bool Snake::getFood(const Food& cfood){
    if (snake.back().getX() == cfood.x && snake.back().getY() == cfood.y)
        return true;
    else
        return false;
}

bool Snake::getBigFood(Food& cfood){
    if(snake.back().getX() == cfood.big_x && snake.back().getY() == cfood.big_y){
        cfood.big_flag = false;
        cfood.big_x = 0;
        cfood.big_y = 0;
        setCursorPosition(1, 0);
        std::cout << "                                                            " ;
        return true;
    }
    else
        return false;
}
