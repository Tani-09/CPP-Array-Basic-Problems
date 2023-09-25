//ARRAY
//INPUT AND PRINT SUM OF 6 INTEGERS USING 6 LENGTH ARRAY 

#include<iostream>
using namespace std;

int main()
{
	int a[6],i,s=0;
	cout<<"Enter 6 numbers: ";
	for(i=0; i<6; i=i+1)
	{
		cin>>a[i];
	}
	for(i=0; i<6; i=i+1)
	{
		cout<<a[i]<<"\n";
		s=s+a[i];
	}
	cout<<s<<"\n";
	
	return 0;
}
