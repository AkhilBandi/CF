#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int i=0,n=0,b=0;
	char d=s[0];
	while(i!=s.length())
	{
	 d=s[i];
	
	 b++;
	while(n<5 &&s[i]==d )
	{ 
		i++;
		n++;
	}
	n=0;
   }
   cout<<b<<endl;
}
