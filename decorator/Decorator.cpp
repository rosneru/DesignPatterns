#include "Decorator.hpp"

Decorator::Decorator(VisualComponent* p_pComponent)
{
  m_pComponent = p_pComponent;
}

Decorator::~Decorator()
{

}

void Decorator::Draw()
{
  m_pComponent->Draw();
}

int Decorator::NumCharsInLine()
{
  return m_pComponent->NumCharsInLine();
}

void Decorator::SetText(std::string p_Text)
{
  m_pComponent->SetText(p_Text);
}
