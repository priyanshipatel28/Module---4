/*5. Assume that the test results of a batch of students are stored in three different classes.
 Class Students are storing the roll number. Class Test stores the marks obtained in two subjects
  and class result contains the total marks obtained in the test. The class result can inherit the
 details of the marks obtained in the test and roll number of students. (Multilevel Inheritance)*/
 
 #include<iostream>
 using namespace std;
 
 class students{
 	private: 
 	int roll_no;
 	public:
 		void set1(int roll)
 		{
 			roll_no = roll;
 		}
 		int set2()
 		{
 			return roll_no;
		}
 };
 class test: public students{
 	protected:
 		int m1,m2;
 	public:
 		void get1(int m1,int m2)
 		{
 			this->m1=m1;
 			this->m2=m2;
		}
 }; 
 class result: public test{
 	
 	public:
 		void display()
 		{
 			cout<<"The roll no  of the student is :"<<set2()<<endl;
 			cout<<"The marks get in first subject is :"<<m1<<endl;
 			cout<<"The marks get in second subject is :"<<m2<<endl;
			cout<<"The total marks of the subject is :"<<m1+m2<<endl;
		 }
 	
 	
 };
 int main()
 {
 	int roll, m1,m2;
 	
 	cout<<"Enter your roll no:";
 	cin>>roll;
 	cout<<"Enter your marks for two subject:";
 	cin>>m1>>m2;
 	
 	result r1;
 	r1.set1(roll);
 	r1.get1(m1,m2);
 	r1.display();
 	return 0;
 }
