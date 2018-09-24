#include <iostream>

#include "Document.hpp"
#include "CmdOpenLeftFile.hpp"





CmdOpenLeftFile::CmdOpenLeftFile(std::string p_Name)
  : Command(p_Name)
{

}

CmdOpenLeftFile::~CmdOpenLeftFile()
{

}

void CmdOpenLeftFile::Execute()
{
  std::cout << "CmdOpenLeftFile::Execute()" << std::endl;
}

const std::string CmdOpenLeftFile::askUserFilname()
{

  std::cout << "  [OPEN] Enter file name: ";

  std::string fileName;

  std::cin.ignore();
  std::getline(std::cin, fileName);

  return fileName;
}
