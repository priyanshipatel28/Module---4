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
			int fun()
			{
				return x;
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
			int fun1()
			{
				return y;
			}
};

class C :private A,private B{
	
		public:
			void result()
			{
				cout<<"add is :"<<fun()+fun1();
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
