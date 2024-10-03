// accessing protected data from base class in derived class
#include<iostream>
using namespace std;
class A{
	private:
		int y;
	public:
		void setdata()
		{
			cout<<"Enter value for y:";
			cin>>y;
		}
		int fun()
		{
			return y;
		}
		
};

class B: public A{
	private:
		int x;
		public:
			void setdata1()
			{
				cout<<"Enter value for x:";
				cin>>x;
			}
			void getdata()
			{
				cout<<"ADD is :"<<fun()+x;
				/*The getdata() function of class B can
				 access the fun() function of class A because
				 class B inherits from class A.*/
			}
};

int  main()
{
	B b1;
	b1.setdata();
	b1.setdata1();
	b1.getdata();
	return 0;
}
