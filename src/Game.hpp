#ifndef GAME_HPP
#define GAME_HPP

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/View.hpp>
#include <string>

namespace qs {

  const int WINDOW_WIDTH = 1280;
  const int WINDOW_HEIGHT = 720;
  const float SCALE = 0.25f;
  const std::string WINDOW_TITLE = "QuickScroller";

  class Game {
  public:
    Game();
    void play();
  private:
    sf::RenderWindow m_Window;
    sf::View m_View;
  };
}

#endif
