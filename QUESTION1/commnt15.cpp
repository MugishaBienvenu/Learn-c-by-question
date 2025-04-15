// 2.15 For each expression identified by a comment in the code below, state whether the 
// expression is an lvalue or rvalue.
// 1 intabs(int);
// 2
// 3 voidfunc()
// 4 {
// 5 intx=0;
// 6 inty=0;
// 7 intz;
// 8
// 9 ++x;
// 10 //x
// 11 //++x
// 12 y++;
// 13 //y++
// 14 z=x+y;
// 15 //x+y
// 16 //z=x+y
// 17 z=abs(x+1);
// 18 //abs(x+1)
// 19 x=y;
// 20 //x=y
// 21 }


// answer 




// 10 //x comment default
// 11 //++x is lvalue comment
// 12 y++;
// 13 //y++ is rvalue comment
// 14 z=x+y;
// 15 //x+y comment of x+y
// 16 //z=x+y  comment of z
// 17 z=abs(x+1); 
// 18 //abs(x+1) absolute comment
// 19 x=y;
// 20 //x=y comment assignment
// 21 }

