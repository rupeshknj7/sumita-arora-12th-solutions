Q. Consider the prototypes of following overloaded functions and find out whether
	the compiler would raise an error for any prototype? If so ,why?
	(i) void test(int ,int);
	(ii) void test(int,double);
	(iii) int test(int ,int);
	(iv) void test(double,int);
	(v) int test(double, int );
	(vi) int test(double,double);
	(vii) double test(double,double);
Ans. The error will be raised for the following sets of prototypes
 I-- (i), (iii)
 II- (iv),(v)
 III- (vi),(vii)
 Because in these function test() has the same signature. and differs
 only in the return type.
