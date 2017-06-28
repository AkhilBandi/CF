#include<bits/stdc++.h>
using namespace std;
char a[301][301];
int p[301],n,w[301],it,x;
bool vis[301];
int dfs(int i)
{
	if(!vis[p[i]])
	{
		x=min(x,p[i]);
	}
	w[i]=it;
	for(int j=0;j<n;j++)
	{
		if(a[i][j]=='1' && w[j]!=it)
		{
			dfs(j);
		}
	}
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
	   	it++;
	   	x=n;
	   	dfs(i);
	   	vis[x]=true;
	   	cout<<x<<" ";
	}
	cout<<endl;
}
