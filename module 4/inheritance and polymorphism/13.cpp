/*13.	Write a program to find the max number from given two numbers using friend function*/

#include<iostream>
using namespace std;
class B;//just declaring to compiler that class B it will come in code.
class A{
	int x;
		public:
			void setdata(int a)
			{
				x=a;
			}
		friend void max1(A& o1,B& o2);
};

class B{
	int y;
		public:
			void putdata(int b)
			{
				y=b;
			}
		friend void max1(A& o1,B& o2);	
			
};
void max1(A& o1,B& o2)
{
	if (o1.x > o2.y)
	{
		cout<<"The value of (x)"<<o1.x<<" is greater than (y)"<<o2.y<<endl;
	}
	else
	{
		cout<<"The value of (y)"<<o2.y<<" is greater than (x)"<<o1.x<<endl;
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
	a1.setdata(a);
	B b1;
	b1.putdata(b);
	max1(a1,b1);
	return 0;
}
