// 2.16 Write aprogram that prints to standard output the size and alignment of each 
// of following types :int,long,
// float,and double.The program should also print similar information for the 
// type corresponding to a pointer
//  to each of these types.


//   answer


//   about pointer



// int a; int* p=&a;
// long b; long* p=&b;

// float a; float* p=&a;
// double b; double* p=&b;

#include <iostream>
using namespace std;


int main(){
    cout<< "size of integer is : "<<sizeof(int)<<endl;
    cout<< "size of long is : "<<sizeof(long)<<endl;
    cout<< "size of float is : "<<sizeof(float)<<endl;
    cout<< "size of double is : "<<sizeof(double);
    
    


}