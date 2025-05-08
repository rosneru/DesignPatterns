#include "Constant.hpp"

Constant::Constant(bool bValue)
: m_bValue(bValue)
{
}

Constant::~Constant()
{
}

bool Constant::Evaluate(Context& context)
{
  return m_bValue;
}

BooleanExp* Constant::Replace(const char* pName, BooleanExp& exp)
{
  // Since a constant is immutable, it returns itself
  return Copy();
}

BooleanExp* Constant::Copy() const
{
  return new Constant(m_bValue);
}
