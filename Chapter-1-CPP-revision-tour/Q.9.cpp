Q. What will be the output if the intput is:
	(i) a (ii) c (iii) d (iv) h (v) b
char ch,out[10]=" ";
cin>>ch;
switch(ch){
	case 'a': strcat(out,"a");
	case 'b': strcat(out,"b");
	case 'c': strcat(out,"c");
			break;
	case 'd': strcat(out,"d");
	break;
	default: strcat(out,"Not abcd");
} 
cout<<out<<endl;
Ans. The output of the preceeding code is 
(i) " abc"
(ii) " c"
(iii) " d"
(iv) " Not abcd"
(v) " bc"
