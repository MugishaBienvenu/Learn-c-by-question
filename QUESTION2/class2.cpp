// 3.2 (a) Define a class Exponent to hold a real exponent for an exponentiation operation. Through clever use of
// operator overloading, find a way to have the expression x ** y call std::pow(x, y), where the types of
// x and y are double and Exponent, respectively. In other words, the program listed below when executed
// would output the value 16 (i.e., 24 = 16).

// #include <iostream>
// #include <cmath>
// int main()
// {

// const double x = 2.0;
// const Exponent y = 4.0;
// std::cout << x ** y << "\n";
// }
// (b) Is the preceding use of operator overloading wise? Explain.


//        answer


// a)

 #include <iostream>
 #include <cmath>
 using namespace std;

 class Exponent{

    public:

    double x;
    double y;

    double division(){
        return pow(x,y);

    }

 };

 int main()
 {
    Exponent obj;


   obj.x = 2.0;
    obj.y = 4.0;
     obj.division();


      cout <<obj.division()<<"\n";
 }



//  b) yes because operator are used to perform specific task 