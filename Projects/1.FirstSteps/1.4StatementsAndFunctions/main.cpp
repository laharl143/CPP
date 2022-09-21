#include <iostream>

int addNumbers (int first_param, int second_param){     
    
    int result = first_param + second_param;   //result here is a variable ; and store first_param + second_param to the result variable
    return result;                             //return the result to addNumbers

    };

int main(){

    int first_number {3}; //statement   //this is used to store variables
    int second_number {7}; // 

    std::cout << "First number is: " << first_number << std::endl;  //3
    std::cout << "Second number is: " << second_number << std::endl; //7

    int sum = first_number + second_number;
    std::cout << "The sum is: " << sum << std::endl;  //10

    sum = addNumbers(25,7);
    std::cout << "The sum is: " << sum << std::endl;  //32

    return 0;
}


/*
Notes:
-A statement is a basic unit of computation in a C++ program
-Every C++ program is a collection of statements organized in a certain way to achieve some goal
-Statements end with a semicolon in C++ (;)
-Statements are executed from top to bottom when the program is run
-Execution keeps going until there is a statement causing the program to terminate, or run another sequence of statements

-a function must be defined before it's used

*/