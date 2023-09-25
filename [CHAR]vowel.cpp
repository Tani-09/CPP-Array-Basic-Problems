//CHARACTER

#include<iostream>
using namespace std;

int main()
{
	char c;
	cout<<"ENTER THE CHARACTER: ";
	cin>>c;
	
	if(c=='A'||c=='B'||c=='C'||c=='D'||c=='E'
	||c=='a'||c=='b'||c=='c'||c=='d'||c=='e')
	{
		cout<<"VOWEL"<<endl;
	}
	else
	{
		cout<<"CONSONANT"<<endl;
	}
	
	return 0;
}
