#include "Game.hpp"
#include <iostream>

namespace qs {

  Game::Game() {

    m_Window.create(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_TITLE,
      sf::Style::Close);

    sf::VideoMode desktop = sf::VideoMode::getDesktopMode();

    m_Window.setPosition(sf::Vector2i(desktop.width / 2 - WINDOW_WIDTH / 2,
      desktop.height / 2 - WINDOW_HEIGHT / 2));

    m_Window.setFramerateLimit(60);
  }

  void Game::play() {

    if(!(m_Bean.initialise())) {
      std::cout << "Entity initialisation failed\n" << std::flush;
      return;
    }

    while(m_Window.isOpen()) {

      sf::Event event;

      while(m_Window.pollEvent(event)) {

        switch(event.type) {
          case sf::Event::Closed:
            m_Window.close();
            break;
          default:
            break;
        }
      }

      m_Window.clear(sf::Color(75, 150, 200, 255));
      m_Window.draw(m_Bean);
      m_Window.display();
    }
  }
}
