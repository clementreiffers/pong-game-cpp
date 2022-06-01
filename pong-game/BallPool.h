#ifndef PONG_GAME_BALLPOOL_H
#define PONG_GAME_BALLPOOL_H


#include "Ball.h"
#include <SFML/Graphics/RenderWindow.hpp>
#include <deque>


class BallPool {
    std::vector<Ball> pool;

public:
    BallPool(int const &_numberOfBall);
    void move(sf::RenderWindow &);
};


#endif//PONG_GAME_BALLPOOL_H
