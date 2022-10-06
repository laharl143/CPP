#include <iostream>



int main(){
    
    //Addition
    int number1{2};
    int number2{7};
    
    int result = number1 + number2;
    std::cout << "result: " << result << std::endl;
   

    //Subtraction
    result = number2 - number1;
    std::cout << "result: " << result << std::endl;

    result = number1 - number2;         //trying a negative answer
    std::cout << "result: " << result << std::endl;

    //Multiplication
    result = number2 * number1;
    std::cout << "result: " << result << std::endl;

    //Division
    result = number2 / number1;
    std::cout << "result: " << result << std::endl; //3 because 7/2 = 3.5 ; int slice off the decimal

    //Modulus
    result = number2 % number1;
    std::cout << "result: " << result << std::endl;

     return 0;
}


/*
final output: 
result: 9
result: 5
result: -5
result: 14
result: 3
result: 1
*/