#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int a[n],sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	int p=n;
	sum=n*a[n-1];
	for(int i=(n-2);i>=0;i--)
	{
		sum+=(p*a[i]);
		p--;
	}
	cout<<sum<<endl;
}
