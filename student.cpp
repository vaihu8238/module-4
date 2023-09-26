#include<iostream>
using namespace std;

class student
{
	public:
		int rollno;
		
		void roll()
		{
			cout << "ENTER ROLL NUMBER :";
			cin>>rollno;
			
			cout<<"\nRoll number is :"<<rollno<<endl;
		}
};

class test
{
	public:
		int marks[6],i;
		
		void res()
		{
			cout<<"\n\nENTER a marks :"<<endl;
			for(i=0;i<6;i++)
			{
				cin>>marks[i];
			}
		}
};
class result : public student,public test
{
	public:
		int t;
		
		void total()
		{
			t=marks[0]+marks[1]+marks[2]+marks[3]+marks[4]+marks[5];
		}
		
		void display()
		{
		   cout << "\n\n Rollno. is :"<<rollno<<"\n Entered marks is :"<<marks <<"\n total is :"<<t<<endl;
	    }
};

int main()
{
   result r;
   r.roll();
   r.res();
   r.total();
   r.display();	
}