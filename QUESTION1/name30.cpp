// 2.30 (a) Consider the program whose source listing is given below. Modify this program so that the scope resolu
// tion operator :: (e.g., as appears in std::cout) is no longer needed. Resist the temptation to commit the
//  cardinal sin of writing “using namespace std;”.
//  #include <iostream>
//  int main()
//  {
//  std::cout << "Hello, World!\n";
//  }
//  (b) Explain why a using a construct like “using namespace std;” is truly evil.


//  answer


// a)

 #include <iostream>
 using namespace std;

 int main()
 {
 cout << "Hello, World!\n";
 }

//  b)
//  a namespace is a collection of related names or identifiers (functions, class, variables) 
// which helps to separate these identifiers 
// std stand for stand library