#pragma once

class Controller{
public:
    Controller() : speed(200), key(1), score(1){}
    void start();
    void select();
    // 绘制游戏界面
    void drawGame();
    // 二级游戏循环，游戏主流程
    int playGame();
    void updateScore(const int& tmp);
    void rewriteScore();
    int menu();
    // 游戏一级循环
    void game();
    // 游戏结束
    int gameOver();
private:
    int speed, key, score;
};