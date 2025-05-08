#ifndef OR_EXP_HPP
#define OR_EXP_HPP

#include "BooleanExp.hpp"

class OrExp : public BooleanExp
{
public:
  OrExp(BooleanExp* pOperand1, BooleanExp* pOperand2);
  virtual ~OrExp();

  virtual bool Evaluate(Context& context);
  virtual BooleanExp* Replace(const char* pName, BooleanExp& expr);
  virtual BooleanExp* Copy() const;

private:
  BooleanExp* m_pOperand1;
  BooleanExp* m_pOperand2;
};

#endif
