#include<iostream>
using namespace std;

template<class T>

void swap_num(T &x , T &y)
{
	T t;
	t = x;
	x = y;
	y = t;
}
 main()
{
	int a,b;
	a =10 ,b =20;
	
	swap_num(a , b);
	cout<<"a = "<< a << " " <<"b = "<< b << endl;
}