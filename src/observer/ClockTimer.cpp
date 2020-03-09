#include <chrono>
#include <thread>
#include <time.h>

#include "ClockTimer.hpp"

using namespace std::chrono;

ClockTimer::ClockTimer()
{
  // Setting up a thread that periodically calls the Tick() and then
  // sleeps for one second. So it acts like a timer with an One-second-
  // tick.
  std::thread([&]() 
  {
    while (true)
    {
      Tick();
      std::this_thread::sleep_for(std::chrono::seconds(1));
    }
  }).detach();
}

int ClockTimer::GetHour()
{
  return m_Hour;
}

int ClockTimer::GetMinute()
{
  return m_Minute;
}

int ClockTimer::GetSecond()
{
  return m_Second;
}

void ClockTimer::Tick()
{
  // Get and store the current time
  system_clock::time_point now = system_clock::now();
  std::time_t time = std::time(nullptr);

  std::tm* pLocalTime = std::localtime(&time);

  m_Hour = pLocalTime->tm_hour;
  m_Minute = pLocalTime->tm_min;
  m_Second = pLocalTime->tm_sec;

  // Notify the observers
  Notify();
}
