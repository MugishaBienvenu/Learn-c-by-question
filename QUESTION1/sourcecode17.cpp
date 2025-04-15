// 2.17 Consider the execution of the program whose source listing is given below. For
// each line of the source code
// marked by a comment/*??? */indicate the value of the objects x,y,andz, after 
// the line of code completes execution.
// 1 int main()
// 2 {
// 3 int x=0;
// 4 int y=1;
// 5 int& z=x;/* ??? */
// 6 x= y; /* ??? */
// 7 y= z+1;/* ??? */
// 8 ++z; /* ??? */
// 9 }
#include <iostream>
using namespace std;


 int main()
 {
 int x=0;
 int y=1;
 int& z=x;/* ??? */
 if(x= y) /* ??? */
 cout<< (y = z+1);/* ??? */
 ++z; /* ??? */
 }