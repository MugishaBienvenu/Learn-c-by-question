#include <iostream>
using namespace std;

class Constructor{
    public:
    string fname;
    string sname;
    int moth;
    Constructor( string a,string b, int c){
          fname= a;
          sname= b;
          moth =c;

    }
};

int main (){
 Constructor name("mugisha","colode",123);
 cout<<name.fname<<" "<<name.sname<<" "<<name.moth<<endl;
 

}