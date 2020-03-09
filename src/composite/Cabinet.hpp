#ifndef CABINET_HPP
#define CABINET_HPP

#include "CompositeEquipment.hpp"

class Cabinet : public CompositeEquipment
{
public:
  Cabinet(std::string name);
  virtual ~Cabinet();

};

#endif // CABINET_HPP
