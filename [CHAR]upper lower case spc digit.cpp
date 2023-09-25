//UPPERCASE LOWERCASE SPECIIAL CHARATER

#include<iostream>
using namespace std;

int main()
{
	char c;
	cout<<"ENTER THE CHARACTER: ";
	cin>>c;
	
	if(c>=65 && c<=90)
	{
		cout<<"UPPERCASE"<<endl;
	}
	else if(c>=97 && c<=122)
	{
		cout<<"LOWERCASE"<<endl;
	}
	else if(c>=48 && c<= 57)
	{
		cout<<"DIGIT"<<endl;
	}
	else
	{
		cout<<"SPECIAL CHARACTER"<<endl;
	}
	
	return 0;
}
