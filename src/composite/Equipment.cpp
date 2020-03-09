#include "Equipment.hpp"


Equipment::~Equipment()
{

}


Equipment::Equipment(std::string name)
  : m_Name(name)
{
}


std::string Equipment::GetName()
{
  return m_Name;
}


void Equipment::Add(Equipment* pEquipment)
{

}

void Equipment::Remove(Equipment* pEquipment)
{

}
