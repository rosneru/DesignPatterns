#ifndef DIFFDOCUMENT_HPP
#define DIFFDOCUMENT_HPP

#include <string>

class DiffDocument
{
public:
  DiffDocument(std::string p_Name);
  virtual ~DiffDocument();

  bool Open(std::string p_FileName);
  std::string Name();

private:
  std::string m_Name;
};

#endif // DIFFDOCUMENT_HPP
