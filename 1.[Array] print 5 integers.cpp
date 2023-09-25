//ARRAY
//INPUT AND PRINT 5 INTEGERS USING 5 LENGTH ARRAY 

#include<iostream>
using namespace std;

int main()
{
	int a[5],i;
	cout<<"Enter 5 numbers: ";
	for(i=0; i<5; i=i+1)
	{
		cin>>a[i];
	}
	for(i=0; i<5; i=i+1)
	{
		cout<<a[i]<<"\n";
	}
	
	return 0;
}
