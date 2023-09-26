#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class cricket
{
	
	char bname[20];
	int  bage;
	int innings,notout,runs;
	int batavg;
	void avg()
	{
		batavg=runs/(innings-notout);
	}
public :
	void batsman ();
	void display();
};
void cricket::batsman ()
{
	cout<<"Enter batsman name :";
	cin>>bname;
	cout<<"Enter batsman age :";
	cin>> bage;
	cout<<"enter innings,notout and runs :";
	cin>>innings>>notout>>runs;
	avg();
}
void cricket::display()
{
	cout<<"\nBatsman name : "<<bname<<"\n____________________"<<"\nBatsman age : "<<bage<<"\n____________________"<<"\nInnings "<<innings
	<<"\n____________________"<<"\nNot out : "<<notout<<"\n____________________"<<"\nRuns "<<runs<<"\n____________________"<<"\nBatting Average "<<batavg;
}
int main()
{
	cricket obj;
	obj.batsman();
	obj.display();

}
