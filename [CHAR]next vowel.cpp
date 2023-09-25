//NEXT VOWEL

#include<iostream>
using namespace std;

int main()
{
	char c;
	cout<<"ENTER THE CHARACTER";
	cin>>c;
	
	if(c=='a'||c=='A')
	   {
	   	c=c+4;
	   	cout<<"NEXT VOWEL IS: "<<c;
	   }
	   
    else if(c=='e'||c=='E')
	   {
	   	c=c+4;
	   	cout<<"NEXT VOWEL IS: "<<c;
	   }
	   
   	else if(c=='i'||c=='I')
	   {
	   	c=c+6;
	   	cout<<"NEXT VOWEL IS: "<<c;
	   } 
	   
 	else if(c=='o'||c=='O')
	   {
	   	c=c+6;
	   	cout<<"NEXT VOWEL IS: "<<c;
	   }
	   
	 else if(c=='u'||c=='U')
	   {
	   
	   	cout<<"NEXT VOWEL IS NONE "<<endl;
	   }
	   
	   return 0;
}
