/*5.	Write a C++ program to create a class called Triangle that has private member
 variables for the lengths of its three sides.
 Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.
 
Equilateral if all sides are equal.
Isosceles if exactly two sides are equal.
Scalene if all three sides are different.*/

#include<iostream>
using namespace std;

class triangle{
	int l1,l2,l3;
	
	public:
		void setdata()
		{
			cout<<"Enter length for 1 side:";
			cin>>l1;
			cout<<"Enter length for 2 side:";
			cin>>l2;
			cout<<"Enter length for 3 side:";
			cin>>l3;
		}
		
		void display()
		{
			cout<<"The lengths of the triagles are  :"<<l1<<","<<l2<<" and "<<l3<<"."<<endl;
			if (l1 == l2 && l2 == l3 )
			{
				cout<<"If all the sides of triangle are same then, it is :Equilateral."<<endl;
			}
			else if(l1!=l2 && l2!=l3 && l1!=l3)//(l1 == l2 || l2 == l3 || l1 == l3) 
			//(l1!=l2 && l2!=l3 && l1!=l3)
			{
				cout<<"If all the sides of triangle are different then, it is :Scalene."<<endl;
			}
			else if(l1 == l2 || l2 == l3 || l1 == l3) 
			{
				cout << "If exactly two sides of the triangle are equal, then it is: Isosceles."<<endl;
			}
			
	}
		
};
int main()
{
	triangle t1;
	t1.setdata();
	t1.display();
	return 0;
}
