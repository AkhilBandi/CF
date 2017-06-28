#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int a[n],b[n];
	pair<long long int,long long int> c[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
		c[i]=make_pair(a[i],b[i]);
	}
	sort(b,b+n);
	sort(c,c+n);
	if(b[n-1]==c[n-1].second)
	{
		cout<<b[n-1]<<endl;
	}
	else
	{
		cout<<c[n-1].first<<endl;
	}
}
