#include "Cabinet.hpp"

Cabinet::Cabinet(std::string name) : CompositeEquipment(name)
{
  m_Power = 80;
  m_NetPrice = 149.99;
  m_DiscountPrice = 123.99;
}

Cabinet::~Cabinet()
{
}
