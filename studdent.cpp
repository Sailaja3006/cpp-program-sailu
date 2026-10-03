//illustrate the defualt arguments and acess specifiers
#include<iostream>
using namespace std;
class Student   
{
	private:
		int marks;
	public:
		void setMarks(int m=60)
		{
			marks=m;
			
		}
		void display()
		{
			cout<<"marks: "<<marks;
			
		}
};
main()
{
	Student s1, s2;
	s1.setMarks();
	cout<<"student 1: "<<endl;
	s1.display();
	s2.setMarks(90);
	cout<<"\nstudent 2: "<<endl;
	s2.display();
}
