//NUMBER WITH MAXIMUM SUM OF DIGITS
//ARRAY

#include<iostream>
using namespace std;

int main()
{
	int a[5],n,i,m=0,b,p=0,s=0,k;
	cout<<"ENTER THE 5 INPUT NUMBERS: ";
	for(i=0; i<5; i=i+1)
	{
	  cin>>a[i];	
	}
 for(i=0; i<5; i=i+1)
 {
 	k=a[i];
 	while(a[i]!=0)
	{
		b=a[i]%10;
		a[i]=a[i]/10;
		s=s+b;	
	}
	cout<<"\nFOLLOWING IS THE SUM OF DIGITS: ";
	cout<<s<<"\n";
	if(m<s)
	{
		m=s;
		p=k;
	}
	s=0;
   
 }	
 cout<<"THE NUMBER WITH MAXIMUM SUM OF DIGITS IS: "<<p<<"\n";
 
 
 return 0;
	
}
