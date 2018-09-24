#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include <string>

#include "Document.hpp"

class Application
{
public:
  Application();
  virtual ~Application();

  bool Add(Document* p_pDocument);
};

#endif // APPLICATION_HPP
