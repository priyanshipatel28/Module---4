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
		
		void getdata(int id, string n,string a)
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
		teacher *teach;//making reference of teacher class, where obj is just a name
		void setdata(string e, string c, teacher *teach)//here with the helo of *obj we can access all the
		//members of the class teacher.
		{
			email = e;
			course = c;
			this->teach = teach;
		}
		
		void display()
		{
			cout<<"The name of the the student is:"<<this->teach->name<<endl;
			cout<<"The id is :"<<this->teach->id<<endl;
			cout<<"The email id is :"<<email<<endl;
			cout<<"The course of the student is :"<<course<<endl;
			cout<<this->teach->name <<" = "<<this->teach->address<<endl;
		}
};
int main()
{
	teacher t1;
	t1.getdata(1,"rahul","sola");
	student s1;
	s1.setdata("rahul@gmail","computer engi...",&t1);
	s1.display();
	t1.display();
	return 0;
}
