//Factorial of a given number using recursion 
#include <iostream>
using namespace std;
int fact(int);
main()
{
	int n;
	cout<<"enter value: ";
	cin>>n;
	cout<<"\nFactorial of "<<n<<"is" << fact(n);//function calling 
}

//function definition     wertyuioasdfghjklxcvbnm,ertyui
int fact(int num)
{
	if(num==0||num==1)
	{
		return 1;
	}
	else
	{
		return num*fact(num-1);//recursion
	}
}
