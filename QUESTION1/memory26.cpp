// 2.26 (a) Write a function copy_ints that copies a specified number of ints from one area of memory to another.
// The function should have a void return type and take the following parameters: 1) a pointer specifying
// the start of the source area for the copy operation; 2) an integral type specifiying how many ints to copy;
// and 3) a pointer specifying the start of the destination area for the copy operation.
// (b) Write a program to test the copy_ints function. Also, test the function with the program below.

// #include <iostream>
// #include <cassert>
// // Place the code for the copy_ints function here.
// int main()
// {

// const int src[4] = {1, 2, 3, 4};
// int dst[4] = {0, 0, 0, 0};
// copy_ints(src, 4, dst);
// assert(!memcmp(src, dst, sizeof(src)));
// }

// answer



//  a)
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>number={1,2,3,4,5,6,7};
    vector<int>copiedNumber(6);
    copy(number.begin(),number.end(),copiedNumber.begin());
    for(int number: copiedNumber)
    cout<<number<<" ";

    return 0;


}

// b)

 #include <iostream>
 #include <cassert>
 #include <vector>
using namespace std;
 // Place the code for the copy_ints function here.
 int main()
 {

 vector <int> src= {1, 2, 3, 4};
 vector<int>copiedsrc(4);
 vector<int>*dst=&src;

 copy(src.begin(),src.end() ,copiedsrc.begin());
  for(int src:copiedsrc)
  cout<<src ;
  
  
 }

