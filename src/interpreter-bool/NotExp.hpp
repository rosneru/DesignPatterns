#ifndef NOT_EXP_HPP
#define NOT_EXP_HPP

#include "BooleanExp.hpp"

class NotExp : public BooleanExp
{
public:
  NotExp(BooleanExp* pOperand);
  virtual ~NotExp();

  virtual bool Evaluate(Context& context);
  virtual BooleanExp* Replace(const char* pName, BooleanExp& expr);
  virtual BooleanExp* Copy() const;

private:
  BooleanExp* m_pOperand;
};


#endif
