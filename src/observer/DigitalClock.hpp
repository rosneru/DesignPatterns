#ifndef DIGITAL_CLOCK_HPP
#define DIGITAL_CLOCK_HPP

#include "ClockTimer.hpp"
#include "Observer.hpp"
#include "Subject.hpp"

class DigitalClock : public Observer
{
public:
  DigitalClock(ClockTimer* p_pSubject);
  virtual ~DigitalClock();

  virtual void Update(Subject* p_pChangedSubject);
  virtual void Draw();

private:
  ClockTimer* m_pSubject;
};

#endif // DIGITAL_CLOCK_HPP
