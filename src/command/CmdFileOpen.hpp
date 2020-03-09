#ifndef CMD_FILEOPEN_HPP
#define CMD_FILEOPEN_HPP

#include <list>

#include "Command.hpp"
#include "DiffDocument.hpp"

class CmdFileOpen : public Command
{
public:
  CmdFileOpen(std::string p_Name, DiffDocument& p_pDocument);
  virtual ~CmdFileOpen();
  virtual void Execute();

private:
  DiffDocument& m_Document;
};

#endif // CMD_FILEOPEN_HPP
