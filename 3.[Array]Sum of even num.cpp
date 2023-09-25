//ARRAY
//INPUT AND PRINT SUM OF EVEN INTEGERS USING 6 LENGTH ARRAY 

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
	  if(a[i]%2==0)
	    {
	      cout<<"EVEN NUM ARE: "<<a[i]<<"\n";	
		  s=s+a[i];
    	}
	}

	cout<<"SUM OF EVEN NUMBERS IS: "<<s<<"\n";
	
	return 0;
}
