// 2.14 Fully parenthesize each of the expressions given below.
// (a) a = b + c * d >> 1 & 2
// (b) a == 0 && b != 0 || c < 0
// (c) a & 15 != 15
// (d) a++, b = a
// (e) 0 <= i < 8
// (f) a = b = c = 0
// (g) a[2][1]*=f(1,2)+1
// (h) a<<b <<c<<d
// (i) c=a<0
// (j) a+++b+a+++b
// (k) a*=* b<0?-*b:*b


//       answer


// a)a = (b+(c*d))>>(1 & 2)
// b)a == (0 && b = 0) || (c < 0)
// (c) ((a & 15) != 15)
// (d) (a++),( b = a)
// (e) (0 <= (i < 8))
// (f) (a = b = c = 0)
// (g) (a[2][1])*=(f(1,2)+1)
// (h) (a<<b<<c<<d)
// (i) (c=a<0)
// (j) (a+++b)+(a+++b)
// (k) ((a*=*)(b<0?-*b:*b))