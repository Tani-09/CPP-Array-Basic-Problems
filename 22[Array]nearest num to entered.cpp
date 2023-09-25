//NEAREST NUMBER ENTERED IN ARRAY

#include<iostream>
using namespace std;

int main()
{
   	int a[10],i,pos=-1,num,j,c,k=0,e,d;
   	cout<<"\nENTER THE ARRAY ELEMENTS: ";
   	for(i=0; i<10; i=i+1)                //TAKING THE INPUT 
	{
		cin>>a[i];
	}
	
	cout<<"ENTER THE NUMBER TO BE SEARCHED: ";
	cin>>num;
//SORTING THE ELEMENTS OF ARRAY
	
   for(i=0; i<9; i++)
   {
   	for(j=i+1; j<10; j++)
   	{
   	  if(a[i]>a[j])
		 {
		   c=a[i];
		   a[i]=a[j];   //SWAPPING FOR SORT
		   a[j]=c;	
		 }	
	}
   }	
   
   cout<<"\nSORTED ARRAY IN ASCENDING ORDER IS: ";
   for(i=0; i<10; i++)
   {
   	cout<<a[i]<<"\n";
   }


//SEARCHING POSITION OF ENTERED NUMBER



	
	for(i=0; i<10; i++)
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
	
   //SEARCHING FOR THE NEAREST NUMBER	
	
    for(i=0; i<10; i++)
	{
	
		if(a[i]==num)
		{
			k=k+1;
			e=a[i+1]-a[i];
			d=a[i]-a[i-1];
			break;
			
	    }
    }
			
		if(e<d)
		 {
			cout<<"\nTHE NEAREST NUMBER IS: "<<a[i+1];
		 }
			
		else
		 {
			cout<<"\nTHE NEAREST NUMBER IS: "<<a[i-1];
	     }
			
	return 0;

}
