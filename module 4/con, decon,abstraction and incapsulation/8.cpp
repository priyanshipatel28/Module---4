/*8.Write a C++ program to implement a class called Student 
that has private member variables for name, class, roll number, 
and marks. Include member functions to calculate the grade based 
on the marks and display the student's information.
Accept address from each student implement using of aggregation*/

#include<iostream>
using namespace std;

class student{
	private:
		string name;
		int std_class, roll_no, m1;
		
	public:
		
		student(string n,int c,int roll_no, int m1)
		{
			name = n;
			std_class = c;
			this->roll_no = roll_no;
			this->m1 = m1;
				
		}
		string name_1()
		{
			return name;
		}
		int class_1()
		{
			return std_class;
		}
		int roll()
		{
			return roll_no;
		}
		int mark()
		{
			return m1;
		}
		void setdata()
		{
			cout<<"hello, it is working, hurry :)";
		}
};

class student_1{
	private:
		string address;
		student *stuart;
		
	public:
		student_1(string a, student *start)
		{
			address = a;
			stuart = start;
		}
		void display()
		{
			cout<<"Student Information"<<endl<<endl;
			cout<<"The name of the student is:"<<stuart->name_1()<<endl;
			cout<<"The class of the student is :"<<stuart->class_1()<<endl;
			cout<<"The roll no of thr student is :"<<stuart->roll()<<endl;
			cout<<"The marks of the student is :"<<stuart->mark()<<endl;
			if(stuart->mark()>=75)
			{
				cout<<"The grade of the student is: A"<<endl;
			}
			else if (stuart->mark()<75 && stuart->mark()>=55)
			{
				cout<<"The grade of the student is: B"<<endl;
			}
			else
			{
				cout<<"The grade of the student is: C"<<endl;
			}
			cout<<"The address of the student is:"<<address<<endl;
			cout<<"Name  = address"<<endl; 
			cout<<stuart->name_1()<<" = "<<address<<endl;
		}
};
int main()
{
	int roll_no,c,m1;
	string n,a;
	
	cout<<"Enter your roll no. :";
	cin>>roll_no;
	
	cout<<"Enter your class :";
	cin>>c;
	
	cout<<"Enter your marks for three subject :";
	cin>>m1;
	
	cout<<"Enter your name:";
	cin>>n;
	
	cout<<"Enter your address:";
	cin>>a;
	
	student s1(n,c,roll_no,m1);
	student_1 s2(a,&s1);
	s2.display();
	s1.setdata();
	
	return 0;
}
