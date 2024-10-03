// accessing protected data from base class in derived class
#include<iostream>
using namespace std;
class A{
	protected:
		int y;
	public:
		void setdata()
		{
			cout<<"Enter value for y:";
			cin>>y;
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
				cout<<"ADD is :"<<x+y;
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
