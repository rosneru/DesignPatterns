#include "CompositeEquipment.hpp"


CompositeEquipment::CompositeEquipment(std::string name) : Equipment(name)
{
}


CompositeEquipment::~CompositeEquipment()
{

}


int CompositeEquipment::GetPower()
{
  int power = 0;

  for (Equipment* pEquipment : m_EquipmentList)
  {
    power += pEquipment->GetPower();
  }

  return power + m_Power;
}


float CompositeEquipment::GetNetPrice()
{
  float netPrice = 0;

  for(Equipment* pEquipment : m_EquipmentList)
  {
    netPrice += pEquipment->GetNetPrice();
  }

  return netPrice + m_NetPrice;
}


float CompositeEquipment::GetDiscountPrice()
{
  float discountedPrice = 0;

  for (Equipment* pEquipment : m_EquipmentList)
  {
    discountedPrice += pEquipment->GetDiscountPrice();
  }

  return discountedPrice + m_DiscountPrice;
}


void CompositeEquipment::Add(Equipment* pEquipment)
{
  m_EquipmentList.push_back(pEquipment);
}


void CompositeEquipment::Remove(Equipment* pEquipment)
{
  m_EquipmentList.remove(pEquipment);
}
