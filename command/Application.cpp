#include <cstdio>
#include <iostream>

#include "CmdFileOpen.hpp"
#include "CmdQuit.hpp"
#include "Application.hpp"

using namespace std;

Application::Application()
  : m_LeftDiffWindow("Left diff window"),
    m_RightDiffWindow("Right diff window")
{
  m_bExitRequested = false;

  m_CommandList.push_back(new CmdFileOpen("Open the left file", m_LeftDiffWindow));
  m_CommandList.push_back(new CmdFileOpen("Open the right file", m_RightDiffWindow));
  m_CommandList.push_back(new CmdQuit("Quit the application", m_bExitRequested));
}

Application::~Application()
{

}

void Application::Run()
{
  cout << "***************************************" << endl;
  cout << "* Command pattern                     *" << endl;
  cout << "***************************************" << endl << endl;
  cout << "  Hello and welcome to our new DIFF    " << endl;
  cout << "  tool. Please select a command:       " << endl;

  do
  {
    int idx = -1;
    for(Command* pCmd : m_CommandList)
    {
      ++idx;
      cout << "    [" << (idx + 1) << "] " << pCmd->Name() << endl;
    }

    cout << "  > ";

    string menuPick = "";
    cin >> menuPick;

    int selectedIndex = -1;

    try
    {
      selectedIndex = stoi(menuPick) - 1;
      if(selectedIndex > idx) // after the for loop above idx is the max index
      {
        selectedIndex = -1;
      }
    }
    catch(exception e)
    {
      selectedIndex = -1;
    }

    if(selectedIndex >= 0)
    {
      m_CommandList[selectedIndex]->Execute();
    }
    else
    {
      cout << "  Wrong input." << endl << endl;
    }
  }
  while (m_bExitRequested == false);

  cout << "Exiting the command pattern example." << endl << endl;
}

bool Application::Add(DiffDocument* p_pDocument)
{
  return true;
}



