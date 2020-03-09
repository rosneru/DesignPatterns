#ifndef REDCOLORDECORATOR_HPP
#define REDCOLORDECORATOR_HPP

#include <string>
#include "VisualComponent.hpp"
#include "Decorator.hpp"

class RedColorDecorator : public Decorator
{
public:
  RedColorDecorator(VisualComponent* pComponent);
  virtual ~RedColorDecorator();
  void Draw();
  virtual int NumCharsInLine();
};

#endif // REDCOLORDECORATOR_HPP
