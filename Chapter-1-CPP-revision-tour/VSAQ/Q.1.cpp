Q. Find out the errors , if any , in the following C++ statements :
(i) cout<<"="a;
Ans. Ignoring cascading in cout statements . 
    It should have been . cout<<"="<<a;
(ii) m=5,n=12;o=15
Ans. If the variables are declared previously than the only errors are
     no semicolon after 'o=15'
     or it could have been m=5,n=12,o=15;
     or m=5,n=12;o=15;
     If the variables not declared before than 
     int m=5,n=12;int o=15;
(iii) cout<<"x"; <<x;
Ans. The error in this is unusual use of the operator '<<'
	or to make any sense this statement should have been
	cout<<"x"<<x;
(iv) cin>>y;>>j;
Ans. As above the error is the unusual use of the operator '>>'
	cin>>y>>j;
(v) cin>>"\n">>y;
Ans. The work of cin statement is to input value to the specified 
	variable. But here "\n" is not a variable and hence cannot 
	store any value it is a constant.
	So this is the error
(vi) cout>>"\n"abc";
Ans. '>>' This operator is not used in case of cout statement
	and the cout statement just displays values and string constants
	but here "\n"abc" is neither a value nor string constant
	so This is the point of error.
(vii) a=b+c;
Ans. If the variables are previously been declared than there is no 
	 issue with this statement;
(viii) break =x*y;
Ans. The equal to operator stores the value at RHS to the LHS
	 But here the LHS of the '=' operator is not a constant
