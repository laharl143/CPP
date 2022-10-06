#include <iostream>


int main(){
    
    //variables
    double length;
    double width;
    double height;

    std::cout << "Welcome to box calculator. Please type in length, width and height information:" << std::endl;

    //length
    std::cout << "length: ";
    std::cin >> length;

    //width
    std::cout << "width: ";
    std::cin >> width;

    //height
    std::cout << "height: ";
    std::cin >> height;

    //base area operation
    double base_area = width * length;

    //volume operation
    double volume = base_area * height ;

    std::cout << "The base area: " << base_area << std::endl;
    std::cout << "The volume is: " << volume << std::endl;


    return 0;
}


/*
final output: 
Welcome to box calculator. Please type in length, width and height information:
length: 10
width: 20
height: 3
The base area: 200
The volume is: 600
*/