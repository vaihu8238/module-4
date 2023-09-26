#include <iostream>
using namespace std;

//
//	void add(int a, int b)
//	{
//		cout << "sum = " << (a + b);
//		cout << "\nmul = " << (a * b);
//	}
//
//	void add(double a, double b)
//	{
//   		cout << endl << "sub = " << (a - b);
//		cout << endl << "\div = " << (a / b);
//    }
//    
//int main()
//{
//	add(10, 2);
//	add(1.3, 1.2);
//
//}

//-----------with diffrent number perameter------------ :

void add(int a, int b)
{
cout << "sum = " << (a + b);
}

void add(int a, int b, int c)
{
	cout << endl << "sum = " << (a + b + c);
}

int main()
{
	add(10, 2);
	add(5, 6, 4);
}
