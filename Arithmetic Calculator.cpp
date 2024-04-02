#include<iostream>
using namespace std;
int main(){
	double m,n,c;
	char oper;
	
	cout<<"Enter 1st Number:";
	cin>>m;
	cout<<"Enter an operator(+,-,*,/):";
	cin>>oper;
	cout<<"Enter 2nd Number:";
	cin>>n;
	cout<<"Your input:"<< m <<oper <<n<<endl;
	
	switch(oper){
		case '+':
	      	c=m+n;
		    cout<<"Result:"<<c<<endl;	
	     	break;
		case '-':
	     	c=m-n;
	    	cout<<"Result:"<<c<<endl;	
	    	break;
		case '*':
	    	c=m*n;
	    	cout<<"Result:"<<c<<endl;	
	    	break;
		case '/':
			if(n!=0){
	        	c=m/n;
	        	cout<<"Result:"<<c<<endl;
			}
			else{
				cout<<"Division by zero is invalid.";
			}
	        	break;
	}
	return 0;
}

