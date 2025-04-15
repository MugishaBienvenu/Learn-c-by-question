// 3.14 State the output of the program whose source code is given below. Explain why this output is obtained.

#include <iostream>
using namespace std;


auto f = [](auto x)
{
static int c = 0;
return (++c) + x;
};


int main()
{

cout << f(1) << '\n';
cout << f(0.5) << '\n';
cout << f(1) << '\n';
cout << f(0.5) << '\n';
}




//  answer



// 2
// 1.5
// 3
// 2.5