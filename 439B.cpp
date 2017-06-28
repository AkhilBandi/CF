#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,x,p=0;
	cin>>n>>x;
	long long int c[n];
	for(int i=0;i<n;i++)
	{
		cin>>c[i];
	}
	sort(c,c+n);
	for(int i=0;i<n;i++)
	{
		if(x!=1)
		{
			p=p+(c[i]*x);
			x--;
		}
		else
		{
			p=p+c[i];
		}
	}
	cout<<p<<endl;
}
