// 2.23 Consider a dataset that consists of a sequence of records, where each record consists of the following two fields:
// 1) a name, which is a string (containing no whitespace characters) and 2) a value, which is a real number.
// Records and fields within records are delimited by whitespace. The same name can appear in multiple records.
// The number of records in the dataset may be extremely large (e.g., quadrillions of records). Develop a program
// that reads the above type of dataset from standard input and writes the following information to standard output:
// 1) the number of (distinct) names; 2) for each name, the minimum, maximum, and average of the values for all
// of the records with that particular name; and 3) the minimum, maximum, and average of the values for all of
// the records. (Hint: Use std::map.)

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main (){

    map<int , string> m ={{1,"mugisha"},
    {2,"mugisha"},{3,"bienvenu"}
};

cout << m.begin()->first << ": " <<
      m.begin()->second << endl;
    cout << (--m.end())->first << ": "
      << (--m.end())->second;

      return 0;

}
