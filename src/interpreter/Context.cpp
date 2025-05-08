#include "VariableExp.hpp"
#include "Context.hpp"

bool Context::Lookup(const char* pName) const
{
  auto it = m_Variables.find(pName);
  return it != m_Variables.end() ? it->second : false;
}

void Context::Assign(VariableExp* pVarExp, bool bValue)
{
  m_Variables[pVarExp->GetName()] = bValue;
}
