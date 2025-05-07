#include <iostream>
#include <thread>

#include <cstdio>

#include "command/Application.hpp"

#include "composite/Bus.hpp"
#include "composite/Cabinet.hpp"
#include "composite/Card.hpp"
#include "composite/Chassis.hpp"
#include "composite/FloppyDisk.hpp"

#include "decorator/VisualComponent.hpp"
#include "decorator/ConcreteComponentTextObject.hpp"
#include "decorator/Decorator.hpp"
#include "decorator/BorderDecorator.hpp"
#include "decorator/RedColorDecorator.hpp"

#include "observer/AnalogClock.hpp"
#include "observer/DigitalClock.hpp"
#include "observer/ClockTimer.hpp"

#include "interpreter/AndExp.hpp"
#include "interpreter/BooleanExp.hpp"
#include "interpreter/Context.hpp"
#include "interpreter/OrExp.hpp"
#include "interpreter/VariableExp.hpp"

#include "strategy/Compositor.hpp"
#include "strategy/ArrayCompositor.hpp"
#include "strategy/TriangularCompositor.hpp"
#include "strategy/Composition.hpp"


using namespace std;

void TestComposite()
{
  Chassis chassis("PC Chassis");

  Cabinet cabinet("PC Cabinet");
  cabinet.Add(&chassis);

  Card card("16 Mbs Token Ring");

  Bus bus("MCA Bus");
  bus.Add(&card);
  chassis.Add(&bus);

  FloppyDisk floppyDisk("3.5\" Floppy");
  chassis.Add(&floppyDisk);

  cout << "Net price of the card: " << card.GetNetPrice() << endl;
  cout << "Net price of the bus: " << bus.GetNetPrice() << endl;

  cout << "Net price of the floppy drive: " << floppyDisk.GetNetPrice() << endl;
  cout << "Net price of the chassis: " << chassis.GetNetPrice() << endl;
  cout << "Net price of the computer: " << cabinet.GetNetPrice() << endl;
}

void TestDecorator()
{
  VisualComponent* pTextObject = new ConcreteComponentTextObject("Hallo!");
  pTextObject->Draw();

  cout << endl;
  cout << endl;

  VisualComponent* pBorderedTextObject = new BorderDecorator(pTextObject);
  pBorderedTextObject->Draw();

  cout << endl;
  cout << endl;

  VisualComponent* pBorderedAndRedTextObject = new RedColorDecorator(pBorderedTextObject);
  pBorderedAndRedTextObject->Draw();

  pBorderedAndRedTextObject->SetText("Neuer Text?");

  cout << endl;
  cout << endl;

  pBorderedAndRedTextObject->Draw();

  cout << endl;
  cout << endl;

  VisualComponent* pRedTextObject = new RedColorDecorator(pTextObject);
  pRedTextObject->Draw();

  cout << endl;
  cout << endl;

  pTextObject->Draw();

  cout << endl;
  cout << endl;

  delete pTextObject;
  delete pBorderedTextObject;
  delete pRedTextObject;
  delete pBorderedAndRedTextObject;

}

void TestStrategy()
{
  string text = "Hallo, ich probiere hier einmal aus, ob der Text "
                "durch die verschiedenen Strategien (Compositoren) "
                "auch wirklich verschieden umgebrochen wird. ";

  ArrayCompositor arrayCompositor;
  TriangularCompositor triangularCompositor;

  Composition myTextComposition(&arrayCompositor);
  myTextComposition.PrintComposedText(text);
  cout << endl << endl;
  myTextComposition.ChangeCompositor(&triangularCompositor);
  myTextComposition.PrintComposedText(text);
}

void TestCommand()
{
  Application application;
  application.Run();
}


void TestObserver()
{


  cout << "***************************************" << endl;
  cout << "* Observer pattern                    *" << endl;
  cout << "***************************************" << endl << endl;
  cout << "  >> Created ClockTimer (subject)      " << endl;
  cout << "  >> Created AnalogClock (observer)    " << endl;
  cout << "  >> Created DigitlClock (observer)    " << endl;
  cout << "                                       " << endl;
  cout << "                                       " << endl;
  cout << "  Please be patient. The application   " << endl;
  cout << "  will wait for 20 seconds and quit    " << endl;
  cout << "  aferwards.                           " << endl;
  cout << "                                       " << endl;
  cout << "  Meanwhile all messages you see come  " << endl;
  cout << "  from the two observers               " << endl;
  cout << "    AnalogClock and DigitalClock       " << endl;
  cout << "  which are observing the subject      " << endl;
  cout << "    ClockTimer                         " << endl;
  cout << "  and getting notified each time       " << endl;
  cout << "  ClockTimer has changed...            " << endl;

  ClockTimer clockTimer;
  AnalogClock analogClock(&clockTimer);
  DigitalClock digitalClock(&clockTimer);
  std::this_thread::sleep_for(std::chrono::seconds(20));
}


void TestInterpreterBoolean()
{
  cout << "  Interpreter for boolean expression" << endl;
  cout << "    (true and x) or (y and (not x))" << endl << endl;
  cout << "  with x =  false, y = true" << endl;

  Context context;
  
  VariableExp x("X");
  VariableExp y("Y");

  // BooleanExp* pExpression = new OrExp(
  //   new AndExp(new)
  // );
}

int main()
{
  bool bExitRequested = false;

  do
  {
    std::chrono::milliseconds sleepTimeMs(250);

    cout << "What to do?" << endl;
    cout << "  1 ... Composite pattern" << endl;
    cout << "  2 ... Decorator pattern" << endl;
    cout << "  3 ... Strategy pattern" << endl;
    cout << "  4 ... Command pattern" << endl;
    cout << "  5 ... Observer pattern" << endl;
    cout << "  6 ... Interpreter pattern: boolean expression" << endl;
    cout << "  q ... QUIT" << endl;
    cout << "> ";

    char cInput = 0;
    cin >> cInput;

    switch(cInput)
    {
      case '1':
        TestComposite();
        cout << endl << endl;
        break;

      case '2':
        TestDecorator();
        cout << endl << endl;
        break;

      case '3':
        TestStrategy();
        cout << endl << endl;
        break;

      case '4':
        TestCommand();
        cout << endl << endl;
        break;

      case '5':
        TestObserver();
        cout << endl << endl;
        break;

      case '6':
        TestInterpreterBoolean();
        cout << endl << endl;
        break;

      case 'q':
        bExitRequested = true;
        break;
    }
  }
  while (bExitRequested == false);
  return 0;
}
