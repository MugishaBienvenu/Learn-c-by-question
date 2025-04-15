// 2.27 Consider the following types: i) a function taking arguments of type pointer to char and lvalue reference to
// intandreturning no value; ii) a pointer to a function of the type in (i); iii) a function taking a pointer of the type
// in (ii) as an argument and returning no value; and iv) a function taking no arguments and returning a pointer
// to a function of the type in (iii). Write a declaration for each of the preceding types. Write the definition of a
// function func that takes as an argument a pointer to a function of the type in (iv) and returns its argument as the
// return value (without any type conversion).


//  answer



#include <iostream>
using namespace std;

void agr(char a,char b){
    cout<<a<<b;
}

void agrptr(char* a,char* b){
    cout<<a<<b;
}


void func(char* a,char* b){
    return ;
}
