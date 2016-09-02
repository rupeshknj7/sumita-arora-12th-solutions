Q. Consider the following program. Would it compile and run without any erro?
   If yes, what will be the output? If no, what is the error?
   		#include<iostream>
   		using namespace std;
   		class Test{
   			public:
   				void f(int n,double m);
   				viud f(int n,int m);
		};
		void Test::f(int n, double m){
			cout<<"Addition of int and double value resulted in :"<<(double)(n+m)<<endl;
		}
		void Test::f(int n,int m){
			int r=n+m;
			cout<<"Addotion of two ints resulted in :" <<r<<endl;
		}
		int main(){
			Test t1;
			t1.f(98,99);
			t1.f(5.3,4);//No form of f with these arguments
			t1.f(4.3,5.2);//No form of f with these arguments 
		}
Ans. No the program will not execute because of the errors commented
	in the first one the argument list is double and int which has no corresponding
	form of f();
	and in the second one the list is double and double which is again an error.
