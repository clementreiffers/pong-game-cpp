#include "Ball.h"
#include "BallPool.h"
#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(500, 500), "pong-game");
    sf::Time delayTime = sf::milliseconds(5);
    BallPool ballPool = BallPool(100);
    while (window.isOpen()) {
        sf::Event event{};
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed || event.key.code == 'q' || event.key.code == 'Q')
                window.close();
        }
        window.clear();
        ballPool.move(window);
        sf::sleep(delayTime);
        window.display();
    }

    return 0;
}