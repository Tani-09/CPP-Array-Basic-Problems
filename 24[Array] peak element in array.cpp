#include<iostream>
using namespace std;

int main()
{
	int a[5],i;
	cout<<"ENTER THE 5 ELEMENT OF ARRAY: ";
	for(i=0; i<5; i++)
	{
		cin>>a[i];
	}
	
	for(i=0; i<5; i++)
	{
		if(a[i]>a[i-1]&& a[i]>a[i+1])
		cout<<"THE NUMBER THAT IS PEAK ELEMENT IS: "<<a[i]<<"\n";
	}
	
	return 0;
}
