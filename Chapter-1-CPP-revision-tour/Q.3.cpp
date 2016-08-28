Q Diffrentiate between he output of following code fregments:
1---
int f=1,i=2;
while(++1<5)
f*=i;
cout<<f;
2---
int f=1,i=2;
do{
  f*=i;
}while(++i<5);
cout<<f;
------------------------------------------------------------------------
Ans..
the output of the first code is:
12.
and of the second code is :
24.
Explaination-----
the first code implements a while loop which checks for the condition first which was ++i<5
here this condition first makes i increment and then tests against 5.
now for the first run of this the i=2 becomes i=3 and then is checked and condition satisfies as 3<5
and the first run is made f = 3*1=3 and in the second run f=3*4=12 and then the condition fails as ++(++3)=5 not smaller than 5
so cout<<f is 12
But,
the second code implements a do-while loop which run the code without the condition check for the first time.and hence gets 
f multiplied by 2 also and thus prints f=12*2=24. So is the answer.
