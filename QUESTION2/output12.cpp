// 2.12 State the output of the program whose source code is given below.Explain why this
// output is obtained.
 #include <iostream>

 int x= 1;

 auto f1=[](){
    return x+1;
};
 auto f2 =[x=x](){
    return x+1;
};

 int main()
 {
    x= 10;
   std::cout <<f1()<<""<<f2()<<"\n";

}


//  answer


// 112

// because on f1 x+1 then x is equal ten ,f2 in bracket [x=x] and x+1,x=10 when you follow this way
// you can get different answer but you use compiler you can get this answer equal to 112
