// 2.25 (a) Write a function str_concat that takes two C-style strings as parameters and returns the concatenation of
// these two strings as a C-style string. Use new to obtain the memory to hold the concatenated string.
// (b) The interface provided by the str_concat function has an important shortcoming that is likely to lead bugs
// in practice. Identify this shortcoming and the type of bug that is likely to arise.

//  answer

// a)

   #include <iostream>
   using namespace std;

   void str(string a,string b){
     cout<<a<<b;
   }

   int main(){
    string a;
    string b;
    string c= a +b;
    cout<<c;

    str("mugisha"," jean bienvenu");
   }


//    b)logics bug,functional bug,system level intergration bug



