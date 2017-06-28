#include<bits/stdc++.h>
using namespace std;
vector<int> v,x,y;
int n;

int dfs(int i)
{
	v[i]=1;
	for(int j=0;j<n;j++)
	{
	   if(v[i]==0 &&(x[i]==x[j] || y[i]==y[j]))
	   {
	   	   dfs(j);
	   }	
	}
}
int main()
{
	
	cin>>n;
	x.clear();
	y.clear();
	x.resize(n);
	y.resize(n);
	v.clear();
	v.resize(n,0);
	int t=0;
	for(int i=0;i<n;i++)
	{
		cin>>x[i]>>y[i];
	}
	for(int i=0;i<n;i++)
	{
		if(v[i]==0)
		{
			t++;
			dfs(i);
		}
	}
	cout<<t-1<<endl;
}
