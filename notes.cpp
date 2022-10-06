/*
How to setup C++ in vscode

  Step 1: open Developer PowerShell for VScode 2022
  Step 2: type >code . 
  Step 3: *VS Code opens*
  Step 4: New terminal
  Step 5: Type in terminal >cl.exe  to check if no errors

//////////////////////////////////////////
How to compile main.cpp in C
  Step 1: make sure to have a main.cpp
  Step 2: go to terminal tab then click on "configure tasks"
  Step 3: then edit tasks.json "args" to this:
            "args": [
  				"-g",
  				"-std=c++20",
  				"${workspaceFolder}\\*.cpp",
  				"-o",
  				"${fileDirname}\\rooster.exe"
  			],
  Step 4: Make sure to click on the main.cpp then go to terminal tab and click "run build task" to compile it 
  Step 5: you will see the rooster.exe being generated. 

//////////////////////////////////////////
How to run the compiled file 

  Step 1: on the terminal tab, click on "new terminal"
  Step 2: write in the terminal > .\rooster.exe


//////////////////////////////////////////
How to configure to C++ 20
  Step 1: on the view tab, click on "command palette"
  Step 2: then click on "c/c++:Edit configurations((UI)"
  Step 3: scroll down to the lowest part and choose C++20 

//////////////////////////////////////////
How to check if all the compilers are ready to use
  Step 1: Open terminal
  Step 2: type "cl.exe", "g++ --version", "clang++ --version"
  Step 3: if no errors, you are good to go


//////////////////////////////////////////
std::cout       //Printing data to the console(terminal)
Ex. std::cout << "Hello World!" << std:endl;             //<< means <<------------

std::cin        //Reading data from the terminal
Ex. std::cout << "What is your name?" << std::endl;
    std::cin >> name;                                    //>> means ------------>>

std::cerr       //Printing errors to the console
Ex. std::cout << "std::cerr output: Something went wrong" << std:endl;

std::clog       //Printing log messages to the console
Ex. std::clog << "std::clog output: This is a log message" << std:endl;

//////////////////////////////////////////
Number systems:

    int number1 = 15; //decimal
    int number2 = 017; //octal
    int number3 = 0x0f; //hexadecimal
    int number4 = 0b00001111; //binary


//////////////////////////////////////////
Decimals and integers:

Brace initialization:  {}   //using curly braces

#Format: typename variable_name {initializer_value};

    int elephant_count; //random garbage value
    int lion_count{};   //initializes to 0
    int dog_count{10};    //initializes to 10   
    int cat_count{15};    //initializes to 15
    int domesticated_animals { dog_count + cat_count };     //can use expression as initializer 

Functional initialization: ()   //using parentheses
    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count + orange_count);

Assignment initialization: =    //using equals
    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;

//////////////////////////////////////////
Integer Modifiers

signed int // lets you assign positive and negative integers
unsigned int // lets you assign only positive integers

//////////////////////////////////////////
Fractional numbers

-float number1 {1.12345678901234567890f}; // Precision : 7   //f in the ending interprets it is a float
-double number2 {1.12345678901234567890}; // Precision : 15  //double doesn't need any interpretation at the end
-long double number3  {1.12345678901234567890L};             //L in the end is for the interpretation of long

sizeof Short variable : 2 bytes   
sizeof Short Int : 2 bytes
sizeof int : 4 bytes
sizeof float : 4 bytes
sizeof long int : 4 bytes
sizeof double : 8 bytes
sizeof Long long : 8 bytes
sizeof long double : 16 bytes    

//////////////////////////////////////////
Boolean

bool red_light {false};
bool green_light{true};
    
    if(red_light == true){
        std::cout << "Stop!" << std::endl;
    }else{
        std::cout << "Go through!" << std::endl;
    }

    if(green_light){
        std::cout << "The light is green!" << std::endl;
    }else{
        std::cout << "The light is NOT green!" << std::endl;
    }
sizeof(bool) : 1

std::cout << std::boolalpha;   //this is a special setting to print "true or false"

//////////////////////////////////////////
Characters and Text

char value = 65 ; // ASCII character code for 'A'
    std::cout << "value : " << value << std::endl; // A
    std::cout << "value(int) : " << static_cast<int>(value) << std::endl;       //this is used to (static cast)convert from ASCII character to int

final output: 
a
r
r
o
w

value : A
value(int) : 65

//////////////////////////////////////////
Auto
    //auto is used to automatically assign a type (you can hover to a certain variable what type they are)
	auto var1 {12};     //int
    auto var2 {13.0};   //double
    auto var3 {14.0f};  //flout
    auto var4 {15.0l};  //long
    auto var5 {'e'};    //char

//////////////////////////////////////////
Assignment
    int var1{123};          // Declare and initialize
    std::cout << "var1 : "  << var1 << std::endl;
    var1 = 55;              // Assign   ; to assign a new value to a variable
    std::cout << "var1 : "  << var1 << std::endl;

final output: 
var1 : 123
var1 : 55


////////////////////////////////////////////////////////////////////////////////////
section 3: Operations On Data

//////////////////////////////////////////
Basic Operations
Addition:
int sum { number1 + number 2 };
int other_sum = number1 + number2 + number3;

Subtraction:
int diff { number1 - number 2 };
int other_diff = number1 - number2 - number3;

Multiplication:
int product { number1 * number 2 };
int other_product = number1 * 2 * number3;

Division:
int quotient { number1 / number 2 };
int other_quotient = number1 / 17 ;

Modulus:
//getting the remainder

//////////////////////////////////////////
Precedence and Associativity
-as much as possible use () in your operations to be specific. dont rely too much on the precedence table

precedence table (https://en.cppreference.com/w/cpp/language/operator_precedence)
//////////////////////////////////////////
Increment and Decrement

!!Prefix and postfix operators can only increment by one

Increment:
int value { 5 };   //5
value = value + 1; //6

Postfix Increment:
value = 5;  //5
std::cout << "The value is (prefix++) : " << ++value << std::endl; // 6

Decrement:
int value { 5 };   //5
value = value - 1; //4

Postfix Decrement:
value = 5;  //5
--value;
std::cout << "The value is (prefix--) : " << --value << std::endl; // 6

//////////////////////////////////////////
Compound Assignment Operators      //this is used to operate a certain value to an int

int value {45};

value += 5; //50
value -=5;  //45
value *=2;  //90
value /= 3; //30
value %= 11; //8

//////////////////////////////////////////
Relational Operators

int number1 {45};
int number2 {65};

(number1 < number2)     //true
(number1 <= number2)    //true
(number1 > number2)     //false
(number1 >= number2)    //false
(number1 == number2)    //false
(number1 != number2)    //true

//////////////////////////////////////////
Logical Operators

|| = OR        //the condition is true if atleast one input is true
&& = AND       //the condition is ONLY true if ALL of the input is true
!a = NOT       //the opposite of the boolean

//////////////////////////////////////////
Output Formatting 
(please go to section ../3.OperationsOnData/3.8OutputFormatting/main.cpp)
(online reference:) https://en.cppreference.com/w/cpp/io/manip

you need to use "#include <iomanip>" library to activate most of these

std::endl   //places a new line character on the output stream.
\n          //like in JAVA, it creates a new line

std::flush  //flushes the output buffer to its final destination.

std::setw() //Adjusts the field with for the item about to be printed. 

Justify:
std::right  //this is the default justify
std::left  //this is used to justify the values to the left
std::internal   //sign is left justified , data is right justified

std::setfill('*') //fill empty spaces with your choice

std::boolalpha   //control bool output format : true/false
std::noboolalpha //control bool output format : 1/0 

std::showpos   // show the +  sign for positive numbers
std::noshowpos // hide the +  sign for positive numbers

std::dec    //show it in decimal formal
std::hex    //show it in hexadecimal formal
std::oct    //show it in octal formal

std::uppercase  //manipulates values to uppercase
std::nouppercase    //manipulates values to no uppercase

std::fixed      //show decimal places up to 6digits
std::scientific //show value in in scientific notation

std::setprecision(20) // the number of digits(including whole number and decimal) printed out for a floating point. Default is 6

std::noshowpoint  //this is the default format
std::showpoint    //this used to forcefully show the decimals except in int

//////////////////////////////////////////
Numeric Limits  

The range for short is from -32768 to 32767    
The range for unsigned short is from 0 to 65535
The range for int is from -2147483648 to 2147483647
The range for unsigned int is from 0 to 4294967295
The range for long is from -2147483648 to 2147483647
The range for float is from 1.17549e-38 to 3.40282e+38
The range(with lowest) for float is from -3.40282e+38 to 3.40282e+38
The range(with lowest) for double is from -1.79769e+308 to 1.79769e+308
The range(with lowest) for long double is from -1.18973e+4932 to 1.18973e+4932
int is signed : 1
int digits : 31


//////////////////////////////////////////
Math Functions     (please go to section ../3.OperationsOnData/3.10.MathFunctions/main.cpp)
(online reference): https://en.cppreference.com/w/cpp/header/cmath
you need to use "#include <cmath>" library to activate these

double weight { 7.7 };


std::floor(weight)
    Weight rounded to floor is : 7
std::ceil(weight)    
    Weight rounded to ceil is : 8 

#Absolute value:
std::abs(weight)
    Abs of weight is : 7.7

double savings {-5000};
std::abs(savings)
    Abs of savings is : 5000

std::exp(10);   //exp : f(x) = e ^ x , where e = 2.71828 .
    The exponential of 10 is : 22026.5

std::pow(3,4)
    3 ^ 4 is : 81
std::pow(9,3)
    9^3 is : 729

//log : reverse function of pow. if 2^3 = 8 , log 8 in base 2 = 3.  Log is like asking to which exponent should we elevate 2 to get eight ? Log, by default computes the log
std::log(54.59)
    Log ; to get 54.59, you would elevate e to the power of : 3.99985

std::log10(10000)
    To get 10000, you'd need to elevate 10 to the power of : 4

std::sqrt(81)
    The square root of 81 is : 9

std::round(3.654)
    3.654 rounded to : 4
std::round(2.5)
    2.5 is rounded to : 3
std::round(2.4)
    2.4 is rounded to : 2


//////////////////////////////////////////
Weird Integral Types








*/