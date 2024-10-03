//1.	Write a program of to swap the two values using template

#include<iostream>
using namespace std;
template<typename t>

void s(t &a,t &b)
{
	a= a+b;
	b= a-b;
	a= a-b;
}
int main()
{
	int a,b;
	cout<<"Enter two value for swap:";
	cin>>a>>b;
	
	cout<<"The values before swap , a:"<<a<<" and b:"<<b<<endl;
	
	s(a,b);
	cout<<"The values after swap , a:"<<a<<" and b:"<<b<<endl;
	return 0;
}
