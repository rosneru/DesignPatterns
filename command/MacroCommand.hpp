#ifndef MACROCOMMAND_HPP
#define MACROCOMMAND_HPP

#include <list>
#include "Command.hpp"

class MacroCommand : public Command
{
public:
  virtual ~MacroCommand();

protected:
  MacroCommand();

};

#endif // MACROCOMMAND_HPP
