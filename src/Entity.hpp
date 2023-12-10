#ifndef ENTITY_HPP
#define ENTITY_HPP

#include "Object.hpp"
#include <string>

namespace qs {

  class Entity : public Object {
  public:
    Entity(const std::string& texture, const std::string& name, int health);
  protected:
    std::string m_Name;
    int m_Health;
  };
}

#endif
