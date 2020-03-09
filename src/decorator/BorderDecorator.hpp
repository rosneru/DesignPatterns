#ifndef BORDERDECORATOR_HPP
#define BORDERDECORATOR_HPP

#include <string>
#include "VisualComponent.hpp"
#include "Decorator.hpp"

class BorderDecorator : public Decorator
{
public:
  BorderDecorator(VisualComponent* pComponent);
  virtual ~BorderDecorator();
  void Draw();
  virtual int NumCharsInLine();
};

#endif // BORDERDECORATOR_HPP
