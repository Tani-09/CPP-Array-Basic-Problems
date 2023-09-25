#include<iostream>
using namespace std;

int main()
{
	int a[6],i,j,d,c;
	for(i=0; i<6; i++)
	{
		cin>>a[i];
	}
	
		for(i=0; i<4; i++)
	{
		for(j=i+1; j<5; j++)
		{
			if(a[i]>a[j])
			{
				c= a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
	}
	
	cout<<"\nSORTED ARRAY IN ASCENDING IS: ";
	for(i=0; i<6; i++)
	{
		cout<<a[i]<<" ";
	}

	
	for(i=0; i<6; i++)
	{
		d=a[i]-a[i-1];
		if(d==2)
		{
			cout<<"MISSING NUMBER IS: "<<a[i+1];
		}
	}
	
	
	return 0;
	
	
}
