#include <iostream>

#include "Document.hpp"


Document::Document(std::string p_Name)
  : m_Name(p_Name)
{
  std::cout << "  [DOC] NEW '" << m_Name << "'" << std::endl;
}

Document::~Document()
{

}

bool Document::Open()
{
  std::cout << "  [DOC] OPEN '" << m_Name << "'" << std::endl;
  return true;
}

std::string Document::Name()
{
  return m_Name;
}
