#ifndef CONTEXT_HPP
#define CONTEXT_HPP

#include <string>
#include <map>

class VariableExp;

class Context
{
public:
  bool Lookup(const char* pName) const;
  void Assign(VariableExp* pVarExp, bool bValue);

private:
    std::map<std::string, bool> m_Variables;

/* TODO: Change it like this: (??)
class Context
{
public:
    bool Lookup(const char* name) const {
        auto it = variables.find(name);
        return it != variables.end() ? it->second : false; // Standardwert: false
    }

    void Assign(VariableExp* var, bool value) {
        // Annahme: VariableExp hat eine Methode, um den Namen abzurufen
        variables[var->GetName()] = value;
    }

private:
    std::map<std::string, bool> variables;
};

 */
};

#endif
