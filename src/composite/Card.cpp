#include "Card.hpp"

Card::Card(std::string name) : CompositeEquipment(name)
{
  m_Power = 120;
  m_NetPrice = 156.99;
  m_DiscountPrice = 149.99;
}

Card::~Card()
{
}
