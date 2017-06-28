#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],x[n],sum=0;
	queue<int> q;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>x[i];
		sum+=a[i];
		if(a[i]==1)
		{
			q.push(i);
		}
	}
	cout<<sum/2<<endl;
	while(!q.empty())
	{
		int i=q.front();
		q.pop();
		if(a[i])
		{
			cout<<i<<" "<<x[i]<<endl;
		a[i]=0;
		a[x[i]]--;
		x[x[i]]=x[x[i]]^i;
		if(a[x[i]]==1)
		{
			q.push(x[i]);
		}
		}
	}
}
