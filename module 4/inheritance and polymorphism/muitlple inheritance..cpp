//multiple inheritance
#include<iostream>
using namespace std;

class A{
	protected:
		int x;
		public:
			void set()
			{
				cout<<"Enter value for x:";
				cin>>x;
			}
};

class B{
	protected:
		int y;
		public:
			void get()
			{
				cout<<"Enter value for y:";
				cin>>y;
			}
	
};

class C :public A,public B{
	
		public:
			void result()
			{
				cout<<"add is :"<<x+y;
			}
	
};
int main()
{
	C c1;
	c1.get();
	c1.set();
	c1.result();
	return 0;
}
