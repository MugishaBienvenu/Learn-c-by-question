// 2.34 An include guard is a construct used to avoid the potential problems caused by multiple inclusion of header
// files resulting from the use of the #include directive. There are two types of include guards: internal and
// external. An external include guard performs a test outside the header file it is guarding and includes it only
// once per compilation. An internal include guard performs a test inside the header file it is guarding. Write a
// simple program using a single header file with an internal include guard. Modify the code to use an external
// include guard. Discuss the advantages and disadvantages of each of these two approaches.


//  answer


#include <iostream>
#include "parent.h"
#include "grandparent.h"

using namespace std;


struct poo{
    int numbers;
};


struct poo{
    int numbers;
};


// #include guards:  is a way to avoid the problem of double inclusion when dealing with the include directive


//   advantage  of include guard 
    // it's give file appear multiple times
    // it cannot be diplucated in translation unit
 
 
//  disdvantage

     //can cause compilation errror
    //it is complex to understandard 
    