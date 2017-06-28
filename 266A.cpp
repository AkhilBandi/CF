#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	cin>>n>>t;
  string s;
	char  c[n];
	cin>>s;
	for(int i=0;i<n;i++)
	{
		c[i]=s[i];
		
	}
	while(t!=0)
	{
		for(int i=0;i<(n-1);)
		{
			if(c[i]=='B' && c[i+1]=='G')
			{
				char temp=c[i];
				c[i]=c[i+1];
				c[i+1]=temp;
				i=i+2;
			}
			else
			{
				i++;
			}
		}
		t--;
	}
	for(int i=0;i<n;i++)
	{
		cout<<c[i];
	}
	return 0;
}
