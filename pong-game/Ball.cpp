#include "Ball.h"
#include <iostream>

Ball::Ball(float const &_radius, float const &_x, float const &_y) {
    newValues(_radius, _x, _y, 1, 1);
}

Ball::Ball(float const &_radius, float const &_x, float const &_y, float const &_dx, float const &_dy) {
    newValues(_radius, _x, _y, _dx, _dy);
}

Ball::Ball(const Ball &otherBall) {
    newValues(otherBall.radius, otherBall.x, otherBall.y, otherBall.dx, otherBall.dy);
}

void Ball::newValues(float const &_radius, float const &_x, float const &_y, float const &_dx, float const &_dy) {
    this->radius = _radius;
    this->x      = _x;
    this->y      = _y;
    this->dx     = _dx;
    this->dy     = _dy;
    this->color  = 0;
    createShape();
}

void Ball::createShape() {
    this->shape = sf::CircleShape(this->radius);
    this->shape.setOrigin(this->x, this->y);
    this->shape.setFillColor(GREEN);
}

void Ball::move(sf::RenderWindow &_window) {
    if (this->x > (float) _window.getSize().x - shape.getRadius() || this->x < 0) {
        this->dx = -this->dx;
        this->shape.setFillColor(sf::Color(std::rand(), std::rand(), std::rand()));
    }
    if (this->y > (float) _window.getSize().y - shape.getRadius() || this->y < 0) {
        this->dy = -this->dy;
        this->shape.setFillColor(sf::Color(std::rand(), std::rand(), std::rand()));
    }
    sf::Color fill;

    this->x += this->dx;
    this->y += this->dy;

    this->shape.setOrigin(-this->x, -this->y);

    std::cout << "je suis passe ici" << this->y << std::endl;
    show(_window);
}

void Ball::changeVelocity(int &_where, float &_value) {
    switch (_where) {
        case DX:
            this->dx = _value;
        case DY:
            this->dy = _value;
    }
}

void Ball::show(sf::RenderWindow &_window) {
    _window.draw(this->shape);
}
void Ball::changeColor() {
    this->shape.setFillColor(GREEN);
}
