//Give output of the following program.
#include<iostream.h>
int global=20;
void fun(int& x,int y)
{
  x=x-y;y=x*10;
  cout<<x<<','<<y<<'\n';
}
void main()
{
  int global=8;
  fun(::global,global);
  cout<<global<<','<<::global<<'\n';
  fun(global,::global);
  cout<<global<<','<<::global<<'\n';
}
/*The output is ----- 
12,120
8,12
-4,-40
-4,12
*/
