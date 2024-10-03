//class instance
#include<iostream>
using namespace std;

class A{
	public:
		void fun()
		{
			cout<<"Hi, this is experriment!";
		}
		
};

class B{
	
	public:
		B()
		{
		A a1;// THE INSTNACE OF THE CLASS WILL ONLY WORK IF IT IS WRITTEN IN CONSTRUTOR OF THE CLASS NAME.
		a1.fun();
		}
		void fun2(){
			cout<<"I think the experiment is sccuessfull :)";	
		}
};
int main()
{
	B B1;
	B1.fun2();
	return 0;
}
