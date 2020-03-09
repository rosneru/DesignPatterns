#ifndef FLOPPYDISK_HPP
#define FLOPPYDISK_HPP

#include "Equipment.hpp"

class FloppyDisk : public Equipment
{
public:
  FloppyDisk(std::string name);
  virtual ~FloppyDisk();

  virtual int GetPower();
  virtual float GetNetPrice();
  virtual float GetDiscountPrice();
};

#endif // FLOPPYDISK_HPP
