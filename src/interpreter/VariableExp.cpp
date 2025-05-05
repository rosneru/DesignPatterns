#include "VariableExp.hpp"
#include <cstring>


VariableExp::VariableExp(const char* pName)
{
  m_pName = strdup(pName);
}

VariableExp::~VariableExp()
{
}

bool VariableExp::Evaluate(Context& context)
{
  return context.Lookup(m_pName);
}

BooleanExp* VariableExp::Replace(const char* pName, BooleanExp& exp)
{
  if(strcmp(pName, m_pName) == 0)
  {
    return exp.Copy();
  }
  else
  {
    return new VariableExp(pName);
  }
}

BooleanExp* VariableExp::Copy() const
{
  return new VariableExp(m_pName);
}
