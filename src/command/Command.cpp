#include "Command.hpp"


Command::Command(std::string p_Name)
{
  m_Name = p_Name;
}

Command::~Command()
{

}

std::string Command::Name()
{
  return m_Name;
}

