/*  Dataman Project
    CSC 134
    M4LAB
    Khristopher Lane
    Feb 21, 2019 */

#include <iostream>
#include "Arithmetic.h"
#include "Temperature.h"

using namespace std;

void Print_Main_Menu();
void Main_Menu();
//void Temperature_Menu();
float main_Temperature();
int main_arithmetic();

int main_arithmetic()
{
    int numberOne;
    int numberTwo;
    char opcode;

    cout << "Hello there and welcome to dataman! Ready to do some basic math?!" << endl;
    cout << "What are your two numbers?" << endl;
    cin >> numberOne >> opcode >> numberTwo;
    if (opcode == '+')
    {
        cout << "Alright, then your total is: " << add(numberOne, numberTwo) << endl;
    }
    else if (opcode == '-')
    {
        cout << "Alright, your total is: " << subtract(numberOne, numberTwo) << endl;
    }
    else if (opcode == '*')
    {
        cout << "Alright, then your total is: " << multiply(numberOne, numberTwo) << endl;
    }
    else if (opcode == '/')
    {
        cout << "Alright, then your total is: " << divide(numberOne, numberTwo) << endl;
    }
    else
    {
        cout << "Those are invalid please try again." << endl;
    }

    return 0;
}
float main_Temperature()
{
    float number;
    char degree;
    cout << "Hello! Ready to do some degree conversion?! Let us begin!" << endl;
    cout << "What is the degree value you are trying to convert?" << endl;
    cin >> number >> degree;
    if (degree == 'C')
    {
        cout << "The conversion from Celsius to Kelvin is: " << convertCtoK(number) << "K" << endl;
    }
    if (degree == 'K')
    {
        cout << "The conversion from Kelvin to Celsius is: " << convertKtoC(number) << "C" << endl;
    }
    else
    {
        cout << "Those are invalid, please try again" << endl;
    }

    return 0;
}
int main()
{
    // for now, the main () just calls the main menu
    Main_Menu();
}
void Main_Menu()
{
    int choice;

    do
    {
        Print_Main_Menu();
        cout << "Option: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            main_arithmetic();
            break;
        case 2:
            main_Temperature();
            break;
        case 0:
            cout << "Exiting" << endl;
        default:
            cout << "Invalid option" << endl;
        }
    } while (choice != 0); // exit menu option
}
/*void Temperature_Menu() // was trying to give another sub menu within the Tempt. menu.
{
    int choice;

    do
    {
        cout << endl;
        cout << "---Temperature Menu---" << endl;
        cout << "1. Converting Kelvin to Celsius" << endl;
        cout << "2. Converting Celsius to Kelvin" << endl;
        cout << "0. Exit to Return to Dataman Main Menu" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            main_Temperature();
            break;
        case 2:
            main_Temperature();
            break;
        case 0:
            Main_Menu();
        default:
            cout << "Invalid Option" << endl;
        }
    }while (choice != 0);
}*/
void Print_Main_Menu()
{
    // display the main menu
    cout << endl;
    cout << "--Dataman Main Menu--" << endl;
    cout << "1. Arithmetic" << endl;
    cout << "2. Temperature Conversion" << endl;
    cout << "0. Exit Dataman" << endl;
}
