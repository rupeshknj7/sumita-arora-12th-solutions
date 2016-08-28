Q. What is output of the following progarm (Assume all the necessary )files included:
	void main(){
		int *p[10],i;
		int score[]={80,30,74,50,34,67,0,98};
		for(i=0;score[i]!=0;i++)
		{
			p[i]=&score[i];
			*(p[i])+=10;
		}
		//Now p contains the indirectly the array 90,40,84,60,44,77,10,108
		int count=0;
		while(count<i)
		{
			int q=*(p[count]);
			count++;
			if(q>50)
			cout<<q",";
		}
	}
Ans. The output of the preceeding code is :
	90,84,60,77,
