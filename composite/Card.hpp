#ifndef CARD_HPP
#define CARD_HPP

#include "CompositeEquipment.hpp"

class Card : public CompositeEquipment
{
public:
  Card(std::string name);
  virtual ~Card();
};

#endif // CARD_HPP
