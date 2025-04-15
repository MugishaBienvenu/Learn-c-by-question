// 2.21 Write a program that outputs the lowercase letters (i.e., a to z) and decimal digits (i.e., 0 to 9) and their corre
// sponding integer values. (Note: The C++ language standard does not require that lower case letters be numbered
//  consecutively. The decimal digits, however, must be numbered consecutively.)


//   about letter
#include <iostream>
using namespace std;


int main(){

char letter;

cout<<"enter lower case  letter you want "<<endl;
cin>>letter;
if( letter == 'A'){
    cout<<"incorrect letter";
}

}

//  about number


#include <iostream>
using namespace std;


int main(){

int number;

cout<<"enter number you want ";
cin>>number;
if( number%2==0){
    cout<<"successfully";
}

}