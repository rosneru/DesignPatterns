#include <iostream>

#include "Composition.hpp"

Composition::Composition(Compositor* p_pCompositor)
{
  m_pCompositor = p_pCompositor;
}

Composition::~Composition()
{

}

void Composition::ChangeCompositor(Compositor* p_pCompositor)
{
  m_pCompositor = p_pCompositor;
}

void Composition::PrintComposedText(std::string p_Text)
{
  std::vector<int> breakPositions;
  int breakCount = m_pCompositor->Compose(breakPositions, p_Text);

  std::vector<std::string> brokenLines;
  size_t formerBreakPosition = 0;
  for(auto const& pos:breakPositions)
  {
    size_t len = pos -  formerBreakPosition;
    std::string line = p_Text.substr(formerBreakPosition, len);
    brokenLines.push_back(line);
    formerBreakPosition = pos + 1;
  }

  // letzte BreakPosition bis Textende noch übernehmen
  size_t len = p_Text.length() -  formerBreakPosition;
  std::string line = p_Text.substr(formerBreakPosition, len);
  brokenLines.push_back(line);

  for(auto const& line:brokenLines)
  {
    std::cout << line << std::endl;
  }
}
