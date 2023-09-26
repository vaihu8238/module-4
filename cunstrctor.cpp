#include<iostream>
using namespace std;

class call
{
	int a , b ;
	public:
		call()
		{
			cout<< "ENTER TWO VALUES :"<<endl;
			cin >> a >> b ;
		}
		void add()
		{
			cout<<"addition is :"<< a+b <<endl;
		}
		void sub()
		{
			cout<<"substraction is :"<< a-b <<endl;
		}
		void mul()
		{
			cout<<"multiplication is :"<< a*b <<endl;
		}
		void div()
		{
			cout<<"division is :"<< a/b <<endl;
		}
};
int main()
{
	call c;
	c.add();
	c.sub();
	c.mul();
	c.div();
}