#include "Game.hpp"
#include "Object.hpp"
#include "Entity.hpp"
#include <SFML/Graphics/Rect.hpp>
#include <iostream>

namespace qs {

  Game::Game() {

    m_Window.create(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_TITLE,
      sf::Style::Close);

    sf::VideoMode desktop = sf::VideoMode::getDesktopMode();

    m_Window.setPosition(sf::Vector2i(desktop.width / 2 - WINDOW_WIDTH / 2,
      desktop.height / 2 - WINDOW_HEIGHT / 2));

    m_Window.setFramerateLimit(60);

    m_View.reset(sf::FloatRect(0, 0, WINDOW_WIDTH * SCALE, WINDOW_HEIGHT * SCALE));
    m_Window.setView(m_View);
  }

  void Game::play() {

    /*
    Object background("../resources/back.png");

    if(!(background.initialise())) {
      std::cout << "Background initialisation failed\n" << std::flush;
      return;
    }
    */

    Entity bean("../resources/green16.png", "Beany", 50);

    if(!(bean.initialise())) {
      std::cout << "Entity initialisation failed\n" << std::flush;
      return;
    }

    bean.setPosition(624.f, 344.f);

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

      //m_Window.draw(background);

      m_Window.clear();
      m_Window.draw(bean);
      m_Window.display();
    }
  }
}
