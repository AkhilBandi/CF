#include<bits/stdc++.h>
using namespace std;
int main()
{
	int  n;
	double l;
	cin>>n>>l;
	double a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	double temp,p=a[0];
	for(int i=0;i<(n-1);i++)
	{
		temp=(a[i+1]-a[i])/2;
		if(temp>p)
		{
			p=temp;
		}
	}
	temp=l-a[n-1];
	if(temp>p)
	{
		p=temp;
	}
	cout<<fixed<<setprecision(10)<<p<<endl;
}
