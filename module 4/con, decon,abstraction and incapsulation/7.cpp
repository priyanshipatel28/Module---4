/*7.	Write a C++ program to implement a class called Date
 that has private member variables for day, month, and year. 
 Include member functions to set and get these variables,
 as well as to validate if the date is valid.*/
 
 #include<iostream>
 using namespace std;
 
 class date{
 	private:
 		int day;
 		string month;
 		int year;
 		int count = 0;
 	public:
 		
 		void setdata(int d,int m,int y)
 		{
 			if((m==2 && y%4 == 0) && (d>=1 && d<=29))
			{
			 	month = "February";
			 	year = y;
			 	day = d;
			}
			else if ((m==2 && y%4 != 0 ) && (d>=1 && d<=28))
			{
				month = "February";
				year = y;
			 	day = d;
			}
			else if ((m==4 || m==6 ||m==9||m==11) && (d>=1 && d<=30))
			{
				year = y;
			 	day = d;
				switch(m)
				{
					case 4:
						month = "April";
					break;
					case 6:
						month = "June";
					break;
					case 9:
						month = "September";
					break;
					case 11:
						month = "November";
					break;
				}
			}
				else if ((m==1 || m==3||m==5||m==7||m==8||m==10||m==12)&&(d<=1 &&d<=31))
				{
					year = y;
			 		day = d;
					switch (m)
					{
						case 1:
							month = "January";
						break;
						case 3:
							month = "March";
						break;
						case 5:
							month = "May";
						break;
						case 7:
							month = "July";
						break;
						case 8:
							month = "August";
						break;
						case 10:
							month = "October";
						break;
						case 12:
							month = "December";
						break;
					}
				}
				else
				{
					count ++;
				}
		}
		
		void display()
		{
			if(count == 0)
			{
				cout<<day<<" "<<month<<","<<year<<endl;
			}
			else
			{
				cout<<"Invalid date";
			}
		}	
		
 };
 int main()
 {
 	int d, m, y;
 	
 	cout<<"D:";
 	cin>>d;
 	cout<<"M:";
 	cin>>m;
 	cout<<"Y:";
 	cin>>y;
 	
 	date d1;
 	d1.setdata(d,m,y);
 	d1.display();
 	return 0;
 }
