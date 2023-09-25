//SORTING FIRST DIGITS OF ENTERED ELEMENTS

#include<iostream>
using namespace std;

int main()
{
 /*	int x;
	cout<<"ENTER THE SIZE OF ARRAY: ";   //FOR USER ENTERED SIZE OF ARRAY
	cin>>x;   */
	
	int a[6],i,j,c,b,n,m,t;
	cout<<"\nENTER THE ELEMENTS OF ARRAY: ";
	for(i=0; i<6; i++)
	{
		cin>>a[i];                      //FOR ENTERING ARRAY ELEMENTS
	}
	

	for(i=0; i<5; i++)
	{
		for(j=i+1; j<6; j++)
		{
			n=a[i];
			m=a[j];
			while(n!=0)
			{
				b=n%10;
				n=n/10;
			}
			//cout<<b<<"\n";
			while(m!=0)
			{
				c=m%10;
				m=m/10;
			}
		
			if(b>c)
			{
				t=a[i];
				a[i]=a[j];              
				a[j]=t;
			}
		}
		
	} 
	
	cout<<"THE SORTED ARRAY IS: ";
	for(i=0; i<6; i++)
	{
		cout<<a[i]<<"\n";
	 } 
	 
	 return 0;
}
