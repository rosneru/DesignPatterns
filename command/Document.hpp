#ifndef DOCUMENT_HPP
#define DOCUMENT_HPP

#include <string>

class Document
{
public:
  Document(std::string p_Name);
  virtual ~Document();

  bool Open();
  std::string GetName();

private:
  std::string m_Name;
};

#endif // DOCUMENT_HPP
