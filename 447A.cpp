#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,p,x=0;
	cin>>p>>n;
	long long int a[n],b[p]={0};
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(b[a[i]%p]==0)
		{
			b[a[i]%p]=1;
		}
		else
		{
			if(x==0)
			{
				x=i+1;
			}
		}
	}
	if(x==0)
	{
		cout<<-1<<endl;
	}
	else
	{
		cout<<x<<endl;
	}
}
