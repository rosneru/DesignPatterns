#ifndef CMD_FILEOPEN_HPP
#define CMD_FILEOPEN_HPP

#include <list>
#include "Application.hpp"
#include "Command.hpp"


class CmdFileOpen : public Command
{
public:
  CmdFileOpen(std::string p_Name);
  virtual ~CmdFileOpen();
  virtual void Execute();

private:
  virtual const std::string askUserFilname();
};

#endif // CMD_FILEOPEN_HPP
