#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	string s,s1;
	getline(cin,s1);
	for(int i=0;i<t;i++)
	{ 
		getline(cin,s);
		if(s.length()>10)
		{
			cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
		}
		else
		cout<<s<<endl;
	}
}
