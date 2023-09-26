#include<iostream>
using namespace std;

int main()
{
	int x=10,y=5;
	
	cout<<"before swap : x = "<< x << " , y = "<< y <<endl ;
	x = x*y;
	y = x/y;
	x = x/y;
	
	cout<<"After swap : x =" << x << " , y = "<< y <<endl;
	
}