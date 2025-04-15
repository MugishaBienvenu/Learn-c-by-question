// 3.11 (a)Develop a class Quadraticthat represents a functionof the form f(x)=ax2+bx+c,where x is a real
// variable and a b c a rereal constants.The class must satisfy the following requirements:
// i. Aconstructor should be provided that takes the values for a,b,andc(from above)as arguments.All
// three of these arguments should default to zero.
// ii. The class should provide move and copy constructors,move and copy assignment operators,and a
//  destructor.
// iii. The function call operator(i.e.,operator())should be provided. It should take a single argument x
// and return the value f(x).
// iv. All data members should be private.
// (b)Write a program to thoroughly test your Quadratic class.
// (c) Test your Quadratic class with the code below.   
//  #include<iostream>
// 
//  intmain()
//  {
//  const Quadratic f(1.0,2.0,3.0);
//  const Quadratic g=f;
//  std::cout<<f(1.0)<<""<<g(1.0)<<"\n";
//  }


//  answer


#include <iostream>
#include <cmath>
using namespace std;

class Quadratic {

  private:
   double a;
   double b;
   double c;
  double x;
  public:
    Quadratic(double a1=0, double b2=0,double c1=0){
     a=a1;
     b=b2;
     c=c1;
     calc_quadratic();
    }
      

    double quadratic_sqrt(){
        return (b*b)-4*a*c;
      }
    
      void calc_quadratic(){

        double delta = quadratic_sqrt();
        if(delta >0){
            double x1= (-b + std::sqrt(delta))/ (2*a);
            cout<<" x1 is: "<< x1<<endl;

        }
        else if(delta >0){
          double x2= (-b - std::sqrt(delta))/ (2*a);
          cout<<" x2 is: "<< x2<<endl;


        }
        else {
          cout<<" x1 and x2 are not display it  because  delta is negative ";
        }
      }
};

 int main()
 {
 Quadratic f(1,4.0,3.0);
 const Quadratic g=f;
 cout<<f.quadratic_sqrt();
 




 return 0;
 }
