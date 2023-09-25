
#include<iostream>
using namespace std;

int main()
{
	int a[10],i,j,c=0,d=0, m=0, e=0;
	cout<<"ENTER THE ARRAY ELEMENTS: "<<endl;
	for(i=0; i<10; i++)
	{
		cin>>a[i];
	}
	
	
	for(i=0; i<10; i++)
	{
		    
	    	d=0;
		    for(j=i-1; j>=0; j--)
	    	{
			   if(a[i]==a[j])
			    {
				  d=d+1;
		    	}
	    	}
		
	    	if(d==0)
		    {
		    	
		    	c=0;
		    	for(j=i; j<10; j++)
			    {
				    if(a[i]==a[j])
				    {
					   c=c+1;
			    	}
		    	}
		    //	cout<<"FREQUENCY OF "<<a[i]<<" is: "<<c<<"\n";
		       
		          if(c>m)
    	          { 
    	            m=c;
    	            e=a[i];
    	         
			       }	
		   
	    	}
	    	 
	}
	

    cout<<"\nNUMBER WITH MAXIMUM FREQUENCY IS: "<<e<<"with frequency "<<m<<"\n";
	return 0;
}
