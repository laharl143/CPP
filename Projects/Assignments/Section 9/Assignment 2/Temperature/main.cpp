#include <iostream>
#include <cmath>

int main(){
    
    //Data input

    //create my variables
    double celsius;

    std::cout << "Please input a temperature in Celsius:" << std::endl;
    std::cin >> celsius; 

    double fahrenheit = (9.0 / 5 ) * celsius + 32;

    std::cout << std::endl;

    std::cout << celsius << " Celsius is " << fahrenheit << " Fahrenheit" << std::endl;

    return 0;
}


/*
final output: 
Please input a temperature in Celsius:
50.2

50.2 Celsius is 122.36 Fahrenheit
*/