#ifndef ARRAYCOMPOSITOR_HPP
#define ARRAYCOMPOSITOR_HPP

#include <string>
#include "Compositor.hpp"

class ArrayCompositor : public Compositor
{
public:
  ArrayCompositor();
  virtual ~ArrayCompositor();
  size_t Compose(std::vector<int>& p_BreakPositions, const std::string& p_Text);
};

#endif // ARRAYCOMPOSITOR_HPP
