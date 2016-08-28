Q. Give the output of following code fragment:
	char*msg="WELCOME";
	for(int i=strlen(msg)-1;i>=0;i--)
		if(islower(msg[i]))
		msg[i]=toupper(msg[i]);
		else 
			if(isupper(msg[i]))
			if(i%2!=0)
				msg[i]=tolower(msg[i-1]);
			else
				msg[i--];
Ans. The output of the preceeding code is :
WELCOME	
//IF you don't believe than you can run the program yourself
