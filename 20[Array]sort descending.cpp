#include<iostream>
using namespace std;

int main()
{
	int a[5],i,j,c;
	for(i=0; i<5;i++)
	{
		cin>>a[i];
	}
	
	for(i=0; i<4; i++) //TILL I<5 BECAUSE WE HAVE TO SORT TILL N-1
	{
		for(j=i+1; j<5; j++)
		{
			if(a[i]<a[j])
			{
				c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
	}
	
	cout<<"DESCENDING DATA IS:";
	for(i=0; i<5; i++)
	{
		cout<<a[i]<<" ";
	}
	
	return 0;
}
