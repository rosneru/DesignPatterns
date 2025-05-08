#ifndef VARIABLE_EXP_HPP
#define VARIABLE_EXP_HPP

#include "BooleanExp.hpp"


class VariableExp : public BooleanExp
{
public:
  VariableExp(const char* pName);
  virtual ~VariableExp();

  virtual bool Evaluate(Context& context);
  virtual BooleanExp* Replace(const char* pName, BooleanExp& exp);
  virtual BooleanExp* Copy() const;

  const char* GetName() const;

private:
  char* m_pName;
};

#endif
