#include<iostream>
using namespace std;
int x = 10;
namespace Demo
{
	int x = 20;
}
main()
{
	cout<<"Global variable value x: "<<x;
	cout<<"\nnamespace variable value x: "<<Demo::x;
}
