#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n];
	unordered_map<int,int> p;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int k=0;
	for(int i=n-1;i>=0;i--)
	{
		p[a[i]]++;
		if(p[a[i]]==1)
		{
			k++;
			a[i]=k;
		}
		else
		{
			a[i]=k;
		}
	}
	for(int i=0;i<m;i++)
	{
		cin>>k;
		cout<<a[k+1]<<endl;
	}
}
