#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class Bank
{
  private:
    int Accno;
    string Name;
    char AccType;
    float Balance;
  public:
  void AccountDetails()
  {
    cout<<"Please enter account details:"<<endl;
    cout<<"Account Number:";
    cin>>Accno;
    cout<<"Account Holder Name:";
    cin>>Name;
    cout<<"AccountType(c-Current,s-Savings):";
    cin>>AccType;
    cout<<"Balance Amount:";
    cin>>Balance;
  }
  void printAccountDetails()
  {
    cout<<"Account holder details:"<<endl;
    cout<<"....................."<<endl;
    cout<<"Account Number:"<<Accno<<endl;
    cout<<"Name:"<<Name<<endl;
    cout<<"Account type:"<<AccType<<endl;
    cout<<"Balance Amount:"<<Balance<<endl;
	cout<<".............."<<endl;
  }
  void Transaction()
  {
    char type;
    float tamt;
    cout<<"Transation Process"<<endl;
    cout<<"..........."<<endl;
    cout<<"Get transatioin amount:";
    cin>>tamt;
    cout<<"Get transation type(W-withdrawl,D.deposite):";
    cin>>type;
    if(type=='W'||type=='w')
	{
		if (Balance-tamt>0)
		{
			Balance = Balance-tamt;
            cout<<"Transation completed"<<endl;
            cout<<"Your current Balance is"<<Balance<<endl;
         }
       else
        {
         cout<<"Sorry! Insufficient funds in your account."<<endl;
     	}
    }
    else if(type=='D'||type=='d')
    {
        Balance=Balance+tamt;
        cout<<"Your current Balance is"<<Balance<<endl;}
    }
};
int main()
{
Bank B;
B.AccountDetails();
cout<<"............."<<endl;
cout<<"Account Details Before Transation"<<endl;
B.printAccountDetails();
B.Transaction();
cout<<"...................."<<endl;
cout<<"Account Details after Transation"<<endl;
B.printAccountDetails();
return 0;
}