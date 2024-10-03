/*9.	Write a Program of Two 1D Matrix Addition using Operator Overloading*/
#include<iostream>
using namespace std;

class add{
	private:
	int a[50],b[50],size;
	public:
		int i;
		void getdata()
		{
			cout<<"Enter your arr size:";
			cin>>size;
		}
	void setdata()
	{
		for (i=0;i<size;i++)
		{
			cout<<"Enter your array element["<<i<<"] :";
			cin>>a[i];
		}
	}
	void putdata()
	{
		for(i=0;i<size;i++)
		{
			cout<<"\t"<<a[i]<<endl;
		}
	}
	void setdata1()
	{
		for (i=0;i<size;i++)
		{
			cout<<"Enter your array element["<<i<<"] :";
			cin>>b[i];
		}
	}
	void putdata1()
	{
		for(i=0;i<size;i++)
		{
			cout<<"\t"<<b[i]<<endl;
		}
	}
	add operator+(add obj)
	{
		add m1;
        m1.size = size;
        for (i=0;i<size;i++)
        {
            m1.a[i] = a[i] + obj.b[i];
        }
        return m1;
	}
	
};

int main()
{
	add a1,b1,c1;
	a1.getdata();
	a1.setdata();
	a1.putdata();
	

	b1.setdata1();
	b1.putdata1();
	
	c1 = a1+b1;
	c1.putdata();
	return 0;
}
