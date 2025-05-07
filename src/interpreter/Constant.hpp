#ifndef CONSTANT_HPP
#define CONSTANT_HPP

#include "BooleanExp.hpp"

class Constant : public BooleanExp
{
public:
    Constant(bool bValue);
    virtual ~Constant();

    virtual bool Evaluate(Context& context);
    virtual BooleanExp* Replace(const char* pName, BooleanExp& exp);
    virtual BooleanExp* Copy() const;

private:
    bool m_bValue;
};


#endif
