#include "Chassis.hpp"

Chassis::Chassis(std::string name) : CompositeEquipment(name)
{
  m_Power = 150;
  m_NetPrice = 299.90;
  m_DiscountPrice = 249.90;
}

Chassis::~Chassis()
{

}
