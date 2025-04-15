// 2.31 Write your own implementation of the strlen function from the standard library. To avoid naming conflicts,
// place your strlen function in the namespace mine. Write a program that reads a line of text from standard input
// and then prints the length of the line of text (in characters) using your strlen function and also the one from
// the standard library. (Of course, both functions should yield the same answer.)


// answer

#include <iostream>
using namespace std;

void strlen(int n){
    cout<<n<<" ";

}

int main(){
    string text="hello my family";
    int number=text.length();
    cout<<number;
}