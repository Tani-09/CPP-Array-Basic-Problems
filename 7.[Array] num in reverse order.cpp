//ARRAY
//INPUT AND PRINT 5 INTEGERS IN REVERSE ORDER 

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
  /*	for(i=4; i>=0; i=i-1)
	{
		cout<<a[i]<<"\n";
	}  */
	
		for(i=0; i<5; i=i+1)
	{
		cout<<a[4-i]<<"\n";
	}
	
	
	return 0;
}
