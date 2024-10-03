/*4.	Write a C++ Program display Student Mark sheet using Multiple inheritance*/

//parent 1, parent 2 --> child

#include<iostream>
using namespace std;

class student {

	protected:
		string name;
		int roll;
		
	public:
		void setdata()
		{
			cout<<"Enter your name :";
			cin>>name;
			cout<<"Enter your roll_no :";
			cin>>roll;		
		}
};
class marks{

	protected:
		int mark[5];
		public:
			int i;
			void setdata1()
			{
				for(i=0;i<5;i++)
				{
					cout<<"Enter your marks["<<i<<"]:"<<endl;
					cin>>mark[i];
				}
			}
			void getdata()
			{
				for(i=0;i<5;i++)
				{
					cout<<"The given marks are:"<<mark[i]<<endl;
				}
			}
};
class result:public student, public marks{

		public:
			void display()
			{
				int sum = 0, Ave = 0;
				cout<<"The name of the student is :"<<name<<endl;
				cout<<"The roll_no of the student is :"<<roll<<endl;
				for(i=0;i<5;i++)
				{
					sum= sum + mark[i];	
				}
				cout<<"The total mark is :"<<sum<<endl;
				Ave = (sum*100) / 500;
				cout<<"The Average mark of the student is :"<<Ave<<endl;
			}
};
int main()
{
	result r1;
	r1.setdata();
	r1.setdata1();
	r1.getdata();
	r1.display();
	return 0;
}
