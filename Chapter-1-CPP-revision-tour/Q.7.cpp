Q. Give the output of the following program:
void main(){
	int x[]={10,20,30,40,50};
	int *p,**q,*t;
	p=x;
	t=x+1;
	q=&t;
	cout<<*p<<","<<**q<<","<<*t++;
}
Ans. The output of the code is 
	10,30,20//The cout statement executes from right to left;and *t++ effects as
	//value at the pointer t and then increment the pointer t so as now *q points at incremented t
	//Which again points at the third position of x[] which is 30
