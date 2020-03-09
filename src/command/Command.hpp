#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <iostream>
#include <string>

class Command
{
public:
  virtual ~Command();
  virtual void Execute() = 0;
  virtual std::string Name();

protected:
  std::string m_Name;
  Command(std::string p_Name);

};

#endif // COMMAND_HPP
