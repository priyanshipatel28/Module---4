/*
2.	Write a program of Addition, Subtraction, Division, Multiplication using constructor.*/

#include<iostream>
using namespace std;

class calculator{
	
	int num1,num2;
	
	public:
		calculator(int a,int b)
		{
			num1=a;
			num2=b;
		}
		
		void add()
		{
			cout<<"The addition of the values is:"<<num1+num2<<endl;
		}
		void sub()
		{
			cout<<"The subtraction of the values is:"<<num1-num2<<endl;
		}
		void mul()
		{
			cout<<"The multiplication of the values is:"<<num1*num2<<endl;
		}
		void div()
		{
			if ( num2 != 0)
			{
			
			cout<<"The division of the values is:"<<num1/num2<<endl;	
			}
			else
			{
				cout<<"Invalid value!"<<endl;
			}
		}
};
int main()
{
	int a,b;
	cout<<"Enter value for a:";
	cin>>a;
	cout<<"Enter value for b:";
	cin>>b;
	
	calculator c1(a,b);
	c1.add();
	c1.sub();
	c1.mul();
	c1.div();
	
	
	return 0;
}
