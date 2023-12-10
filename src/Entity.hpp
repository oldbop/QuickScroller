#ifndef ENTITY_HPP
#define ENTITY_HPP

#include "Object.hpp"

namespace qs {

  class Entity : public Object {
  public:
    Entity(int health);
  protected:
    int m_Health;
  };
}

#endif
