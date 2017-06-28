#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	int c;
	while(a!=0)
	{
		c=a;
		a=b%a;
		b=c;
	}
	return b;
}
int main()
{
	int n,m;
	cin>>n;
	int x[n];
	cin>>x[0];
	m=x[0];
	for(int i=1;i<n;i++)
	{
		cin>>x[i];
		m=gcd(m,x[i]);
	}
	cout<<n*m<<endl;
}
