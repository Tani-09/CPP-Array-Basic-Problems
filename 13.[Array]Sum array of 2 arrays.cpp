#include<iostream>
using namespace std;

int main()
{
	int a[5],b[5],c[5],i;
	cout<<"ELEMENTS OF ARRAY A ARE: ";
	for(i=0; i<5; i++)
	{
		cin>>a[i];
	}
	cout<<"\nELEMENTS FROM ARRAY B ARE: ";
	for(i=0; i<5; i++)
	{
		cin>>b[i];
	}
	cout<<"SUM ARRAY IS: ";
	for(i=0; i<5; i++)
	{
		c[i]=a[i]+b[i];
		cout<<c[i]<<"\n";
	}
	
	return 0;
}
