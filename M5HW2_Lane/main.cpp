#include <iostream>
#include "atm.h"

using namespace std;

void Print_Atm_Main_Menu();


int main()
{
    int option;
    int number;
    Atm myAtm;

    /*cout << "Hello and Welcome to Bank FTCC!" << endl;
    cout << "What is your pin number for your account?" << endl;
    cin >> number;
    if (number = 4825)
    {
       do
    {
        Print_Atm_Main_Menu();
            cout << "Welcome, what would you like to do today?" << endl;
        cout << "Option: ";
        cin >> option;
        cout << endl;
        switch (option)
        {
        case 1:
            myAtm.checkBalance();
            break;
        case 2:
            myAtm.withdraw();
            break;
        case 3:
            myAtm.deposit();
        case 0:
        cout << "Exiting out of account." << endl;
        default:
            cout << "Please come back again." << endl;
        }
        } while (option != 0); // exiting the atm account.
    }
    else
    {
        cout << "Sorry, invalid Pin number, please try again." << endl;
    }*/

    do
    {
    Print_Atm_Main_Menu();
    cout << "Welcome, what would you like to do today?" << endl;
    cout << "Option: ";
    cin >> option;
    cout << endl;
    switch (option)
    {
    case 1:
        myAtm.checkBalance();
        break;
    case 2:
        myAtm.withdraw();
        break;
    case 3:
        myAtm.deposit();
    case 0:
        cout << "Exiting out of account." << endl;
    default:
        cout << "Please come back again." << endl;
    }
    } while (option != 0); // exiting the atm account.

    return 0;
}
