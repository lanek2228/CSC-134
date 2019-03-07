using namespace std;

#include <iostream>

float convertKtoC(float number)
{
    float Celsius = number - 273.15;
    // return the new C value
    return Celsius;
}
float convertCtoK(float number)
{
    float Kelvin = number + 273.15;
    // return the new K value
    return Kelvin;
}
float convertCtoF(float number)
{
    float Fahrenheit = (number * 1.8) + 32;
    // returns the new F value
    return Fahrenheit;
}
float convertFtoC(float number)
{
    float Celsius = (number - 32) / 1.8;
    // returns the new C value
    return Celsius;
}
