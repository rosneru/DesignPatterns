#include <iostream>
#include <thread>

#include <cstdio>

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

#include "strategy/Compositor.hpp"
#include "strategy/ArrayCompositor.hpp"
#include "strategy/TriangularCompositor.hpp"
#include "strategy/Composition.hpp"

#include "command/Application.hpp"

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

  VisualComponent* pRedTextObject = new RedColorDecorator(pTextObject)  ;
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
  string text = "Hallo, ich probiere hier einmal aus, ob der Text durch die verschiedenen Strategien (Compositoren) auch wirklich verschieden umgebrochen wird. ";
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

      case 'q':
        bExitRequested = true;
        break;
    }
  }
  while (bExitRequested == false);
  return 0;
}
