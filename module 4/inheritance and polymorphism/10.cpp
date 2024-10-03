//10.	Write a program to concatenate the two strings using Operator Overloading
#include<iostream>
using namespace std;

class two{
	string name1;
	public:
		two()
		{
		    
		}
		
		two(string n1)
		{
			name1 = n1;
		}
		void setdata()
		{
			cout<<name1;
		}
	
		two operator+(two obj)
		{
			two obj1;
			obj1.name1 = name1 + obj.name1;
			return obj1;
		}
		
};
int main()
{
	two t1("rahul"),t2("sahil"),t3;
	t3 = t1+t2;
	t3.setdata();
	
	return 0;
}
