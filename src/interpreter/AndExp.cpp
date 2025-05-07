#include "AndExp.hpp"

AndExp::AndExp(BooleanExp* pOperand1, BooleanExp* pOperand2)
  : m_pOperand1(pOperand1)
  , m_pOperand2(pOperand2)
{

}

AndExp::~AndExp()
{
}


bool AndExp::Evaluate(Context& context)
{
  return m_pOperand1->Evaluate(context) && m_pOperand2->Evaluate(context);
}

BooleanExp* AndExp::Replace(const char* pName, BooleanExp& expr)
{
  return new AndExp(
    m_pOperand1->Replace(pName, expr),
    m_pOperand2->Replace(pName, expr)
  );
}

BooleanExp* AndExp::Copy() const
{
  return new AndExp(m_pOperand1->Copy(), m_pOperand2->Copy());
}
