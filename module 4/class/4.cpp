/*4.	Write a C++ program to implement a class called Circle that has private
 member variables for radius. 
Include member functions to calculate the circle's area and circumference.*/

#include<iostream>
#define pi 3.14
using namespace std;

class circle{
	private:
		float radius;
	public:
		void getdata(float r)
		{
			radius = r;
		}
		void putdata()
		{
			cout<<"\nThe area of the Circle:"<<pi*radius*radius;
			cout<<"\nThe circumference of the Circle:" <<2*pi*radius;
		}
		
};

int main()
{
	float r;
	cout<<"Enter the radius of the circle:";
	cin>>r;
	
	circle c1;
	c1.getdata(r);
	c1.putdata();
	return 0;
}
