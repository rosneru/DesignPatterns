#ifndef CHASSIS_HPP
#define CHASSIS_HPP

#include "CompositeEquipment.hpp"

class Chassis : public CompositeEquipment
{
public:
  Chassis(std::string name);
  virtual ~Chassis();
};

#endif // CHASSIS_HPP
