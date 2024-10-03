/*2.	Write a C++ Program to find Area of Rectangle using inheritance*/
//base class: parent
// derived class: child

#include<iostream>
using namespace std;

class rectangle{
	int l,w;
	
	public:
		void setdata ()
		{
			cout<<"Enter the length for rectangle:";
			cin>>l;
			
			cout<<"Enter the width for rectangle:";
			cin>>w;
		}
		
		int display()
		{
			return l*w;
		}
	
};

class formula : public rectangle{
	
	public:
		void area()
		{
			cout<<"The area for the rectangle is :"<<display()<<endl;
		}
};
int main()
{
	formula f1;
	f1.setdata();
	f1.area();
	return 0;
}
