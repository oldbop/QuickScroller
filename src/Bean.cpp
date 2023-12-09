#include "Bean.hpp"

namespace qs {

  bool Bean::initialise() {

    if(!(m_Texture.loadFromFile("../resources/bean.png"))) {
      return false;
    }
    m_Sprite.setTexture(m_Texture);
    m_Health = 50;
    return true;
  }

  void Bean::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(m_Sprite);
  }
}
