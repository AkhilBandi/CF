#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,r;
	cin>>s;
	r=s;
	int p=0,q=0;
	for(int i=0;i<s.length();i++)
	{
		int t=s[i];
		if(t>=97 && i==0)
		{
			char c=t-97+'A';
			s[i]=c;
			p++;
		}
		if(t<97 && i==0)
		{
			char c=t-65+'a';
			s[i]=c;
		}
		if(i!=0 && t<97)
		{
			char c=t-65+'a';
			s[i]=c;
			q++;
		}
	}
	if(q==s.length()-1)
	{
		cout<<s<<endl;
	}
	else
	{
		cout<<r<<endl;
	}
}
