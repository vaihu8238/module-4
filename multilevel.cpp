#include<iostream>
using namespace std;

class purson
{
	
	 
	 public: 
	  int age; 
	  string name;       
	     
	     void add()
	     {
	     	cout<<" Enter name : "<<endl;
	     	cin>>name;
	     	cout<<" Enter age : "<<endl;
	     	cin>>age;
	     	
	     	cout<<"--------------------"<<"\n\n name is : " <<name<< "\n age is : " <<age<<"\n\n----------------------"<<endl;
		 }
	     
	
};

class student
{
   
	public:
		 int i, mark;
         float sum=0,perc;
		
	    void per()
		{
	
            cout<<"Enter Marks out of 500 : ";
                cin>>mark;
                sum = mark; 
            perc = (sum/500)*100;
            cout<<"\nPercentage Marks = "<<perc<<"%";
            cout<<endl;
    
		}
};
class teacher : public purson,public student
{
	
	public:
			int salary;
		
		 void sal()
	    {
	    	cout<<"\n\nEnter your salary : ";
	    	cin>>salary;
	    	
	    	cout<<"salary is :"<<salary<<endl;
		}
		
};

 main()
{
	teacher t;
	t.add();
	t.per();
	t.sal();
	
}