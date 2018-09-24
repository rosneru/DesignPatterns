#ifndef CMDOPENLEFTFILE_HPP
#define CMDOPENLEFTFILE_HPP

#include <list>
#include "Application.hpp"
#include "Command.hpp"


class CmdOpenLeftFile : public Command
{
public:
  CmdOpenLeftFile(std::string p_Name);
  virtual ~CmdOpenLeftFile();
  virtual void Execute();

private:
  virtual const std::string askUserFilname();
};

#endif // CMDOPENLEFTFILE_HPP
