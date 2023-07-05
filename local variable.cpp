#include<iostream>
using namespace std;

void printHi()
{
	cout<<"Hi"<<endl;
	return;
}
int sum(int a, int b)
{
	int c;
	c=a+b;
	cout<<"the value of c is"<<c;
	return c;
}
	int main()
	{
		printHi();
		int a,b;
		int c;
		a=4;
		b=6;
		c=25;
		int d;
		d=sum(a,b);
	//	cout<<"the sum is equal to"<<d;
	cout<<"th value of c is"<<c;
		
		return 0;
	}

