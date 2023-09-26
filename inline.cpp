#include<iostream>
using namespace std;

class line
{
	public:
	inline float multi(float a,float b)
	{
        return(a * b);
    }
	inline float cube_a(float a)
	{
		return(a*a*a);
	}
	inline float cube_b(float b)
	{
		return(b*b*b);
	}
};

int main()
{
	float a,b,multi,cube_a,cube_b;
	
	cout<<"ENTER TWO VALUES : "<<endl;
	cin>>a>>b;
	cout<<"\nMultiplication value is:"<<(a*b);
    cout<<"\n\nCube value is        :"<<(a*a*a)<<"\t"<<(b*b*b);
	
}

