#include<iostream>
using namespace std;

int main()
{
	int a[5],i,j,c,d;
	cout<<"\nENTER THE 5 ELEMENTS OF ARRAY: ";     //
	for(i=0; i<5; i++)                           // TAKING INPUT OF ARRAY ELEMENTS
	{                                            //
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
	for(i=0; i<5; i++)
	{
		cout<<a[i]<<" ";
	}
	
//FINDING MISSING NUMBER	
	
	for(i=0; i<5; i++)
	{
		d=a[i+1]-a[i];
		//cout<<d<<"\n";
		if (d==2)
		{
			cout<<"\nMISSING NUMBER IS: "<<a[i]+1;
		}
	    if(d==0)
		{
			cout<<"\nTHE REPEATED NUMBER IS: "<<a[i];
		}

	}
	
	return 0;
}
