#ifndef AND_EXP_HPP
#define AND_EXP_HPP

#include "BooleanExp.hpp"

class AndExp : public BooleanExp
{
public:
  AndExp(BooleanExp* pOperand1, BooleanExp* pOperand2);
  virtual ~AndExp();

  virtual bool Evaluate(Context& context);
  virtual BooleanExp* Replace(const char* pName, BooleanExp& expr);
  virtual BooleanExp* Copy() const;

private:
  BooleanExp* m_pOperand1;
  BooleanExp* m_pOperand2;
};

#endif
