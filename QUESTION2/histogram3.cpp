// 3.3 (a) Develop a class Histogram for performing histogram calculations (i.e., counting how many values fall in
//     each of a number of intervals). The class should satisfy the following requirements:
//     i. A constructor should be provided that takes a single argument specifying a std::vector of doubles
//  containing the bounds of the histogram bins. The elements of the std::vector must be strictly mono
// tonically increasing. For example, invoking the constructor with the argument
//  std::vector<double>{0.0, 3.14, 20.0, 42.42}
//  would create a histogram with three bins, corresponding to the intervals [0314), [31420), and
//  [204242).
//  ii. A member function clear should be provided that clears the histogram statistics.
//  iii. A member function update should be provided that takes a new data value to be added to the histogram
//  statistics. This function should be able to handle out-of-range data in some appropriate manner.
//  iv. A member function display should be provided that outputs the contents of the histogram to a given
//  output stream (i.e., std::ostream) in some human-readable format.
//  v. The class should not be default constructable (i.e., no default constructor should be provided).
//  vi. The class should provide move and copy constructors, move and copy assignment operators, and a
//  destructor.
//  vii. All data members should be private.
//  (b) Write a program to thoroughly test your Histogram class.

// a)

#include <iostream>
#include <vector>
using namespace std;

class Histogram{
        public:
        double x;

        double calculation(){
            return x;

        }


};

int main() {
    Histogram histogram;
    histogram.calculation();

    vector<char> v = {0, 3, 20, 42};
	for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    return 0;
}








// b)


#include <vector>
using namespace std;

class Histogram{
        public:
        double x;

        double calculation(){
            return x;

        }


};

int main() {
    Histogram histogram;
    histogram.calculation();
  	for (int x = 0; x < 10; x++)
        cout << x<< " ";
        cout<<histogram.calculation();

    return 0;
}