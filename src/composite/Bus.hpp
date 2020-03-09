#ifndef BUS_HPP
#define BUS_HPP

#include "CompositeEquipment.hpp"

class Bus : public CompositeEquipment
{
public:
  Bus(std::string name);
  virtual ~Bus();

};

#endif // BUS_HPP
