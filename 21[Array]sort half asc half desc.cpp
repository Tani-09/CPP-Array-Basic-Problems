//SORTING ARRAY IN ASCENDING

#include<iostream>
using namespace std;

int main()
{
	int a[10],i,j,c;
	cout<<"ENTER THE ELEMENTS OF ARRAY SIZE 10: ";
	for(i=0; i<10;i++)
	{
		cin>>a[i];
	}
	
	for(i=0; i<4; i++) //TILL I<5 BECAUSE WE HAVE TO SORT TILL N-1
	{
		for(j=i+1; j<5; j++)
		{
			if(a[i]>a[j])
			{
				c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
	}
	
	cout<<"\nASCENDING DATA ON LEFT HALF IS:";
	for(i=5; i<9; i++) //TILL I<5 BECAUSE WE HAVE TO SORT TILL N-1
	{
		for(j=i+1; j<10; j++)
		{
			if(a[i]<a[j])
			{
				c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
	}
	
	for(i=0; i<5; i++)
	{
		cout<<a[i]<<" ";
	}
	
	cout<<"\nDESCENDING DATA ON LEFT HALF IS:";
	
	
	for(i=5; i<10; i++)
	{
		cout<<a[i]<<" ";
	}
	
	return 0;
}
