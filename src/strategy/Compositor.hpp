#ifndef COMPOSITOR_HPP
#define COMPOSITOR_HPP

#include <string>
#include <vector>

class Compositor
{
public:
  virtual size_t Compose(std::vector<int>& p_BreakPositions, const std::string& p_Text) = 0;

};

#endif // COMPOSITOR_HPP
