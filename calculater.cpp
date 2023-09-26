#include<iostream>
using namespace std;

int main()
{
	char clcy;
	float a,b;
	
	cout<<"ENTER TWO OPERATORE : \n";
	cin>> a >> b ;
	
	
	cout<<"ENTER THE SIGN : ( +,-,*,/ ) :" ;
	cin>>clcy ;
	
	
	switch(clcy)
	{
		case'+':
			cout << a << "+" << b << "=" << a + b ;
			break;
			
		case'-':
			cout << a << "-" << b << "=" << a - b ;
			break;
		
		case'*':
			cout << a << "*" << b << "=" << a * b ;
			break;
		
		case'/':
			cout << a << "/" << b << "=" << a / b ;
			break;
			
		default:
			cout<<"select correct operator";
			break;
					
	}
}