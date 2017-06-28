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
		s1 += '1';
	    if(i!=(p-1))
	    {
	    	s1 +='+';
		}
	}
	if(q!=0 && p!=0)
	{
		s1+='+';
	}
	for(int i=0;i<q;i++)
	{
		s1+='2';
		if(i!=(q-1))
		{
			s1+='+';
		}
	}
	if(r!=0 && q!=0)
	{
		s1+='+';
	}
	for(int i=0;i<r;i++)
	{
		s1+='3';
		if(i!=(r-1))
		{
			s1+='+';
		}
	}
	cout<<s1<<endl;
}
