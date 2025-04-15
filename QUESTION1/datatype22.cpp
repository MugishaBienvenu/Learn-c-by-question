// 2.22 Write a program to output the smallest and largest values of the following types: char, short, int, long,
//  long long, float, double, long double, and unsigned int. (Hint: Use std::numeric_limits.)




#include <iostream>
#include <limits>
using namespace std;

template<typename T>
void printMinMax(const char* type)
{
    cout << type;
    cout << ", smallest value: " << numeric_limits<T>::min();
    cout << ", largest value : " << numeric_limits<T>::max() << endl;
}
template<typename T>
void printCharMinMax(const char* type)
{
    cout << type;
    cout << ", smallest value: " << (int) numeric_limits<T>::min();
    cout << ", largest value : " << (int) numeric_limits<T>::max() << endl;
}
int main(){

    printCharMinMax<char>("char");
    printCharMinMax<short>("short");
    printCharMinMax<int>("int");
    printCharMinMax<long>("long");
    printCharMinMax<long long>("long long");
    printCharMinMax<float>("float");
    printCharMinMax<double>("double");
    printCharMinMax<unsigned int>("unsigned int");
    printCharMinMax<long double>("long double");

}