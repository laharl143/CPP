#include <iostream>


int main(){
                        //auto is used to automatically assign a type (you can hover to a certain variable what type they are)
	auto var1 {12};     //int
    auto var2 {13.0};   //double
    auto var3 {14.0f};  //flout
    auto var4 {15.0l};  //long
    auto var5 {'e'};    //char
    
    //int modifier suffixes
    auto var6 { 123u}; // unsigned
    auto var7 { 123ul}; //unsigned long
    auto var8 { 123ll}; // long long

    std::cout << "var1 occupies : " << sizeof(var1) << " bytes" << std::endl;
    std::cout << "var2 occupies : " << sizeof(var2) << " bytes" << std::endl;
    std::cout << "var3 occupies : " << sizeof(var3) << " bytes" << std::endl;
    std::cout << "var4 occupies : " << sizeof(var4) << " bytes" << std::endl;
    std::cout << "var5 occupies : " << sizeof(var5) << " bytes" << std::endl;
    std::cout << "var6 occupies : " << sizeof(var6) << " bytes" << std::endl;
    std::cout << "var7 occupies : " << sizeof(var7) << " bytes" << std::endl;
    std::cout << "var8 occupies : " << sizeof(var8) << " bytes" << std::endl;
/**/
    return 0;
}
/*
final output: 
var1 occupies : 4 bytes 
var2 occupies : 8 bytes 
var3 occupies : 4 bytes 
var4 occupies : 16 bytes
var5 occupies : 1 bytes 
var6 occupies : 4 bytes 
var7 occupies : 4 bytes 
var8 occupies : 8 bytes 
*/