#include<bits/stdc++.h>
using namespace std;
int main()
{ long long int p=0,q=0,r=0;
	string s,s1="";
	cin>>s;
	for(int i=0;i<s.length();i++ ,i++ )
	{
		if(s[i]=='1')
		{
			p++;
		}
		if(s[i]=='2')
		{
			q++;
		}
		if(s[i]=='3')
		{
			r++;
		}
	}
  for(int i=0;i<p;i++)
  {
  	s[2*i]='1';
  }
  for(int i=0;i<q;i++)
  {
  	s[(2*p)+(2*i)]='2';
  }
  for(int i=0;i<r;i++)
  {
  	s[(2*p)+(2*q)+(2*i)]='3';
  }
	cout<<s<<endl;
}
