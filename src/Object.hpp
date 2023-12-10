#ifndef OBJECT_HPP
#define OBJECT_HPP

#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/RenderTarget.hpp>
#include <SFML/Graphics/RenderStates.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <string>

namespace qs {

  class Object : public sf::Drawable {
  public:
    virtual ~Object() {}
    virtual bool initialise(const std::string& texture);
  protected:
    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
    sf::Texture m_Texture;
    sf::Sprite m_Sprite;
  };
}

#endif
