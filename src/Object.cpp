#include "Object.hpp"

namespace qs {

  bool Object::initialise(const std::string& texture) {

    if(!(m_Texture.loadFromFile(texture))) {
      return false;
    }
    m_Sprite.setTexture(m_Texture);
    return true;
  }

  void Object::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(m_Sprite);
  }
}
