//SUM OF FIRST DIGITS OF ENTERED NUMERS
//ARRAY

#include<iostream>
using namespace std;

int main()
{
	
	int a[5],b,i,s=0;
	cout<<"Enter the number: ";
	for(i=0; i<5; i=i+1)
	{
		cin>>a[i];
	}
	

	
	for(i=0; i<5; i=i+1)
	{
	   	while(a[i]!=0)
	{

		b=a[i]%10;
		a[i]=a[i]/10;
		
	}
    cout<<b<<"\n";
    s=s+b;
  
	}
	
	
 	
   	cout<<"Sum of first digits is: "<<s<<"\n";
	
	return 0;
}
