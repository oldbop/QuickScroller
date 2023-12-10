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
    Object(const std::string& texture);
    virtual bool initialise();
    virtual ~Object() {}
  protected:
    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
    sf::Texture m_Texture;
    sf::Sprite m_Sprite;
    std::string m_TexturePath;
  };
}

#endif
