#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,c,k=0;
	cin>>n>>c;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(i!=0 && a[i]<a[i-1])
		{
			k=max(k,a[i-1]-a[i]);
			
		}
	}
	k=k-c;
	if(k>0)
	{
		cout<<k<<endl;
	}
	else
	{
		cout<<0<<endl;
	}
}
