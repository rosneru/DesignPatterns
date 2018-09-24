#include <iostream>

#include "Document.hpp"
#include "OpenCommand.hpp"


OpenCommand::OpenCommand(Application* p_pApplication)
  : m_pApplication(p_pApplication)
{
}


OpenCommand::~OpenCommand()
{

}

void OpenCommand::Execute()
{
  std::string fileName = askUserFilname();
  if(fileName.length() > 0)
  {
    Document* pDocument = new Document(fileName); // TODO wird leider nicht mehr "deleted". Evtl müsste in App eine Liste auf die Pointer geführt werden, die das beim Beenden macht.
    m_pApplication->Add(pDocument);
    pDocument->Open();
  }
}

const std::string OpenCommand::askUserFilname()
{

  std::cout << "  [OPEN] Enter file name: ";

  std::string fileName;

  std::cin.ignore();
  std::getline(std::cin, fileName);

  return fileName;
}


