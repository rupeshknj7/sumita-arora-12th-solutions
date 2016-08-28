Q. Give the output of the following program:
#include<iostream>
using namespace std;
int a=10;
int main(){
	void demo(int &,int,int*);
	system("cls");
	int a =20;
	demo(::a,a,&b);//Sorry guys i don't know what is b.In my textbook it's not given so let's take this to be 7
	cout<<::a<<"\t"<<a<<"\t"<<b;
}
void demo(int &x,int y, int *z){
	a+=x;y*=a;*z=a+y;
	cout<<x<<"\t"<<y<<"\t"<<*z<<endl;
}
Ans. the output is :
	10	400	420
	20	20	420
