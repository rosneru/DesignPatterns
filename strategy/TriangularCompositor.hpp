#ifndef TRIANGULARCOMPOSITOR_HPP
#define TRIANGULARCOMPOSITOR_HPP

#include <string>
#include "Compositor.hpp"

class TriangularCompositor : public Compositor
{
public:
  TriangularCompositor();
  virtual ~TriangularCompositor();
  size_t Compose(std::vector<int>& p_BreakPositions, const std::string& p_Text);
};

#endif // TRIANGULARCOMPOSITOR_HPP
