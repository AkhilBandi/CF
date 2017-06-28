#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,p=0;
	long long int v;
	cin>>n>>v;
	int k[n],c[n];
	for(int i=0;i<n;i++)
	{
		cin>>k[i];
		c[i]=0;
		int a=0;
		long long int s[k[i]];
		for(int j=0;j<k[i];j++)
		{  cin>>s[j];
			if(v>s[j] && a==0)
			{   a++;
				p++;
				c[i]=i+1;
			}
			
		}
	}
	cout<<p<<endl;
	for(int i=0;i<n;i++)
	{
		if(c[i]>0)
		{
			cout<<c[i]<<" ";
		}
	}
}
