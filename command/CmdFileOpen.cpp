#include <iostream>

#include "Document.hpp"
#include "CmdFileOpen.hpp"





CmdFileOpen::CmdFileOpen(std::string p_Name)
  : Command(p_Name)
{

}

CmdFileOpen::~CmdFileOpen()
{

}

void CmdFileOpen::Execute()
{
  std::cout << "CmdFileOpen::Execute() => " << m_Name << std::endl;
}

const std::string CmdFileOpen::askUserFilname()
{

  std::cout << "  [OPEN] Enter file name: ";

  std::string fileName;

  std::cin.ignore();
  std::getline(std::cin, fileName);

  return fileName;
}
