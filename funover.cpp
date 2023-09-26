#include<iostream>
using namespace std;

void add(int a, int b)
{
	cout<<"sum ="<<(a+b);
	cout<<"\nsub ="<<(a-b);
}

void add(int a, int b,int c)
{
	cout<<endl<<"mul ="<<(a*b*c);
	cout<<endl<<"div ="<<((a+b)/c);
}


main()
{

	add(10,2);
	add(1,2,2);
}
