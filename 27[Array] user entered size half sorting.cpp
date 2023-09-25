//USER ENTERED ARRAY SIZE
//HALF ARRAY ASCENDING SORT HALF ARRAY DESCENDING SORT
#include<iostream>
using namespace std;

int main()
{
	int x;
	cout<<"\nENTER THE SIZE OF ARRAY: ";
	cin>>x;
	
	int a[x],i,j,c;
	cout<<"\nENTER THE ELEMENTS OF ARRAY: ";
	for(i=0; i<x; i++)
	{
		cin>>a[i];
	}
	
	for(i=0; i<x/2-1; i++)
	{
		for(j=i+1; j<x/2; j++)
		{
			if(a[j]<a[i])
			{
				c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
	}
	
	cout<<"\nTHE FIRST HALF SORTED ASCENDING SERIES IS: ";
	for(i=0; i<x/2; i++)
	{
		cout<<a[i]<<"\n";
	}
	
	
	for(i=x/2; i<x-1; i++)
	{
		for(j=i+1; j<x; j++)
		{
			if(a[j]>a[i])
			{
				c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
	}
	
	cout<<"\nTHE SECOND HALF SORTED DESCENDING SERIES IS: ";
	for(i=x/2; i<x; i++)
	{
		cout<<a[i]<<"\n";
	}
	
	return 0;
}
