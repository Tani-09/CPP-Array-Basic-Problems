//LINEAR SEARCH ARRAY
//SUM OF MINIMUM ON LEFT AND MAXIMUM ON RIGHT

#include<iostream>
using namespace std;

int main()
{
	int a[10],i,pos=-1,num,s=0,t=0,min,max;
	
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
	
	min=a[0];
	for(i=0; i<=pos-1; i++)
	{
	  if(a[i]<min)
	  {
	  	min=a[i];
	  }	
	}
	cout<<"\nMINIMUM ON LEFT IS: "<<min;
	
	max=a[0];
	for(i=pos+1; i<10; i++)
	{
	  if(a[i]>max)
	  {
	  	max=a[i];
	  }	
	}

    cout<<"\nMAXIMUM ON RIGHT IS: "<<max;
	
    s=min+max;
	cout<<"\nSUM OF MIN ON LEFT AND MAX ON RIGHT IS: "<<s; 
	

	return 0;
	
}
