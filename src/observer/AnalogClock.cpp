#include "AnalogClock.hpp"

#include <iostream>
#include "DigitalClock.hpp"

using namespace std;

AnalogClock::AnalogClock(ClockTimer* p_pSubject)
  : m_pSubject(p_pSubject)
{
  m_pSubject->Attach(this);
}

AnalogClock::~AnalogClock()
{
  m_pSubject->Detach(this);
}

void AnalogClock::Update(Subject* p_pChangedSubject)
{
  // Before calling Draw() we have to check if the notifying subject
  // is the subject added to the DigitalClock at creation time
  if(p_pChangedSubject == m_pSubject)
  {
    Draw();
  }
}

void AnalogClock::Draw()
{
  cout << "ANALOG CLOCK: Time = " << m_pSubject->GetHour() << ":"
       << m_pSubject->GetMinute() << ":" << m_pSubject->GetSecond()
       << endl;
}
