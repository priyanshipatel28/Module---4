//Aggregation
//teacher --> id, name, address
//student --> email, course
#include<iostream>
using namespace std;

class teacher{
	public:
		int id;
		string name;
		string address;
		
		teacher(int id, string n,string a)
		{
			this->id=id;
			name = n;
			address = a;
		}
		void display()
		{
			cout<<"yes, it is running!";
		}
};

class student {
	public:
		string email, course;
		teacher *obj;//making reference of teacher class, where obj is just a name
		
		student(string e, string c, teacher *teach)//here with the helo of *obj we can access all the
		//members of the class teacher
		{
			email = e;
			course = c;
			obj = teach;
		}
		
		void display()
		{
			cout<<"The name of the the student is:"<<obj->name<<endl;
			cout<<"The id is :"<<obj->id<<endl;
			cout<<"The email id is :"<<email<<endl;
			cout<<"The course of the student is :"<<course<<endl;
			cout<<obj->name <<" = "<<obj->address<<endl;
		}
};
int main()
{
	teacher t1(1,"rahul","sola");
	student s1("rahul@gmail","computer engi...",&t1);//&t1 is like taking reference of it.
	s1.display();
	t1.display();
	return 0;
}
