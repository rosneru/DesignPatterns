#ifndef CLOCK_TIMER_HPP
#define CLOCK_TIMER_HPP

#include "Subject.hpp"

/**
 * Note that ClockTimer class is a (inherits from) Subject which can be
 * observed by observers. In this example AnalogClock and DigitalClock
 * are the observers.
 *
 * Each call of method Tick first sets the current time and then will
 * call the method Notify (inherited from Subject).
 */
class ClockTimer : public Subject
{
public:
  ClockTimer();
  virtual int GetHour();
  virtual int GetMinute();
  virtual int GetSecond();

  void Tick();

private:
  int m_Hour;
  int m_Minute;
  int m_Second;
};

#endif // CLOCK_TIMER_HPP
