#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k,sum,sum1=1000000009,p=-1;
	cin>>n>>k;
	int a,h[n+1]={0};
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		if(i==0)
		{
			h[i]=a;
		}
		else
		{
			h[i]=h[i-1]+a;
		}
		if(i>=(k))
		{
			if(h[i]-h[i-k] <sum1)
			{
				sum1=h[i]-h[i-k];
				p=i-k+1;
			}
		}
	}
	

	cout<<p<<endl;
}
