#include<iostream>
using namespace std;
 int main()
 {
 	int a[5],i,b,c=0,k;
 	for(i=0; i<5; i++)
 	{
 		cin>>a[i];
	 }
	 
	 for(i=0; i<5; i++)
	 {
	 	k=a[i];
	 	
		while(a[i]!=0)
	 	{
	 		b=a[i]%10;
	 		a[i]=a[i]/10;
		}
		cout<<b<<"\n";
		
		for(k=1; k=a[i]/2; k++)
		{
			if(b%k==0)
			{
				c=c+1;
			}
	    }
		
		if (c==1)
		{
			cout<<"THE NUMBERS WHOSE FIRST DIGITS ARE PRIME ARE: "<<k<<"\n";
		}
		c=0;
	
		
	 }
	 
	
	 
  return 0;	 
 }
