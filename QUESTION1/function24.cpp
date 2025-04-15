// 2.24 (a) Write a function str_to_int that converts a C-style string representing a signed integer (i.e., a string
//     consisting of a possible plus or minus sign followed by one or more digits) to its corresponding numeric
//     value. The function should take a single parameter that is a pointer to the C-style string of digits and return
//     an int. If the string is not formatted correctly, the value zero should be returned.
//     (b) Write a program to test the str_to_int function. Also, test the str_to_int function with the program
//     below.
//     #include <iostream>
//     // Place the code for the str_to_int function here.
//     int main()
//     {
//     const char s[] = "123";
//     std::cout << str_to_int(s) << "\n";
//     }


//   answer

// a)

#include <iostream>
#include <string>
using namespace std;

void sign(int n){
    if(n == 0){
        return;
    }
   
    cout<<n<<endl;
}

int main(){
    string str = "123"; 
    int num = stoi(str); 
    cout<<num;


    sign(num);
}



// b)

#include <iostream>
   // Place the code for the str_to_int function here.
   void str(int n){
    if(n == 0)
    return ;
   }
   int main()
   {
   const char s[] = "123";
   std::cout << std::stoi(s) << "\n";
   str(std::stoi(s));
   return 0;
   }
