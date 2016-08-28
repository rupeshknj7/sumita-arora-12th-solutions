Q. What will be the output of the following program
#include<iostream>
using namespace std;
void main(){
	int var1=5,var2=10;
	for(int i=1;i<=2;i++)
	{
		cout<<var1++<<"\t"<<--var2<<endl;
		cout<<var2--<<"\t"<<++var1<<endl;
	}
}
Ans. The output of the preceeding code is 
5	9
9	7

