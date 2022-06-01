#include "Ball.h"
#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(500, 500), "pong-game");
    Ball ball          = Ball(10, 250, 250, 0.5, 0.5);
    sf::Time delayTime = sf::milliseconds(1);

    while (window.isOpen()) {
        sf::Event event{};
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed || event.key.code == 'q' || event.key.code == 'Q')
                window.close();
        }
        window.clear();
        ball.move(window);
        sf::sleep(delayTime);
        window.display();
    }

    return 0;
}