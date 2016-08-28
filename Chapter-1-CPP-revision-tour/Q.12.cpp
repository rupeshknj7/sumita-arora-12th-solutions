Q. Write a definiton for a function SUMSEQUENCE() in C++ with two arguments-
double x and int n. The function should return a value of type double and it should perform the sum of the following 
series:
	1-(x/1!)+(x^2/3!)-(x^3/5!)+...
--------------------------------------------------------------------------------------------------------------
#include<math.h>
int factorial(int);
double SUMSEQUENCE(double x,int n){
	double value=0;
	for(int i=0;i<n;i++)
		value+=pow(-x,i)/factorial(2*i-1);
	return value;
}
int  factorial(int n){
	int fact=1;
	for(int i=1;i<=n;i++) fact*=i;
	return fact;
}
