// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>
int a, b = 5;
int main(){
    bool myflag;
    a = 7;
    myflag = false;
    std::cout <<"a = " << a << std::endl;
    std::cout <<"b = " << b << std::endl;
    std::cout <<"flag = " << myflag << std::endl; 
    myflag = true;
    std::cout <<"a+b = " << a+b << std::endl;
    std::cout <<"b-a = " << b-a << std::endl;
    std::cout <<"flag = " << myflag << std::endl;
    unsigned int m;
    m = b - a;
    std::cout << "b - a (unsigned) = " << m << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
