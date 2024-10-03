/*3.	Create a class person having members name and age.
 Derive a class student having member percentage. Derive another 
 class teacher having member salary. Write necessary member function to initialize, 
read and write data. Write also Main function (Multiple Inheritance)*/

//A class inherit from more than one bass class

#include<iostream>
using namespace std;

class student{
	private:
	int percentage;
	public:
		
		void setdata1(int per)
		{
			percentage = per;
		}
		int dis()
		{
			return percentage;
		}
};
class teacher{
	private:
	int salary;
	public:
		
		void setdata2 (int sal)
		{
			salary = sal;
		}
		int dis1()
		{
			return salary;
		}
};
class person : public student,public teacher{
	private:
	string name;
	int age;
	
	public:
		
		void setdata3(string name,int age)
		{
			this->name = name;
			this->age = age;
		}
		
		void display()
		{
			
			cout<<"Final display "<<endl;
			cout<<"The name of the student is :"<<name<<endl;
			cout<<"The age of the srudent is :"<<age<<endl;
			cout<<"The percentage of student is :"<<dis()<<endl;
			cout<<"The salary of teacher is :"<<dis1()<<endl;
		}
		
};
int main()
{
	int per,sal;
	string name;
	int age;
	
	cout<<"Enter the percentage of student: ";
	cin>>per;
	
	cout<<"Enter the salary for teacher: ";
	cin>>sal;
	
	cout<<"Enter the name of the student: ";
	cin.ignore(); //cin.ignore(): Added before getline to clear the newline from the input buffer.
	//help to prevent garbage value
	getline(cin,name);
	
	cout<<"Enter the age of the student:";
	cin>>age;
	
//	student s1;
//	s1.setdata(per);
//	
//	teacher t1;
//	t1.setdata(sal);

	person p1;
	p1.setdata1(per);
	p1.setdata2(sal);
	p1.setdata3(name, age);
	p1.display();
	return 0;
}
