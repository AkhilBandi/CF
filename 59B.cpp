#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	long long int sum=0;
	for(int i=0;i<n;i++)
	{ 
	  cin>>a[i];
	  sum+=a[i];
	}
	if(n==1 && a[0]%2==0)
	{
		cout<<0<<endl;
		return 0;
	}
	sort(a,a+n);
	if(sum%2==0)
	{
		int i=0;
		while(a[i]%2!=1 && i<n)
		{
			i++;
		}
		if(i==n)
		{
			cout<<0<<endl;
			return 0;
		}
		sum=sum-a[i];
		cout<<sum<<endl;
	}
	else
	{
		cout<<sum<<endl;
	}
}
