#include <iostream>


int main(){
    
    //create variables
    std::string country;

    //user prompt:
    std::cout << "Where do you live: " << std::endl;

    //user input:
    std::cin >> country;

    //program print:
    std::cout << "I've heard good things about " << country << ". I'd like to go sometime.";

    return 0;
}