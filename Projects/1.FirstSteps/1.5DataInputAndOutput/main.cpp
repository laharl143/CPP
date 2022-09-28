#include <iostream>
#include <string>         //use this if you use a string command

int main(){
    //Print data
    /*
    std::cout << "Hello C++" << std::endl;

    int age{21};
    std::cout << "Age: " << age << std:endl;

    std::cerr << "Error message: Something is wrong!" << std::endl;
    std::clog << "Log message: Something happened" << std::endl;

    
    //Data Input

    //create my variables
    int age1;
    std::string name;

    std::cout << "Please type your name and age: " << std::endl;
    std::cin >> name;
    std::cin >> age1;

    std::cout << "Hello " << name << "!, you are " << age1 << " years old." << std::endl;

    */
    //Data with spaces

    //create my variables
    std::string full_name;
    int age3;

    std::cout << "Please type your name and age: " << std::endl;

    std::getline(std::cin,full_name);          //this line of code is used to input a data with spaces
    // std::cin >> full_name;                  //this line of code doesn't work if your data has spaces
    std::cin >> age3;

    std::cout << "Hello " << full_name << "!, you are " << age3 << " years old." << std::endl;

    return 0;
}