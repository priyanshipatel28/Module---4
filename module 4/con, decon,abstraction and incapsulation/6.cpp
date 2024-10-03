/*6.	Write a C++ program to implement a class called Employee 
that has private member variables for name, employee ID, and salary. 
Include member functions to calculate and set salary based 
on employee performance. Using of constructor*/

#include<iostream>
using namespace std;

class employee{
	private:
		string name;
		int emp_id;
		double salary;
		public:
			employee(string n,int e_id)
			{
				name = n;
				emp_id = e_id;
				//salary = s;
			}
			
			void setdata()
			{
				int p;
				cout<<"Enter your performance:";
				cin>>p;
//If p < 2.5, set salary to 25000.
//If p >= 2.5 and p < 4.0, set salary to 50000.
//If p >= 4.0 and p < 5.0, set salary to 65000.
//If p == 5, set salary to 70000.
				
				if(p<2.5)
				{
					salary = 25000;
				}
				else if(p>=2.5 && p<4.0)
				{
					salary = 50000;
				}
				else if (p>=4.0 && p<5.0)
				{
					salary =65000;
				}
				else if (p==5)
				{
					salary = 70000;
				}
				else
				{
					cout<<"Invalid data!";
				}
				
				cout<<"The name of the employee is :"<<name<<endl;
				cout<<"The employee id is :"<<emp_id<<endl;
				cout<<"The salary based on "<<p<<"performance is"<<salary<<endl;
			}
};
int main()
{
	string n;
	int e_id;
	
	cout<<"Enter the name of employee:";
	getline(cin,n);
	
	cout<<"Enter your emp_id:";
	cin>>e_id;
		
		
	employee e1(n,e_id);
	e1.setdata();
	return 0;
}
