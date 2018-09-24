#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <string>

class Command
{
public:
  virtual ~Command();
  virtual void Execute() = 0;

protected:
  Command();

};

#endif // COMMAND_HPP
