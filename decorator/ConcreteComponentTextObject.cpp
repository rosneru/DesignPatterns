#include <iostream>
#include "ConcreteComponentTextObject.hpp"


ConcreteComponentTextObject::ConcreteComponentTextObject(std::string p_Text)
{
  m_Text = p_Text;
}

ConcreteComponentTextObject::~ConcreteComponentTextObject()
{

}

void ConcreteComponentTextObject::Draw()
{
  std::cout << m_Text;
}

int ConcreteComponentTextObject::NumCharsInLine()
{
  return m_Text.length();
}

void ConcreteComponentTextObject::SetText(std::string p_Text)
{
  m_Text = p_Text;
}
