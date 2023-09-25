#include<iostream>
using namespace std;

int main()
{
	int x;
	cout<<"ENTER THE SIZE OF ARRAY: ";
	cin>>x;
	
	int a[x],i,m;
	cout<<"ENTER THE ELEMENTS OF ARRAY: ";
	for(i=0; i<x; i++)
	{
		cin>>a[i];
	}
	
	m=a[0];
	for(i=0; i<x; i++)
	{
		if(a[i]>m)
		{
			m=a[i];
		}
	}
	cout<<"MAXIMUM NUMBER IS: "<<m;
	
	return 0;
}
