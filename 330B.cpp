#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
	cin>>n>>m;
	vector<int> a(n+1,0);
	int x,y;
	for(int i=0;i<m;i++)
	{
		cin>>x>>y;
		a[x]=1;
		a[y]=1;
	}
	int i;
	for( i=1;i<=n;i++)
	{
		if(a[i]==0)
		{
			break;
		}
	}
	cout<<n-1<<endl;
	for(int j=1;j<=n;j++)
	{
		if(i!=j)
		{
			cout<<i<<" "<<j<<endl;
		}
	}
}
