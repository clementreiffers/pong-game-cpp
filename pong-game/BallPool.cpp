#include "BallPool.h"
#include <iostream>

BallPool::BallPool(const int &_numberOfBall) {
    std::srand((unsigned int) time(nullptr));
    for (int i = 0; i < _numberOfBall; i++) {
        this->pool.emplace_back(
                10, 250, 250,
                (float(std::rand()) / float((RAND_MAX)) * 5),
                (float(std::rand()) / float((RAND_MAX)) * 5));
    }
}
void BallPool::move(sf::RenderWindow &_window) {
    for (auto itr = pool.begin(); itr != pool.end(); ++itr) {
        (*itr).move(_window);
    }
}
