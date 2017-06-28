#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,p=0;
	string s;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		if(s[1]=='+')
		{
			p++;
		}
		else
		{
			p--;
		}
	}
	cout<<p<<endl;
}
