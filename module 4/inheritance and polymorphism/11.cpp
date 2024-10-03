/*11.Write a program to calculate the area of circle, rectangle and triangle using Function Overloading
Rectangle: Area * breadth
 Triangle: ½ *Area* breadth
  Circle: Pi * Area *Area
*/

#include<iostream>
#define pi 3.14
using namespace std;

class area{
	public:

	void shape(int a,int b)
	{
	cout<<"The area of the rectangle is :"<<a*b<<endl;
	}
	
	void shape(float a,float b)
	{
		cout<<"The area of the triangle is :"<<0.5*a*b<<endl;
	}
	void shape (double a)
	{
		cout<<"The ares of the circle is :"<<pi*a*a<<endl;
	}
};
int main()
{
	area a1;
	a1.shape(4,5);
	
	area a2;
	a2.shape(2.5f,3.5f);
	
	area a3;
	a3.shape(4.5);

	return 0;
}

