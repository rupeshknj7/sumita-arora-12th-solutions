//Q Give output:
void Change(int x[4],int i)
{ x[i]=x[i]*i;}
void main()
{
 int x[]={11,21,31,41};
 for(int i=0;i<4;i++)
 {
 Change(x,i);
 cout<<x[i]<<'\n';
 }
}
/*
The output of the following progam is :
0
21
62
123

*/
