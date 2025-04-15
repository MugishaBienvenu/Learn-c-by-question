// 3.13State the output of the program whose source code is given below.Explain why this output is obtained.
 #include<iostream>

  auto make_functor(int x)
  {
  static int a=0;
  return[=](int y){
  static int b=0;
  return y+x+(a++)+(b++);
};
}

int main()
{

auto f1 = make_functor(1);
auto f2 = make_functor(2);
std::cout << f1(0) << "\n";
std::cout << f2(0) << "\n";
std::cout << f1(1) << "\n";
std::cout << f2(1) << "\n";
}


// answer 

// 1
// 4
// 6
// 9

// because the first output can produce 1 as solution in parameter we have one value append on f1(0) then this display one as result
// and it can provide increment of 3 value except output two can provide two values
 