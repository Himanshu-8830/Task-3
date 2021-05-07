#include<iostream>
using namespace std;
int main()
{
	int *p,i;
	int numbers[5];
	cout<<"\nEnter elements:";
	p=numbers;
	for(i=0;i<5;i++)
	{
		cin>>*p;
		p++;
	}
	cout<<"\nyou entered:";
	p=numbers;
	for(i=0;i<5;i++)
	{
		cout<<*p<<"\n";
		p++;
	}
	return 0;
}
