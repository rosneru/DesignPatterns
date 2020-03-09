#ifndef DECORATOR_HPP
#define DECORATOR_HPP

#include <string>
#include "VisualComponent.hpp"

class Decorator : public VisualComponent
{
public:
  Decorator(VisualComponent* p_pComponent);
  virtual ~Decorator();
  virtual void Draw();
  virtual int NumCharsInLine();
  virtual void SetText(std::string p_Text);

private:
  VisualComponent* m_pComponent;

};

#endif // DECORATOR_HPP
