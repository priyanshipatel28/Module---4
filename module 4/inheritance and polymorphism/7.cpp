/* 7.Write a C++ Program to illustrates the use of Constructors in multilevel inheritance*/

#include<iostream>
using namespace std;

class A{
	public:
		A()
		{
		cout<<"hello, this is A."<<endl;
		}
};
class B:public A{
	public:
		B()
		{
			cout<<"Hello, this is B."<<endl;	
		}
	
};
class C:public B{
	public:
		C()
		{
			cout<<"hello, this is C."<<endl;
		}
	
};

int main()
{
	C c1;
	return 0;
}
