#ifndef OBSERVER_HPP
#define OBSERVER_HPP

class Subject;

class Observer
{
public:
  virtual ~Observer();
  virtual void Update(Subject* p_pChangedSubject) = 0;

protected:
  Observer();
};

#endif // OBSERVER_HPP
