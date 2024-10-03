/*12.	Write a program to swap the two numbers using friend function without using third variable*/
#include<iostream>
using namespace std;
//I can't use swap as a name of class because std::swap ia a inbuilt function
//AND DUE TO THAT , [Error] reference to 'swap' is ambiguous
class s{
	int x,y;
	
	public:
		void setdata(int a,int b)
		{
			x=a;
			y=b;
			cout<<"The value of x and y before swap is:"<<endl;
			cout<<"x:"<<x<<" and "<<"y:"<<y<<endl;
		}
		friend void third(s& obj);
		
};

void third(s& obj)
{
	obj.x = obj.x + obj.y;
	obj.y = obj.x - obj.y;
	obj.x = obj.x - obj.y;
	cout<<"The value of x and y after swap is:"<<endl;
	cout<<"x:"<<obj.x<<" and "<<"y:"<<obj.y<<endl;	 
}
int main()
{
	int a,b;
	cout<<"Enter value for x:"<<endl;
	cin>>a;
	cout<<"Enter value for y:"<<endl;
	cin>>b;
	s s1;
	s1.setdata(a,b);
	third(s1);
	return 0;
}
