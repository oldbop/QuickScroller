#ifndef GAME_HPP
#define GAME_HPP

#include "Bean.hpp"
#include <SFML/Graphics.hpp>
#include <string>

namespace qs {

  const int WINDOW_WIDTH = 600;
  const int WINDOW_HEIGHT = 600;
  const std::string WINDOW_TITLE = "QuickScroller";

  class Game {
  public:
    Game();
    void play();
  private:
    sf::RenderWindow m_Window;
    Bean m_Bean;
  };
}

#endif
