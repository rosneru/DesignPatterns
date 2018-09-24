#ifndef EQUIPMENT_HPP
#define EQUIPMENT_HPP

#include <string>

class Equipment
{
public:
  virtual ~Equipment();

  std::string GetName();

  virtual int GetPower() = 0;
  virtual float GetNetPrice() = 0;
  virtual float GetDiscountPrice() = 0;

  virtual void Add(Equipment* pEquipment);
  virtual void Remove(Equipment* pEquipment);

protected:
  Equipment(std::string name);

private:
  const std::string m_Name;

protected:
  int m_Power;
  float m_NetPrice;
  float m_DiscountPrice;
};

#endif // EQUIPMENT_HPP
