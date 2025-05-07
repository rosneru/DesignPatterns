#include "OrExp.hpp"

OrExp::OrExp(BooleanExp* pOperand1, BooleanExp* pOperand2)
{
}

OrExp::~OrExp()
{
}


bool OrExp::Evaluate(Context& context)
{
  return m_pOperand1->Evaluate(context) || m_pOperand2->Evaluate(context);
}

BooleanExp* OrExp::Replace(const char* pName, BooleanExp& expr)
{
  return new OrExp(
    m_pOperand1->Replace(pName, expr),
    m_pOperand2->Replace(pName, expr)
  );
}

BooleanExp* OrExp::Copy() const
{
  return new OrExp(m_pOperand1->Copy(), m_pOperand2->Copy());
}
