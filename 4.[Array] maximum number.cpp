//ARRAY
//INPUT AND PRINT MAXIMUM OF 5 INTEGERS USING 5 LENGTH ARRAY 

#include<iostream>
using namespace std;

int main()
{
	int a[5],i,m;
	cout<<"Enter 5 numbers: ";
	for(i=0; i<5; i=i+1)
	{
		cin>>a[i];
	}
	for(i=0; i<5; i=i+1)
	{
		cout<<a[i]<<"\n";
	}
	
	m=a[0];
	
	for(i=0; i<5; i=i+1)
	{
	  	if(a[i]>m)
     	{
		   m=a[i];
    	}	
	}

	cout<<"MAXIMUM NUMBER IS: "<<m;
	return 0;
}
