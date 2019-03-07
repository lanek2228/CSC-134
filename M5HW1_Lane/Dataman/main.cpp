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
void Temperature_Menu();
void Print_Temperature_Menu();
float main_Temperature();
int main_arithmetic();

int main_arithmetic()
{
    int numberOne;
    int numberTwo;
    char opcode;

    cout << endl;
    cout << "Hello there and welcome to Dataman! Ready to do some basic math?!" << endl;
    cout << "What are your two numbers you would like to add, subtract, multiply, or divide?" << endl;
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

void CelsiustoKelvin()
{
    float number;

    cout << endl;
    cout << "Input the Celsius value you are trying to convert: ";
    cin >> number;
    cout << endl;
    cout << "The conversion from Celsius to Kelvin is: " << convertCtoK(number) << "K" << endl;
}

void KelvintoCelsius()
{
    float number;

    cout << endl;
    cout << "Input the Kelvin value you are trying to convert: ";
    cin >> number;
    cout << endl;
    cout << "The conversion from Kelvin to Celsius is: " << convertKtoC(number) << "C" << endl;
}

void FahrenheitToCelsius()
{
    float number;

    cout << endl;
    cout << "Input the Fahrenheit value you are trying to convert: ";
    cin >> number;
    cout << endl;
    cout << "The conversion from Fahrenheit to Celsius is: " << convertFtoC(number) << "C" << endl;
}

void CelsiusToFahrenheit()
{
    float number;

    cout << endl;
    cout << "Input the Celsius value you are trying to convert: ";
    cin >> number;
    cout << endl;
    cout << "The conversion from Celsius to Fahrenheit is: " << convertCtoF(number) << "F" << endl;
}
/*float main_Temperature()
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
}*/
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
        cout << endl;
        cout << "Hello and Welcome to Dataman!" << endl;
        cout << "A basic program to do some basic math calculations and temperature conversions." << endl;
        cout << "Please select the number to proceed one of many Dataman's functions." << endl;
        cout << "Option: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            main_arithmetic();
            break;
        case 2:
            Temperature_Menu();
            break;
        case 0:
            cout << "Exiting" << endl;
        default:
            cout << "Have a good day!" << endl;
        }
    } while (choice != 0); // exit menu option
}
void Temperature_Menu() // was trying to give another sub menu within the Tempt. menu.
{
    int choice;

    do
    {
        Print_Temperature_Menu();
        cout << "Option: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            KelvintoCelsius();
            break;
        case 2:
            CelsiustoKelvin();
            break;
        case 3:
            FahrenheitToCelsius();
            break;
        case 4:
            CelsiusToFahrenheit();
            break;
        case 0:
            Main_Menu();
        default:
            cout << "Invalid Option" << endl;
        }
    }while (choice != 0);
}
/*void Print_Main_Menu()
{
    // display the main menu
    cout << endl;
    cout << "--Dataman Main Menu--" << endl;
    cout << "1. Arithmetic" << endl;
    cout << "2. Temperature Conversion" << endl;
    cout << "0. Exit Dataman" << endl;
}
void Print_Temperature_Menu()
{
    // Displaying the tempt. menu
    cout << endl;
    cout << "---Temperature Menu---" << endl;
    cout << "1. Converting Kelvin to Celsius" << endl;
    cout << "2. Converting Celsius to Kelvin" << endl;
    cout << "3. Converting Fahrenheit to Celsius" << endl;
    cout << "4. Converting Celsius to Fahrenheit" << endl;
    cout << "0. Exit to Return to Dataman Main Menu" << endl;
}*/
