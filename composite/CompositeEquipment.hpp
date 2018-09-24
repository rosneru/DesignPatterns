#ifndef COMPOSITEEQUIPMENT_HPP
#define COMPOSITEEQUIPMENT_HPP

#include <list>
#include "Equipment.hpp"

class CompositeEquipment : public Equipment
{
public:
  virtual ~CompositeEquipment();

  virtual int GetPower();
  virtual float GetNetPrice();
  virtual float GetDiscountPrice();

  virtual void Add(Equipment* pEquipment);
  virtual void Remove(Equipment* pEquipment);

protected:
  CompositeEquipment(std::string name);

private:
  std::list<Equipment*> m_EquipmentList;
};

#endif // COMPOSITEEQUIPMENT_HPP
