#include <time.h>
#include <chrono>
#include <thread>

#include "ClockTimer.hpp"

using namespace std::chrono;

ClockTimer::ClockTimer()
{
  // Setting up a thread that periodically calls the Tick() and then
  // sleeps for one second. So it acts like a timer with an One-second-
  // tick.
  std::thread([&]()
  {
    while(true)
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
//  // Get and store the current time
//  system_clock::time_point now = system_clock::now();
//  time_t tt = system_clock::to_time_t(now);
//   
//  std::tm localTm {};
//
//  //
//  // Using Windows-/UNIX-specific variants of the potential unsafe 
//  // localtime call. On all other platforms using a mutex when for localtime.
//  //
//
//#if defined(__unix__)
//  localTm = *localtime(&tt, &localTm);
//#elif defined(_MSC_VER)
//  localtime_s(&localTm, &tt);
//#else
//  static std::mutex mtx;
//  std::lock_guard<std::mutex> lock(mtx);
//  localTm = localtime(&timer);
//#endif
//
//  m_Hour = localTm.tm_hour;
//  m_Minute = localTm.tm_min;
//  m_Second = localTm.tm_sec;
//
//  // Notify the observers
//  Notify();
}
