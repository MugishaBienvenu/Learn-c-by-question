// 3.15 (a) Consider the class Base shown in the listing below. Derive two classes Derived1 and Derived2 from Base,
// and in each case, define the member function display to output the name of the class.
// class Base {
// public:
// virtual void display()
// {
// std::cout << "Base\n";
// }
// };
// (b) Create an object of each of the types Base, Derived1, and Derived2, and invoke its display member
// function. Create pointers of type Base* that are initialized to point to the preceding Base, Derived1, and
// Derived2 objects, and call display through each of these pointers.


// a)
// #include <iostream>
// using namespace std;


//  class Base {
//  public:

//  virtual void display()
//  {

//  cout << "Base\n";

// }

//  };

//  class Derive1: public Base{

//     virtual void display()
//     {
   
//     cout << "Derive1\n";
   
//     }

//  };

//  class Derive2: public Derive1{

//     virtual void display()
//     {
   
//     cout << "Derive2\n";
   
//     }

//  };


//  b)

#include <iostream>
using namespace std;


 class Base {
 public:
 int var_base;

 virtual void display()
 {

 cout << "Base\n";

}

 };

 class Derive1: public Base{

    virtual void display()
    {
        int var_derive1;
   
    cout << "Derive1\n";
   
    }

 };

 class Derive2: public Derive1{

     void display()
    {
   
        int var_derive2;
    cout << "Derive2\n";
   
    }

 };

 int main(){
    Base* base;

    Derive1 derive;
 
    base= &derive;

 
    return 0;
}
