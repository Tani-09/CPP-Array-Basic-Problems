//SORT ACCORDING TO SUM OF DIGITS OF ARRAY


#include<iostream>
using namespace std;

int main()
{
	int a[6],i,j,m,n, s=0, p=0,b,c,t;
	cout<<"ENTER THE 6 ARRAY ELEMENTS: ";
	for(i=0; i<6; i++)
	{
		cin>>a[i];
	}
	
	for(i=0; i<5; i++)
	{
		for(j=i+1; j<6; j++)
		{
			s=0;
			p=0;
			n=a[i];
			m=a[j];
			while(n!=0)
			{
				b=n%10;
				n=n/10;
			   	s=s+b;
			}
		
		
			
			while(m!=0)
			{
				c=m%10;
				m=m/10;
	            p=p+c;
			}
			
		
		
			if(s>p)
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
				
			}
		}
	}
	
	cout<<"\nTHE SORTED ARRAY ACCORDING TO SUM OF DIGITS IS: ";
	for(i=0; i<6; i++)
	{
		cout<<a[i]<<"\n";
	}
	
	return 0;
	
}
