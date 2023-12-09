#ifndef ENTITY_HPP
#define ENTITY_HPP

#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/RenderTarget.hpp>
#include <SFML/Graphics/RenderStates.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>

namespace qs {

  class Entity : public sf::Drawable {
  public:
    virtual ~Entity() {}
    virtual bool initialise() = 0;
  protected:
    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const override = 0;
    sf::Texture m_Texture;
    sf::Sprite m_Sprite;
    int m_Health;
  };
}

#endif
