//ARRAY
//INPUT AND PRINT MINIMUM + MAXIMUM OF 5 INTEGERS

#include<iostream>
using namespace std;

int main()
{
	int a[5],i,min,max,s;
	cout<<"Enter 5 numbers: ";
	for(i=0; i<5; i=i+1)
	{
		cin>>a[i];
	}
   /*	for(i=0; i<5; i=i+1)
	{
		cout<<a[i]<<"\n";
	}  */
	
	min=a[0];
	
	for(i=0; i<5; i=i+1)
	{
	  	if(a[i]<min)
     	{
		   min=a[i];
    	}	
	}

   max=a[0];
	cout<<"\nMINIMUM NUMBER IS: "<<min;
	
		for(i=0; i<5; i=i+1)
	{
	  	if(a[i]>max)
     	{
		   max=a[i];
    	}	
	}
    s=min+max;
	cout<<"\nMAXIMUM NUMBER IS: "<<max;
	cout<<"\nSUM OF MINIMUM AND MAXIMUM IS: "<<s<<"\n";
	return 0;
}
