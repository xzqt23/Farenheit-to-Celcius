#include <iostream>

int main() 
{
    double Celcius;
    double Farenheit;

    std::cout<< "Please enter temperature in Farenheit:";
    std::cin>> Farenheit;

    Celcius = (Farenheit-32) / 1.8;
    std::cout<< "The temperature in Celcius is: "<<Celcius;

    return 0;
}