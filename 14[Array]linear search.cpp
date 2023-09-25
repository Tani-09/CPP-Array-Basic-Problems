//LINEAR SEARCH ARRAY

#include<iostream>
using namespace std;

int main()
{
	int a[6],i,pos=-1,num;
	
	
	for(i=0; i<6; i=i+1)
	{
		cin>>a[i];
	}
	cout<<"ENTER THE NUMBER TO BE SEARCHED: ";
	cin>>num;
	
	for(i=0; i<6; i++)
	{
		if(a[i]==num)
		{
			pos=i;
			break;    //break as no further search is to be made.
		}
	}
	if (pos==-1)
	cout<<"NOT FOUND";
	else
	cout<<"POSITION IS "<<pos+1;
	
	
	return 0;
	
}
