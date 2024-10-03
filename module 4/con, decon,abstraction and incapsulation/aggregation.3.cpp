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
		
		student(string e, string c, teacher *obj)//here with the helo of *obj we can access all the
		//members of the class teacher
		{
			email = e;
			course = c;
			this->obj = obj;
		}
		
		void display()
		{
			cout<<"The name of the the student is:"<<obj->name<<endl;//reference
			cout<<"The id is :"<<obj->id<<endl;
			cout<<"The email id is :"<<email<<endl;
			cout<<"The course of the student is :"<<course<<endl;
			cout<<obj->name <<" = "<<obj->address<<endl;
		}
};
int main()
{
	int id;
	string n,a,e,c;
	cout<<"Enter name:";
	cin>>n;
	cout<<"Enter id:";
	cin>>id;
	cout<<"Enter address:";
	cin>>a;
	
	cout<<"Enter email:";
	cin>>e;
	cout<<"Enter course:";
	cin>>c;
	teacher t1(id,n,a);
	student s1(e,c,&t1);//&t1 is like taking reference of it.
	s1.display();
	t1.display();
	return 0;
}
