#include "Ball.h"
#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(200, 200), "pong-game");
    Ball ball = Ball(10, 10, 10);
    while (window.isOpen()) {
        sf::Event event{};
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed || event.key.code == 'q' || event.key.code == 'Q')
                window.close();
        }
        ball.show(window);
        //        window.clear();
        window.display();
    }

    return 0;
}