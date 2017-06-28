#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s,t,p=0,q=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>s>>t;
	int m,l;
	l=min(s,t)-1;
	m=max(s,t)-1;
	while(m!=l)
	{
		p+=a[m];
		if(m==(n-1))
		{
			m=0;
		}
		else
		{
			m++;
		}
	}
	while(l!=max(s,t)-1)
	{
		q+=a[l];
		l++;
	}
	cout<<min(p,q)<<endl;
}
