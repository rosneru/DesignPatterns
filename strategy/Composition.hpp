#ifndef COMPOSITION_HPP
#define COMPOSITION_HPP

#include <string>
#include "Compositor.hpp"

class Composition
{
public:
  Composition(Compositor* p_pCompositor);
  virtual ~Composition();
  virtual void ChangeCompositor(Compositor* p_pCompositor);
  virtual void PrintComposedText(std::string p_Text);

private:
  Compositor* m_pCompositor;
};

#endif // COMPOSITION_HPP
