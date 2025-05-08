#include "NotExp.hpp"

NotExp::NotExp(BooleanExp* pOperand)
: m_pOperand(pOperand)
{
}

NotExp::~NotExp()
{
}


bool NotExp::Evaluate(Context& context)
{
  return !m_pOperand->Evaluate(context);
}

BooleanExp* NotExp::Replace(const char* pName, BooleanExp& expr)
{
  return new NotExp(m_pOperand->Replace(pName, expr));
}

BooleanExp* NotExp::Copy() const
{
  return new NotExp(m_pOperand->Copy());
}
