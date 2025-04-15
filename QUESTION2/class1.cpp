// 3.1 Develop a class Counter that represents a simple integer counter. The class should satisfy the following require
// ments:
//  (a) A constructor should be provided that takes a single int argument that is used to initialize the counter
//  value. The argument should default to zero.
//  (b) The prefix increment and postfix increment operators should be overloaded in order to provide a means
//  by which to increment the counter value.
//  (c) A member function getValue should be provided that returns the current counter value.
//  In addition, the class must track how many Counter objects are currently in existence. A means for querying
//  this count should be provided. The code must not use any global variables. (Hint: Use static members.)



//   answer 

#include<iostream>
using namespace std;


class Counter {
public: 
    int number;
    int  getValue() {
        return number*number;
    }
    
};

int main() {
    Counter obj;
    
    obj.number = 5;
    cout << "number is: " << obj.number << "\n";
    cout << "number*number is: " << obj.getValue();
    
    return 0;
}

