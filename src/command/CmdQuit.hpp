#ifndef CMDQUIT_HPP
#define CMDQUIT_HPP

#include <list>
#include "Command.hpp"

class CmdQuit : public Command
{
public:
  virtual ~CmdQuit();
  CmdQuit(std::string p_Name, bool& p_bExitRequested);
  virtual void Execute();

private:
  bool& m_bExitRequested;
};

#endif // CMDQUIT_HPP
