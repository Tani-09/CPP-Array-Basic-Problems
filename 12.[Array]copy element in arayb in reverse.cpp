#include<iostream>
using namespace std;

int main()
{
	int a[5],b[5],i;
	
	for(i=0; i<5; i++)
	{
		cin>>a[i];
	}
	cout<<"\nCOPIED ELEMENTS FROM ARRAY A IN REVERSE ORDER ARE: ";
	for(i=5; i>=0; i--)
	{
		b[i]=a[i];
		cout<<b[i]<<"\n";
	}
	
	return 0;
}
