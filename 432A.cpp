#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n],p=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]<=(5-k))
		{
			p++;
		}
	}
	cout<<p/3<<endl;
}
