#include <iostream>

#include "DiffDocument.hpp"


DiffDocument::DiffDocument(std::string p_Name)
  : m_Name(p_Name)
{

}

DiffDocument::~DiffDocument()
{

}

bool DiffDocument::Open(std::string p_FileName)
{
  std::cout << "  DiffDocument::Open() ==> Document name = " << m_Name
            << " ==> FileName = " << p_FileName << std::endl;
  return true;
}

std::string DiffDocument::Name()
{
  return m_Name;
}
