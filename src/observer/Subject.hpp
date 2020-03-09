#ifndef SUBJECT_HPP
#define SUBJECT_HPP

#include <list>
#include "Observer.hpp"

class Subject
{
public:
  virtual ~Subject();

  virtual void Attach(Observer* p_pObserver);
  virtual void Detach(Observer* p_pObserver);
  virtual void Notify();

protected:
  Subject();

private:
  std::list<Observer*> m_ObserversList;
};

#endif // SUBJECT_HPP
