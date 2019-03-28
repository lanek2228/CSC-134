// CSC 134
// M6T1
// March 28, 2019
// Khristopher Lane

#include <iostream>
#include "observer.h"

using namespace std;

int main()
{
    Subject Alarm;
    Subject Donuts;

    Dog *Fido = new Dog(&Alarm, "Fido");

    cout << "The dog rushes towards suspect" << endl;
    Alarm.Event();
    cout << endl;
    cout << "Pins suspect" << endl;
    delete Fido;
    Alarm.Event();

    Police *JoeFriday = new Police(&Alarm, "Joe Friday");

    cout << "Joe Friday on the beat." << endl;
    Alarm.Event();
    cout << endl;
    cout << "Joe Friday taking over for TJ." << endl;
    delete JoeFriday;
    Alarm.Event();

    // This is from original Alarm, but was replaced with Donuts
    Police *TJHooker = new Police(&Donuts, "TJ");

    cout << "TJ on the beat" << endl;
    //Donuts.Event();
    cout << endl;
    cout << "TJ off for the day" << endl;
    delete TJHooker;
    //Donuts.Event();

    return 0;
}
