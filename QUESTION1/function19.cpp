// 2.19 Write a function called swap that exchanges the values of two int objects, such that the two objects to be
//  exchanged are passed to the function using:
//  (a) two pointers to int objects
//  (b) two references to int objects
//  Which of these two approaches is preferable? Explain your answer.


//   answer

#include <iostream>
using namespace std;
//  pointer parameter
void swap(int* n1, int* n2) {
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

//  references
void swap(int& n1, int& n2){
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}


int main() {

    int a = 1, b = 2;

    swap(&a, &b);

    cout << " swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}


// for this answer variable temp are popular used to swap number between two variable example n1,n2
// take data of n1 and store it then n1 take data of n2 and store it then n2 take data of temp
//  for purpose to exchange data  variable temp is  temporary variable

