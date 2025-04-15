// 3.8 (a) Develop a class IntArray2 that represents a two-dimensional array of ints. The class should satisfy the
// following requirements:
// i. A default constructor should be provided that creates an empty (i.e., 0 0) array.
// ii. A constructor should be provided that takes two arguments corresponding to the width and height of
// the array to be created.
// iii. The std::vector class template may be used to store the elements of the array.
// iv. Objects of the class should be movable and copyable.
// v. Member functions should be provided for querying the width, height, and size (i.e., number of ele
// ments) of the array.
// vi. The function call operator should provide access to the (x,y)th element of the array.
// vii. A stream inserter (i.e., <<) should be provided so that an array can be written to an output stream
// (std::ostream).
// viii. A stream extractor (i.e., >>) should be provided so that an array can be read from an input stream
// (std::istream).
// ix. All data members should be private.
// (b) Write a program that thoroughly tests the IntArray2 class.


#include <iostream>
using namespace std;

class IntArray2{
    public:

    int x;
    int y;

    IntArray2(int x, int y){
       x=x=3;
       y=y=5;

    }

    double operate(int x, int y)
    {
        return x*y;

    }
};

std::ostream& operator<<( std::ostream& out, int x  );
std::istream& operator>>(std::istream & in, int y);

int main (){
    IntArray2 arr{3,5};
    arr.operate(3,5);
    cout<<arr.operate(3,5)<<endl;
}

