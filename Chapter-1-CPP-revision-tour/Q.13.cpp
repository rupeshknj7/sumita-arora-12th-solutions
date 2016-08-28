Q. Write a C++ funtion SUMFUN() having parameters double x and int n
with result type as double to find the sum of the series given below:
1+(x/1!)+(x^2/3!)+(x^3/5!)+...(x^n/(2*n-1)!)
--------------------------------------------------------------------------
#include<math.h>
int factorial(int);
double SUMFUN(double x,int n){
	double value=0;
	for(int i=0;i<n;i++)
		value+=pow(x,i)/factorial(2*i-1);
	return value;
}
int  factorial(int n){
	int fact=1;
	for(int i=1;i<=n;i++) fact*=i;
	return fact;
}
