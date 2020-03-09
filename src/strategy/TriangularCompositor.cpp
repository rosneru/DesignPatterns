#include <iostream>
#include "TriangularCompositor.hpp"

TriangularCompositor::TriangularCompositor()
{

}

TriangularCompositor::~TriangularCompositor()
{

}

size_t TriangularCompositor::Compose(std::vector<int>& p_BreakPositions, const std::string& p_Text)
{
  int counter = 0;
  int formerPosition = 0;
  for(int i=0; i < p_Text.length(); i++)
  {
    if(p_Text.at(i) == ' ')
    {
      size_t limit = formerPosition * 1.7;
      if(i > limit)
      {
        p_BreakPositions.push_back(i);
        counter++;
        formerPosition = i;
      }
    }
  }

  return counter;
}

