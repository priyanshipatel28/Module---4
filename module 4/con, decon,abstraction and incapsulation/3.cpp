/*3.	Write a C++ program to create a class called Car that has
 private member variables for company, model, and year. 
Implement member functions to get and set these variables.*/

#include<iostream>
using namespace std;

class car{
	private:
		string company;
		string model;
		int year;
		
		public:
			
			void setdata(string company,string model,int year)
			{
				this->company = company;
				this->model = model;
				this->year = year;
			}
			
			void getdata()
			{
				cout<<"The name of th company is:"<<company<<endl;
				cout<<"The name of the model is:"<<model<<endl;
				cout<<"The name of the year is :"<<year<<endl;
			}
};
int main()
{
	car c1;
		string company;
		string model;
		int year;
	cout<<"Enter the name of the company:";
	getline(cin,company);
	cout<<"Enter the name of the model:";
	//cin>>model;
	getline(cin,model);
	cout<<"Enter the year of the year:";
	cin>>year;
	c1.setdata(company,model,year);
	c1.getdata();
	return 0;
}
