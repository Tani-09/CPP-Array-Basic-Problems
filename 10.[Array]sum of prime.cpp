//ARRAY
//INPUT AND PRINT PRIME NUMBERS OF ARRAY AND THEIR SUM 

#include<iostream>
using namespace std;

int main()
{
	int a[5],i,k,c=0,s=0;
	cout<<"Enter 5 numbers: ";
	for(i=0; i<5; i=i+1)
	{
		cin>>a[i];
	}
	
	for(i=0; i<5; i=i+1)
	{
		for(k=1; k<=a[i]/2; k=k+1)
		{
			if(a[i]%k==0)
			{
			  c=c+1;
			}
		}
    
		if(c==1)
		{
		
				s=s+a[i];
		}
		c=0;
   }

  cout<<s<<"\n";	

	return 0;
}
