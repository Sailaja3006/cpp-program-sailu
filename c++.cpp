#include<iostream>
#include<cmath>
using namespace std;
main()
{
	int a,b,c,d,r1,r2;
	cout<<"Enter a,b and c values: ";
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if(d>0)
	{
	   r1=(-b+sqrt(d))/(2*a);
	   r2=(-b-sqrt(d))/(2*a);
	   cout<<"Roots are Real:";
	   cout<<"Root1: "<<r1;
	   cout<<"Root2: "<<r2;  	
	}
	else if(d==0)
	{
		r1=b/(2*a);
		cout<<"Roots are Equal";
		cout<<"Root is: "<<r1;
	
	}
	else
	{
		cout<<"Roots are Imaginary/Complex";
		cout<<"Root 1: "<<r1;
		cout<<"Root 2: "<<r2;	
		}	
	}
