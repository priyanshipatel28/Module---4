/*1.	WAP to create simple calculator using class*/
#include<iostream>
using namespace std;
class calculator
{
	private :
		int x,y;
	public:
		void getdata(int a,int b)
		{
			x=a;
			y=b;
		}
		void display ()
		{
			cout<<"The value of x:"<<x;
			cout<<"the value of y:"<<y;
		}
		void add()
		{
			cout<<"The add of values " <<x<< "and " <<y<< "is :"<<x+y<<endl;
		}
		void sub()
		{
			cout<<"The subtraction of values " <<x<< "and " <<y<< "is :"<<x-y<<endl;
		}
		void mul()
		{
			cout<<"The multiplication of values " <<x<< "and " <<y<< "is :"<<x*y<<endl;
		}
		void div()
		{
		
		if ( float (y)!= 0)
		{
			cout<<"The division of values " <<x<< "and " <<y<< "is :"<<x/float (y)<<endl;
		}
		else
		{
			cout<<"the denomerator can't be zero."<<endl;
		}
	}
		
};

int main()
{
	int a,b;
	cout<<"The value for a and b:";
	cin>>a>>b;
	calculator c1;
		
		c1.getdata(a,b);
		//c1.display();
		c1.add();
		c1.sub();
		c1.mul();
		c1.div();
	return 0;
}
