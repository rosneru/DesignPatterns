#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include <vector>
#include <string>

#include "Command.hpp"
#include "Document.hpp"

class Application
{
public:
  Application();
  virtual ~Application();

  void Run();
  bool Add(Document* p_pDocument);


private:
  bool m_bExitRequested;
  std::vector<Command*> m_CommandList;

};

#endif // APPLICATION_HPP
