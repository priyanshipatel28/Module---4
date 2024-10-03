/*13.	Write a program to find the max number from given two numbers using friend function*/
//just for practice in the same class
#include<iostream>
using namespace std;
class A{
	int x,y;
	public:
			void setdata(int a,int b)
			{
				x=a;
				y=b;
			}
			friend void two (A& o1);
};

void two(A& o1)
{
	if(o1.x>o1.y)
	{
		cout<<"The value of (x)"<<o1.x<<" is greater than (y)"<<o1.y<<endl;
	}
	else
	{
		cout<<"The value of (y)"<<o1.y<<" is greater than (x)"<<o1.x<<endl;	
	}
	
}
int main()
{
	int a,b;
	cout<<"Enter value for x:"<<endl;
	cin>>a;
	cout<<"Enter value for y:"<<endl;
	cin>>b;
	A a1;
	a1.setdata(a,b);
	two(a1);
	return 0;
}
