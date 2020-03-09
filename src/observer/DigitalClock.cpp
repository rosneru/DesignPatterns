#include <iostream>
#include "DigitalClock.hpp"

using namespace std;

DigitalClock::DigitalClock(ClockTimer* p_pSubject)
  : m_pSubject(p_pSubject)
{
  m_pSubject->Attach(this);
}

DigitalClock::~DigitalClock()
{
  m_pSubject->Detach(this);
}

void DigitalClock::Update(Subject* p_pChangedSubject)
{
  // Before calling Draw() we have to check if the notifying subject
  // is the subject added to the DigitalClock at creation time
  if(p_pChangedSubject == m_pSubject)
  {
    Draw();
  }
}

void DigitalClock::Draw()
{
  cout << "DIGITAL CLOCK: Time = " << m_pSubject->GetHour() << ":"
       << m_pSubject->GetMinute() << ":" << m_pSubject->GetSecond()
       << endl;
}
