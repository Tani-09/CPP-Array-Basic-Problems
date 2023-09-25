//UNION OF TWO ARRAYS

#include<iostream>
using namespace std;

int main()
{
	int a[5],b[5],i,j;
	
	cout<<"ENTER THE ELEMENTS OF ARRAY 1: ";
	for(i=0; i<5; i++)
	{
		cin>>a[i];
	}
	
	cout<<"ENTER THE ELEMENTS OF ARRAY 2: ";
	for(j=0; j<5; j++)
	{
		cin>>b[j];
	}
	
	cout<<"ELEMENTS OF INTERSECTION OF BOTH ARRAYS ARE: ";
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			if(a[i]!=b[j])
			 {
			   cout<<"\n"<<b[j];
			 }
		}
	}
	
	return 0;
}
