#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include <vector>
#include <string>

#include "Command.hpp"
#include "DiffDocument.hpp"

class Application
{
public:
  Application();
  virtual ~Application();

  void Run();
  bool Add(DiffDocument* p_pDocument);


private:
  DiffDocument m_LeftDiffWindow;
  DiffDocument m_RightDiffWindow;
  bool m_bExitRequested;
  std::vector<Command*> m_CommandList;

};

#endif // APPLICATION_HPP
