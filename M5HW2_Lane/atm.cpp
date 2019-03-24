#include <iostream>
#include "atm.h"

using namespace std;

/*void SetPin()
{
    int number;

    do
    {
    cout << "Hello and Welcome to Bank FTCC!" << endl;
    cout << "What is your pin number for your account?" << endl;
    cin >> number;
    if (number = 4825)
    {
       Print_Atm_Main_Menu();
    }
    else
    {
        cout << "Sorry, invalid Pin number, please try again." << endl;
    }
    }while(number != 0); // try to set the Pin to be written first before get into ATM menu
}*/
Atm::Atm()
{
    balance = 0;
}

void Atm::withdraw()
{
    float output;

    cout << "How much money would you like to withdraw today?" << endl;
    cin >> output;
    if (balance - output >= 0)
    {
    balance = balance - output;
    cout << "you withdrew " << output << " dollars, leaving you: " << balance << " left in the account." << endl;
    }
    else
    {
        cout << "Invalid withdraw request, please input proper request." << endl;
    }
    cout << endl;
}

void Atm::deposit()
{
    float input;

    cout << "How much money would you like to deposit today?" << endl;
    cin >> input;
    if (input >=0)
    {
        balance = balance + input;
        cout << "you deposited " << input << " dollars, leaving you: " << balance << " left in the account." << endl;
    }
    else
    {
         cout << "Invalid balance request, please input proper request." << endl;
    }
    cout << endl;
}

void Atm::checkBalance()
{
    cout << "Your current balance is: " << balance << endl;
    cout << endl;
}
