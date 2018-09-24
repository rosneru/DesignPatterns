#include <iostream>
#include "BorderDecorator.hpp"

BorderDecorator::BorderDecorator(VisualComponent* pComponent) : Decorator(pComponent)
{

}

BorderDecorator::~BorderDecorator()
{

}

void BorderDecorator::Draw()
{
  size_t numTextCharsInLine = Decorator::NumCharsInLine();

  std::cout << "╔";

  for(size_t i=0; i<(numTextCharsInLine); i++)
    std::cout << "═";

  std::cout << "╗";

  std::cout << std::endl;
  std::cout << "║";

  Decorator::Draw();

  std::cout << "║";
  std::cout << std::endl;

  std::cout << "╚";

  for(size_t i=0; i<(numTextCharsInLine); i++)
    std::cout << "═";

  std::cout << "╝";
}

int BorderDecorator::NumCharsInLine()
{
  size_t textCharsInLine = Decorator::NumCharsInLine();
  return textCharsInLine + 2;
}
