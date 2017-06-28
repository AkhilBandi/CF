#include<bits/stdc++.h>
using namespace std;
int main()
{   int p=0,q=0;
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==s[i+1])
		{
			p++;
		}
		else
		{
			p=0;
		}
		//cout<<"i="<<i<<" "<<"p="<<p<<endl;
		if(p>=6)
		{
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;

}
