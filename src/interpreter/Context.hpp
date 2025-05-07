#ifndef CONTEXT_HPP
#define CONTEXT_HPP

class VariableExp;

class Context
{
public:
  bool Lookup(const char*) const;
  void Assign(VariableExp*, bool);

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
