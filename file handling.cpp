#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string name,course;
	cout<<"Enter Name:";
	getline(cin,name);
	cout<<"Enter Course:";
	getline(cin,course);
	
	ofstream fout("Student.txt");
	fout<<"Name:"<<name<<endl;
	fout<<"Course:"<<course<<endl;
	fout.close();
	
	fstream fin("Student.txt");
	string line;
	cout<<"\nData From File:\n";
	while(getline(fin,line))
	{
		cout<<line<<endl;
	}
	fin.close();
	return 0;
}
