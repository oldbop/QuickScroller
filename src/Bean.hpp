#ifndef BEAN_HPP
#define BEAN_HPP

#include "Entity.hpp"

namespace qs {

  class Bean : public Entity {
  public:
    bool initialise() override;
  protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
  };
}

#endif
