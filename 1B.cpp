#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	//int a[n]={0};
	string s;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		long long int p=0,q=0,r=0;
		for(int j=0;j<s.length();j++)
		{
			if(s[j]=='R')
			{
				q=j;
				p++;
			}
			if(s[j]=='C')
			{
				r=j;
				p++;
			}
		
		}
			if(p==2 && (q+1)!=r)
			{ 	string w="";
				p=0;
				for(int j=r+1;j<s.length();j++)
				{
					p=(10*p)+(s[j]-'0');
					//cout<<(s[j]-'0')<<endl;
				}
			
			while(p!=0)
			{
				if((p%26)==0)
				{
					w+='Z';
					p=(p-26)/26;
				}
				else
				{
					char c=(p%26)+'A'-1;
					//cout<<c<<endl;
					w+=c;
					p=p/26;
				}
			}
			for(int j=w.length()-1;j>=0;j--)
			{
				cout<<w[j];
			}
			for(int j=1;s[j]!='C';j++)
			{
				cout<<s[j];
			}
			cout<<endl;
		}
		else
		{
			 q=0,p=0;
			int j;
			string x="";
			for( j=0;j<s.length();j++)
			{
				if((s[j]-'0')<10 && p==0)
				{
					p=j;
				}
			}
			j=p;
			cout<<"j="<<j<<endl;
			p=0;
			for(int k=j;k<s.length();k++)
			{
				p=(10*p)+(s[k]-'0');
				cout<<"p="<<p<<endl;
			}
			for(int k=0;k<j;k++)
			{
				x+=s[k];
			}
			for(int k=0;k<x.length();k++)
			{     
				q=(26*q)+(x[k]-'A'+1);
			}
			cout<<"q="<<q<<endl;
			cout<<"R"<<p<<"C"<<q<<endl;
			}
		
	}
}
