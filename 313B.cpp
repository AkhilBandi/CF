#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int d[s.length()-1],c[s.length()-1],e=0;
	c[0]=0;
	for(int i=0;i<s.length()-1;i++)
	{
		if(s[i]==s[i+1])
		{
			d[i]=1;
			e++;
		}
		else
		{
			d[i]=0;
		}
		c[i+1]=e;
	}
	long long int m;
	cin>>m;
	long long int a[m],b[m];
	for(int i=0;i<m;i++)
	{
		cin>>a[i]>>b[i];
		cout<<c[b[i]-1]-c[a[i]-1]<<endl;
		
	}
}
