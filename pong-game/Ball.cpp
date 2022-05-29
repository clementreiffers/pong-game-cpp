#include "Ball.h"

Ball::Ball(int const &_radius, int const &_x, int const &_y) {
    newValues(_radius, _x, _y, 1, 1);
}

Ball::Ball(int const &_radius, int const &_x, int const &_y, float const &_dx, float const &_dy) {
    newValues(_radius, _x, _y, _dx, _dy);
}

Ball::Ball(const Ball &otherBall) {
    newValues(otherBall.radius, otherBall.x, otherBall.y, otherBall.dx, otherBall.dy);
}

void Ball::newValues(int const &_radius, int const &_x, int const &_y, float const &_dx, float const &_dy) {
    this->radius = _radius;
    this->x      = _x;
    this->y      = _y;
    this->dx     = _dx;
    this->dy     = _dy;
    createShape();
}

void Ball::createShape() {
    this->shape = sf::CircleShape(this->radius);
    this->shape.setOrigin(this->x, this->y);
}

void Ball::move() {
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
    changeColor();
    _window.draw(this->shape);
}
void Ball::changeColor() {
    this->shape.setFillColor(GREEN);
}
