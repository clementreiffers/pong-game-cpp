#ifndef PONG_GAME_BALL_H
#define PONG_GAME_BALL_H

#include <SFML/Graphics.hpp>

#define DX 0
#define DY 1

#define GREEN sf::Color::Green

class Ball {
public:
    float x, y, radius;
    float dx, dy;
    sf::CircleShape shape{};

    Ball(float const &, float const &, float const &);                              // radius x y
    Ball(float const &, float const &, float const &, float const &, float const &);// radius x y dx dy
    Ball(Ball const &);

    void show(sf::RenderWindow &);
    void changeColor();

    void move(sf::RenderWindow &);

protected:
    void changeVelocity(int &, float &);
    void createShape();
    void newValues(float const &, float const &, float const &, float const &, float const &);
};


#endif//PONG_GAME_BALL_H
