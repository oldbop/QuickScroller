#include "Object.hpp"
#include <SFML/Graphics/PrimitiveType.hpp>
#include <SFML/Graphics/Vertex.hpp>
#include <SFML/System/Vector2.hpp>

namespace qs {

  Object::Object(const std::string& texture)
    : m_TexturePath(texture) {}

  bool Object::initialise() {

    if(!(m_Texture.loadFromFile(m_TexturePath))) {
      return false;
    }

    m_Vertices.setPrimitiveType(sf::Triangles);
    m_Vertices.resize(6);

    int tw = m_Texture.getSize().x;
    int th = m_Texture.getSize().y;
    
    sf::Vertex* point = &m_Vertices[0];

    point[0].position = sf::Vector2f(0 * tw, 0 * th);
    point[1].position = sf::Vector2f(1 * tw, 0 * th);
    point[2].position = sf::Vector2f(0 * tw, 1 * th);
    point[3].position = sf::Vector2f(0 * tw, 1 * th);
    point[4].position = sf::Vector2f(1 * tw, 0 * th);
    point[5].position = sf::Vector2f(1 * tw, 1 * th);

    point[0].texCoords = sf::Vector2f(0 * tw, 0 * th);
    point[1].texCoords = sf::Vector2f(1 * tw, 0 * th);
    point[2].texCoords = sf::Vector2f(0 * tw, 1 * th);
    point[3].texCoords = sf::Vector2f(0 * tw, 1 * th);
    point[4].texCoords = sf::Vector2f(1 * tw, 0 * th);
    point[5].texCoords = sf::Vector2f(1 * tw, 1 * th);

    return true;
  }

  void Object::draw(sf::RenderTarget &target, sf::RenderStates states) const {

    states.transform *= getTransform();
    states.texture = &m_Texture;
    target.draw(m_Vertices, states);
  }
}
