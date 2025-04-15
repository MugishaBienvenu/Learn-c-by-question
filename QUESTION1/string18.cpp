// 2.18 Write a function called strlen that takes a pointer to the first character of a C-style string (i.e., a null-terminated
//     string) and returns an int indicating the number of characters in the string (not counting the terminating null
//     character).

//   answer





#include <iostream>
using namespace std;

void strlen(int c){
cout<<c<<endl;

}

int main(){
    
    string c = "null terminate string";
    int b=c.length();
    int *ptr= &b;
    

strlen(*ptr);


return 0;
}
