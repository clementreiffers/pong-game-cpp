#ifndef PONG_GAME_BALL_H
#define PONG_GAME_BALL_H

#include <SFML/Graphics.hpp>

#define DX 0
#define DY 1

#define GREEN sf::Color::Green

class Ball {
public:
    int x, y, radius;
    float dx, dy;
    sf::CircleShape shape{};

    Ball(int const &, int const &, int const &);                              // radius x y
    Ball(int const &, int const &, int const &, float const &, float const &);// radius x y dx dy
    Ball(Ball const &);

    void show(sf::RenderWindow &);
    void changeColor();

protected:
    void move();
    void changeVelocity(int &, float &);
    void createShape();
    void newValues(int const &, int const &, int const &, float const &, float const &);
};


#endif//PONG_GAME_BALL_H
