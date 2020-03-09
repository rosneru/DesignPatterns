#ifndef ANALOG_CLOCK_HPP
#define ANALOG_CLOCK_HPP

#include "ClockTimer.hpp"
#include "Observer.hpp"
#include "Subject.hpp"

class AnalogClock : public Observer
{
public:
  AnalogClock(ClockTimer* p_pSubject);
  virtual ~AnalogClock();

  virtual void Update(Subject* p_pChangedSubject);
  virtual void Draw();

private:
  ClockTimer* m_pSubject;
};

#endif // ANALOG_CLOCK_HPP
