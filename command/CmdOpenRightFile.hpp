#ifndef CMDOPENRIGHTFILE_HPP
#define CMDOPENRIGHTFILE_HPP

#include <list>
#include "Command.hpp"

class CmdOpenRightFile : public Command
{
public:
  CmdOpenRightFile(std::string p_Name);
  virtual ~CmdOpenRightFile();
  virtual void Execute();

protected:

};

#endif // CMDOPENRIGHTFILE_HPP
