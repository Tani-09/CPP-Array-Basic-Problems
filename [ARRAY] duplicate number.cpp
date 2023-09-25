//ARRAYS
//TO REMOVE THE DUPLICATE NUMBER FROM THE ENTERED ARRAY

#include<iostream>
using namespace std;
int main()
{
	int a[6],i,j,c=0;
	cout<<"ENTER THE ARRAY: "<<endl;
	for(i=0; i<6; i++)
	{
		cin>>a[i];
	}
	
	for(i=0; i<6; i++)
	{
		c=0;
		for(j=i-1; j>=0; j--)
		{
			if(a[i]==a[j])
			{   
		      c=c+1;	
			}
		
		}
	

	if(c==0)
	{
			cout<<a[i]<<" ";
	}
}
 return 0;	
	
}
