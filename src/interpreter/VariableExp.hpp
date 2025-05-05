#ifndef VARIABLE_EXP_HPP
#define VARIABLE_EXP_HPP

#include "BooleanExp.hpp"


class VariableExp : public BooleanExp
{
public:
  VariableExp(const char*);
  virtual ~VariableExp();

  virtual bool Evaluate(Context&);
  virtual BooleanExp* Replace(const char*, BooleanExp&);
  virtual BooleanExp* Copy() const;

private:
  char* m_pName;
};

#endif
