// Complete Guide to C++ Programming Foundations
// Exercise 04_07
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <complex>

int main(){

    std::vector<std::complex<double>> points;
    points.push_back(std::complex<double>(3.5,2.5));
    points.push_back(std::complex<double>(0.5,6.7));
    points.push_back(std::complex<double>(-9.0,-7.7));
    points.push_back(std::complex<double>(1.1,-4.5));

    std::cout << points.begin()->real() <<std::endl;
    std::cout << next(points.begin(),1)->imag() <<std::endl;
    std::cout << prev(points.end(),2)->real() <<std::endl;
    std::cout << (points.end()-1)->imag() <<std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
