#include <iostream>
#include "RedColorDecorator.hpp"

RedColorDecorator::RedColorDecorator(VisualComponent* pComponent) : Decorator(pComponent)
{

}

RedColorDecorator::~RedColorDecorator()
{

}

void RedColorDecorator::Draw()
{
  size_t numTextCharsInLine = Decorator::NumCharsInLine();

  std::cout << "\033[0;31m"; // Textfarbe der Konsole ab jetzt "rot"

  Decorator::Draw();

  std::cout << "\033[0m"; // Textfarbe der Konsole ab jetzt "schwarz"
}

int RedColorDecorator::NumCharsInLine()
{
  return -1;
}
