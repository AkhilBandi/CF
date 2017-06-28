#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,b=0;
	cin>>n;
	int a[n],k;
	cin>>k;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]>=a[k-1] && a[i]>0)
		{
			b++;
		}
	}
  cout<<b<<endl;
}
