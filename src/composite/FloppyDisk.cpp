#include "FloppyDisk.hpp"

FloppyDisk::FloppyDisk(std::string name) : Equipment(name)
{
  m_Power = 20;
  m_NetPrice = 108.95;
  m_DiscountPrice = 97.95;
}

FloppyDisk::~FloppyDisk()
{

}

int FloppyDisk::GetPower()
{
  return m_Power;
}

float FloppyDisk::GetNetPrice()
{
  return m_NetPrice;
}

float FloppyDisk::GetDiscountPrice()
{
  return m_DiscountPrice;
}
