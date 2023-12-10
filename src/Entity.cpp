#include "Entity.hpp"

namespace qs {

  Entity::Entity(const std::string& texture, const std::string& name, int health)
    : Object(texture)
    , m_Name(name)
    , m_Health(health) {}
}
