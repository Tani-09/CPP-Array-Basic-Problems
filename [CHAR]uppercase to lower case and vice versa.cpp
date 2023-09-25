//UPPERCASE TO LOWERCASE

#include<iostream>
using namespace std;

int main()
{
	char c;
	cout<<"ENTER THE CHARACTER:";
	cin>>c;
	
	if(c>=65 && c<=90)
	{
		c=c+32;
		cout<<c<<endl;
	}
    if(c>=47 && c<= 122)
	{
		c=c-32;
		cout<<c<<endl;
	}

	
	return 0;
}
