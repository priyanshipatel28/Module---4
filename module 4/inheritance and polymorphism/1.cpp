/*1.	Assume a class cricketer is declared. 
Declare a derived class batsman from cricketer. 
Data member of batsman. Total runs, Average runs and best performance. 
Member functions input data, calculate average runs, Display data. (Single Inheritance)*/

//base class: parent
//derived class: child
#include<iostream>
using namespace std;

class cricketer{
	int player;
	public:
		
			void set()
			{
				cout<<"Enter  No. of players :";
				cin>>player;
			}
			int getdata()
			{
				return player;	
			}
		
	
};

class batsman : public cricketer{
	private:
		int T_runs,T_performance;
		float A_runs;
		
	public:
		void setdata(int T_runs, int T_performance)
		{
			this->T_runs = T_runs;
			this->A_runs = T_runs / getdata();
			//this->A_runs = T_runs;
			this->T_performance = T_performance;
		}
		
		void cal_average()
		{
			cout<<"The average runs of the player is: "<<A_runs<<endl;
		}
		
		void display()
		{
			cout<<"The Total runs :"<<T_runs<<endl;
			cout<<"The best performance :"<<T_performance<<endl;
		}
		
		void display1()
		{
			cout<<"cricketer details:"<<endl;
			display();
			cal_average();
		}
};
int main()
{
	batsman b1;
	int T_runs,T_performance;
	cout<<"Enter total runs:"<<endl;
	cin>>T_runs;
	
	cout<<"Enter best performance:"<<endl;
	cin>>T_performance;
	
	b1.set();
	b1.setdata(T_runs,T_performance);
	
	b1.cal_average();
	b1.display();
	b1.display1();
	return 0;
}
