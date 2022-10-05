#include <iostream>
#include <iomanip>

int main(){
    //Declare and initialize the variables
    float number1 {1.12345678901234567890f}; // Precision : 7   //f in the ending interprets it is a float
    double number2 {1.12345678901234567890}; // Precision : 15  //double doesn't need any interpretation at the end
    long double number3  {1.12345678901234567890L};             //L in the end is for the interpretation of long
    
    //Print out the sizes
    std::cout << "sizeof float : " << sizeof(float) << std::endl;
    std::cout << "sizeof double : " << sizeof(double) << std::endl;
    std::cout << "sizeof long double : " << sizeof(long double) << std::endl;


    //Precision
    std::cout << std::setprecision(20); // Control the precision from std::cout.
    std::cout << "number1 is : " << number1 << std::endl; //7 digits
    std::cout << "number2 is : " << number2 << std::endl; // 15'ish digits
    std::cout << "number3 is : " << number3 << std::endl; // 15+ digits


    //Float problems : The precision is usually too limited
    //for a lot of applications
    float number4 = 192400023.0f;               // Error : narrowing conversion

    std::cout << "number4 : " << number4 << std::endl;


    //Scientific notation
    //What we have seen so far in terms of floating point types
    //is fixed notation. There is another notation, scientific
    //that is handy if you have really huge numbers or small numbers
    //to represent

    std::cout << "-------------------------" << std::endl;
    
    double number5 {192400023};
    double number6 {1.92400023e8};
    double number7 {1.924e8};           // Can omit the lower 00023
                                        // for simplicity if our application allows that.
    double number8 {0.00000000003498};
    double number9 {3.498e-11}; // multiply with 10 exp(-11)
    
    std::cout << "number5 is : " << number5 << std::endl;
    std::cout << "number6 is : " << number6 << std::endl;
    std::cout << "number7 is : " << number7 << std::endl;
    std::cout << "number8 is : " << number8 << std::endl;
    std::cout << "number9 is : " << number9 << std::endl;



    //Infinity and Nan
    std::cout << std::endl;
    std::cout << "Infinity and NaN" << std::endl;
    
    double number10{ 5.6 };        //if this is negative, it will result in -inf | if this is positive, it will result in +inf
    double number11{};//Initialized to 0
    double number12{};  //Initialized to 0
    double number13{ -5.6 };

    //Positive Input / 0 = Positive Infinity(inf)
    double result { number10 / number11 };

    std::cout << number10 << "/" << number11 << "  yields " << result << std::endl;

    //Positive infinity + Positive input = Positive Infinity(inf)
    std::cout << result << " + " << number10 << " yields " << result + number10 << std::endl;
    
    // 0 / 0 = nan
    result = number11 / number12;
    std::cout << number11 << "/" << number12 << " = " << result << std::endl;

    //Negative Input / 0 = Negative Infinity(-inf)
    double result1 { number13 / number11 };
    std::cout << number13 << "/" << number11 << "  yields " << result1 << std::endl;
/*
*/
    return 0;
}


/*
final output: 
sizeof float : 4
sizeof double : 8
sizeof long double : 16
number1 is : 1.1234568357467651367
number2 is : 1.1234567890123456912
number3 is : 1.1234567890123456789
number4 : 192400016
-------------------------
number5 is : 192400023
number6 is : 192400023
number7 is : 192400000
number8 is : 3.4979999999999998372e-11
number9 is : 3.4979999999999998372e-11

Infinity and NaN
5.5999999999999996447/0  yields inf
inf + 5.5999999999999996447 yields inf
0/0 = nan
-5.5999999999999996447/0  yields -inf
*/