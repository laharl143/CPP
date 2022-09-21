#include <iostream>

consteval int get_value(){
    return 3;
}

int main(){
    constexpr int value = get_value();
    std::cout << "value : " << value << std::endl;
    return 0;
}


/*
Notes:
A statement is a basic unit of computation in a C++ program
Every C++ program is a collection of statements organized in a certain way to achieve some goal
Statements end with a semicolon in C++ (;)

*/