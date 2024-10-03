/*Write a C++ program to create a class
called Person that has private member
variables
 for name, age and country. 
 Implement member functions to set 
 and get the values of these variables*/
 
 #include<iostream>
 using namespace std;
 
 class person{
 	private:
 		string name,country;
 		int age;
 	public:
 		void setdata(string s,string c, int age)
 		{
 			name = s;
 			country  = c;
 			this->age =age;
		}
		void getdata()
		{
			cout<<"The name of the person is: "	<<name<<endl;
			cout<<"The country of the person is : "<<country<<endl;
			cout<<"The age of the person is :"<<age<<endl;		
		}
 };
 int main()
 {
 	string s,c;
 	int age;
 	
 	cout<<"Enter your name:";
 	//cin>>s;
 	getline(cin,s);
 	cout<<"Enter your country:";
 	cin>>c;
 	cout<<"Enter the age:";
 	cin>>age;
 	
 	person p1;
 	p1.setdata(s,c,age);
 	p1.getdata();
 	return 0;
 }
