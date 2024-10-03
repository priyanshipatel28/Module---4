/*2.	Define a class to represent a bank account. Include the following members:
Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account

Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance
*/
#include<iostream>
using namespace std;
class bankaccount{
	string name,typ_of_acc;
	 long long int acc_no,balance;
	//string typ_of_acc;
	
	public:
		void name_of_depo(string name)
		{
			this->name =name;
		}
		void accountno(long long int acc_no)
		{
			this->acc_no =acc_no;
		}
		void account_type(string typ_of_acc)
		{
			this->typ_of_acc = typ_of_acc;
		}
		void balance_value(long long int bal)
		{
			balance = bal;
		}
		void display()
		{
			cout<<"\n";
			cout<<"The name of person is :"<<name<<endl;
			cout<<"The account no. of person is :"<<acc_no<<endl;
			cout<<"The person is holding ("<<typ_of_acc<<") account in bank."<<endl;
		}
		void display1()
		{
			cout<<"The balance present in acc is:"<<balance<<endl;
		}
		//for deposit of money
		void getdata1(long int deposit)
		{
			balance += deposit;
		}
		void putdata1()
		{
			cout<<"After deposit , the total balance in account is :"<<balance<<endl;
		}
		//for withdraw of money
	
		void getdata2(long int withdrawal)
		{
	
		if (withdrawal<=balance)
		{
			balance -= withdrawal ;
			cout<<"After withdrawal , the total balance in account is :"<<balance<<endl;
		}
		else if ( withdrawal > balance)
		{
			cout<<"The amount is more than balance, so withdrawal is not possible"<<endl;
		}
		else
		{
			cout<<"The amount in your account is not sufferent!"<<endl;
		}
	}
//		void putdata2()
//		{
//			cout<<"After withdrawal , the total balance in account is :"<<balance<<endl;
//		}
};
int main()
{
	string name,typ_of_acc;
	 long long int acc_no,bal,deposit,withdrawal;
	
	cout<<"Enter your name:";
	//cin>>name;
	getline(cin,name);
	cout<<"Enter your account number:";
	cin>>acc_no;
	cout<<"Enter your account type(current/ saving):";
	cin>>typ_of_acc;
	cout<<"Enter your current amount:";
	cin>>bal;
	cout<<"Enter the amount you want to deposit:";
	cin>>deposit;
	cout<<"Enter the withdrawal amount you want:";
	cin>>withdrawal;
	
	bankaccount b1;
	//for input
	b1.name_of_depo(name);
	b1.accountno(acc_no);
	b1.account_type(typ_of_acc);
	b1.display();
	b1.balance_value(bal);
	b1.display1();
	b1.getdata1(deposit);
	b1.putdata1();
	b1.getdata2(withdrawal);
	b1.display1();
	
	
	return 0;
}
