// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b = 5;
//avoid global variables
int main(){
    bool my_flag;
    a = 7;
    my_flag = false;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "flag = " << my_flag << std::endl;
    // a=7 (local variable), b=5 (global variable) y flag=0
    
    //cambio el valor de mi variable
    my_flag = true;
    std::cout << "flag = " << my_flag << std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "b - a = " << b - a << std::endl;
    //flag=1, a+b=12, b-a=-2

    //unsigned variable that stores a negative number
    unsigned int positive;
    positive = b - a;
    std::cout << "b - a (unsigned) = " << positive << std::endl;
    //b-a(unsigned)=4294967294 --> -2 pero en binario. same binary number, different interpretation of it
    
    std::cout << std::endl << std::endl;
    return 0;
}
