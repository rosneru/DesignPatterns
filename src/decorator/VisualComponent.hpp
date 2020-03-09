#ifndef VISUALCOMPONENT_HPP
#define VISUALCOMPONENT_HPP

#include <string>

class VisualComponent
{
public:
  virtual void Draw() = 0;
  virtual int NumCharsInLine() = 0;
  virtual void SetText(std::string p_Text) = 0;
};

#endif // VISUALCOMPONENT_HPP
