// 2.32 What is either erroneous or potentially problematic with each of the following preprocessor macro definitions?
//  (a) #define multiply(x, y) x * y
//  (b) #define maximum(x, y) x > y ? x : y
//  (c) #define factorial(x) ((x) * factorial((x)- 1))


//  answer


//  there is no problem or error because #define is not datatype or variable
//  used to declare value in c++ but it is preprocssor or macro definiton
// it run before compiler run code

// example
#include <iostream>
#define PI 3.1415

#define area(r) (PI * r * r)

using namespace std;

int main() {
    
    double radius = 2.5;

    
    cout << "Area = " <<area(radius);
    
    return 0;
}