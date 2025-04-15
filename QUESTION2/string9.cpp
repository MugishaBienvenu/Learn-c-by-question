// 3.9 (a) Develop a class String that represents a sequence of zero or more characters (i.e., a character string). Any
// character may appear in the string, including the null character (i.e., ’\0’). The class should satisfy the
// following requirements:
// i. A default constructor should be provided that creates an empty string.
// ii. A constructor should be provided that takes a pointer to a null-terminated string as an argument to
// which to initialize the object to be created.
// iii. The std::vector class template may be used to store the underlying string data.
// iv. Objects of the class must be movable and copyable.
// v. The operators += and + should perform string concatenation.
// vi. The subscripting operator (i.e., []) should allow access to an indivdual character in the string.
// vii. A stream inserter (i.e., <<) should be provided so that strings can be written to an output stream
// (std::ostream).
// viii. Astream extractor (i.e., >>) should be provided so that strings can be read from an input stream
//  (std::istream).
//  ix. The member functionc_str should return a pointer to a null-terminated string corresponding the
//  current value of the String object.More specifically,the null-terminated string should be equivalent
//  to the contents of the String object with a null character appended.
//  x. The member function size should return the number of characters in the string.
//  (b)Write a program that thoroughly tests the String class.
//  (c)Also,test your String class with the program below.

//  1 #include<iostream>
//  2
//  3 //Replace the following line with your code.
//  4 #include"String.cpp"
//  5
//  6 intmain()
//  7 {
//  8 constStringhello("Hello");
//  9 constStringworld("World");
//  10
//  11 Strings=hello+String("");
//  12 s+=world;
//  13 std::cout<<s<<"\n";
//  14 }



//  answer 


#include <iostream>
#include <string>
using namespace std;

class String{
    public:
    string x;

    String(string a="\0"){
        x=a;
    }

    string c_str(string a){
        return a;

    }
};





