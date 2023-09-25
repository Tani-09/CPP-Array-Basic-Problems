//LINEAR SEARCH ARRAY
//GREATER OF SUM TO LEFT OF POSITION AND SUM TO RIGHT OF POSITION

#include<iostream>
using namespace std;

int main()
{
	int a[10],i,pos=-1,num,s=0,t=0;
	
	for(i=0; i<10; i=i+1)
	{
		cin>>a[i];
	}
	cout<<"\nENTER THE NUMBER TO BE SEARCHED: ";
	cin>>num;
	
	for(i=0; i<10; i++)
	{
		if(a[i]==num)
		{
			pos=i;
			break;    //break as no further search is to be made.
		}
	}
	
		if (pos==-1)
	cout<<"\nNOT FOUND";
	else
	cout<<"\nPOSITION IS "<<pos+1;
	
	
	for(i=0; i<10; i++)
	{
		for(i=0; i<=pos-1; i++)
    	{
		  s=s+a[i];
    	}
	    cout<<"\nSUM TO LEFT OF POSITION IS: "<<s;
	
	    for(i=pos+1; i<10; i++)
	   {
		  t=t+a[i];
       }
	    cout<<"\nSUM TO RIGHT OF POSITION IS: "<<t;
	}

	
    if(s>t)
	cout<<"\nSUM TO LEFT IS GREATER ";
	
	else
	cout<<"\nSUM TO RIGHT IS GREATER "; 
	
	
	return 0;
	
}
