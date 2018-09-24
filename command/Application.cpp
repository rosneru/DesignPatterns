#include <iostream>

#include "Application.hpp"


Application::~Application()
{

}

bool Application::Add(Document* p_pDocument)
{
    std::cout << "  [APP] ADD Document '" << p_pDocument->GetName() << "'" << std::endl;
    return true;
}


Application::Application()
{
}
