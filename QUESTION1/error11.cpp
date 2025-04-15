// 2.11 Each of the code fragments below contains an error. In each case, explain what the error is, why it is an error,
// and how the error can be fixed.
// (a) const char a = ’a’;
// char *c = &a;
// (b) const int i = 42;
// auto& j = i;
// ++j;




//      answer



// in c++ hasn't name of error complier can misinterpret this error
// a->invalid conversion from 'const char*' to 'char*
// b->++j increment of j