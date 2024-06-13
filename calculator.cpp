#include<iostream>
using namespace std;
void add(int a,int b)
{
	int sum;
	sum=a+b;
	cout<<"Sum="<<sum;
}
void subtract(int a,int b)
{
	int diff;
	diff=a-b;
	cout<<"Difference="<<diff;
}
void multiply(int a,int b)
{
	int pro;
	pro=a*b;
	cout<<"Product="<<pro;
}
void division(int a,int b)
{
	int r;
	r=a/b;
	cout<<"Result="<<r;
}
int main()
{
	int ch,a,b;
	do
	{
	cout<<"\n1.Add 2.Subtract 3.Multiply 4.Division 5.Exit\n";
	cout<<"\nEnter your choice\n";
	cin>>ch;
	switch(ch)
	{
		case 1: cout<<"Enter two numbers\n";
		        cin>>a>>b;
		        add(a,b);
		        break;
		case 2: cout<<"Enter two numbers\n";
		        cin>>a>>b;
		        subtract(a,b);
		        break;  
		case 3: cout<<"Enter two numbers\n";
		        cin>>a>>b;
		        multiply(a,b);
		        break;  
		case 4: cout<<"Enter two numbers\n";
		        cin>>a>>b;
		        division(a,b);
		        break;     
		case 5: cout<<"\nThank You";
		        break;
		default: cout<<"\nWrong choice";
		        break;				  		     		      
	}
}while(ch<=4);
}
