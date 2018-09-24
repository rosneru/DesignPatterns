#include <iostream>
#include "ArrayCompositor.hpp"

ArrayCompositor::ArrayCompositor()
{

}

ArrayCompositor::~ArrayCompositor()
{

}

size_t ArrayCompositor::Compose(std::vector<int>& p_BreakPositions, const std::string& p_Text)
{
  size_t counter = 0;
  for(size_t i=0; i < p_Text.length(); i++)
  {
    if(p_Text.at(i) == ' ')
    {
      p_BreakPositions.push_back(i);
      counter++;
    }
  }

  return counter;
}
