#include "Subject.hpp"

Subject::Subject()
{

}

Subject::~Subject()
{

}

void Subject::Attach(Observer* p_pObserver)
{
  m_ObserversList.push_back(p_pObserver);
}

void Subject::Detach(Observer* p_pObserver)
{
  m_ObserversList.remove(p_pObserver);
}

void Subject::Notify()
{
  for(Observer* pObserver : m_ObserversList)
  {
    pObserver->Update(this);
  }
}
