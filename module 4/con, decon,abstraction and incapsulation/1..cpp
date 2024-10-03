//1.	Write a program to find the multiplication values and the cubic values using inline function

#include<iostream>
using namespace std;
class multi{
	int num1,num2;
	public:
		
		void setdata(int num1,int num2)
		{
			this->num1 = num1;
			this->num2 = num2;
		}
		inline void getdata()
		{
			cout<<"The numtiplication of "<<num1<< " and "<<num2<< " is: "<<num1*num2<<endl;
			cout<<"The cubic value of "<<num1<<"is :"<<num1*num1*num1<<endl;
			cout<<"The cubic value of "<<num2<<"is :"<<num2*num2*num2<<endl;		
			
		}
};
int main()
{
	multi m1;
	int num1,num2;
	cout<<"Enter value for num1:";
	cin>>num1;
	cout<<"Enter value for num2:";
	cin>>num2;	
	m1.setdata(num1,num2);
	m1.getdata();
	return 0;
}
