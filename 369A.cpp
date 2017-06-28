#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,b,p,p1=0,p2=0,w=0;
	cin>>n>>b>>p;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==1) p1++;
		else p2++;
	}
	if(p1>=b)
	{
		w=p1-b;
		b=0;
	}
	else 
	{
		b=b-p1;
	}
	p=p+b;
	if(p2>p)
	{
		w=w+(p2-p);
	}
	cout<<w<<endl;
	
}
