#include<iostream>
using namespace std;
int main()
{
	int factorial(int);
	int fact,num;
	cout<<"enter the number \n";
	cin>>num;
	fact=factorial(num);
	cout<<"factorial of the number is:"<<fact;
	return 0;
	
}
int factorial(int x)
{
	if(x<0)
	return (-1);
	if(x==0)
	return(1);
	else
	{
		return(x*factorial(x-1));
	}
}
