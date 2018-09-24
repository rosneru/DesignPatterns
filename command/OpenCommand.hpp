#ifndef OPENCOMMAND_HPP
#define OPENCOMMAND_HPP

#include <list>
#include "Application.hpp"
#include "Command.hpp"


class OpenCommand : public Command
{
public:
  OpenCommand(Application* p_pApplication);
  virtual ~OpenCommand();
  virtual void Execute();

protected:
  virtual const std::string askUserFilname();

private:
  Application* m_pApplication;
  std::string response;
};

#endif // OPENCOMMAND_HPP
