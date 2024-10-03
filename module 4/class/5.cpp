/*5.	Write a C++ program to create a 
class called Rectangle that has private 
member variables for length and width. 
Implement member functions to calculate 
the rectangle's area and perimeter.*/

#include<iostream>
using namespace std;

class rectangle{
	private:
		int lenght,width;
	public:
		void setdata(int l,int w)
		{
			lenght= l;
			width = w;
		}
		void putdata()
		{
			cout<<"The area of recatngle: " <<lenght*width<<endl;
			cout<<"The perimeter of rectangle: "<< 2 * (lenght + width)<<endl;
		}
};
int main()
{
	int lenght,width;
	cout<<"The length of rectangle:";
	cin>>lenght;
	cout<<"The width of rectangle:";
	cin>>width;
	
	rectangle r1;
	r1.setdata(lenght,width);
	cout<<"\n";
	r1.putdata();
	
	return 0;
}
