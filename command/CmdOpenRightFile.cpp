#include "CmdOpenRightFile.hpp"


CmdOpenRightFile::CmdOpenRightFile(std::string p_Name)
  : Command(p_Name)
{
}


CmdOpenRightFile::~CmdOpenRightFile()
{

}

void CmdOpenRightFile::Execute()
{
  std::cout << "CmdOpenRightFile::Execute()" << std::endl;
}
