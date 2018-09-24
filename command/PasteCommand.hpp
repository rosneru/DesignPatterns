#ifndef PASTECOMMAND_HPP
#define PASTECOMMAND_HPP

#include <list>
#include "Command.hpp"

class PasteCommand : public Command
{
public:
  virtual ~PasteCommand();


protected:
  PasteCommand();

};

#endif // PASTECOMMAND_HPP
