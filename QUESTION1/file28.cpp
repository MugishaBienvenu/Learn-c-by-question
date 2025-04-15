// 2.28 Develop a program that writes the contents of one or more files in succession to standard output. (That is, the
//     program writes the concatenation of a number of files to standard output.) The sequence of files to be processed
//     should be specified as command-line arguments (i.e., via the arguments passed to the main function).




#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream fs;
    fs.open("e:/data.txt", ios::out);

    if(fs.is_open()==0)
    {
        cout<<"Cannot open file";
    }

    return 0;
}