//2.	Write a program of to sort the array using templates

#include<iostream>
using namespace std;
template<typename T>
void array(T* arr,int size)
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				T temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main()
{
		int a[50],size;
		cout<<"Enter your arr size:";
		cin>>size;
		int i;
		for (i=0;i<size;i++)
		{
			cout<<"Enter your array element["<<i<<"] :";
			cin>>a[i];
		}
		cout<<"before sorting"<<endl;
		for(i=0;i<size;i++)
		{
			cout<<"\t"<<a[i]<<endl;
		}
		array(a,size);
		
		cout<<"after sortinf"<<endl;
		for(i=0;i<size;i++)
		{
			cout<<"\t"<<a[i]<<endl;
		}
		
		
	return 0;
}
