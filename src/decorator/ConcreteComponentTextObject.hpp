#ifndef CONCRETECOMPONENTTEXTOBJECT_HPP
#define CONCRETECOMPONENTTEXTOBJECT_HPP

#include <string>
#include "VisualComponent.hpp"

class ConcreteComponentTextObject : public VisualComponent
{
public:
  ConcreteComponentTextObject(std::string p_Text);
  virtual ~ConcreteComponentTextObject();
  virtual void Draw();
  virtual int NumCharsInLine();
  virtual void SetText(std::string p_Text);

private:
  std::string m_Text;

};

#endif // CONCRETECOMPONENTTEXTOBJECT_HPP
