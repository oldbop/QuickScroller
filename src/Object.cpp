#include "Object.hpp"

namespace qs {

  Object::Object(const std::string& texture)
    : m_TexturePath(texture) {}

  bool Object::initialise() {

    if(!(m_Texture.loadFromFile(m_TexturePath))) {
      return false;
    }
    m_Sprite.setTexture(m_Texture);
    return true;
  }

  void Object::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(m_Sprite);
  }
}
