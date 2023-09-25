#include<iostream>
using namespace std;

int main()
{
	int a[8],i,j,c=0,s=0;
	cout<<"ENTER THE ARRAY: "<<endl;
	for(i=0; i<8; i++)
	{
		cin>>a[i];
	}
	
	for(i=0; i<8; i++)
	{   
	    //c=0;
		for(j=i-1; j>=0; j--)
		{   
		    
			if(a[i]==a[j])
			{
				c=c+1;
			}
	    }
	
   	
	}

    cout<<c;
	return 0;
		 
	}

