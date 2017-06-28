#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int p[n],q[n],sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>p[i]>>q[i];
		if((q[i]-p[i])>=2)
		{
			sum++;
		}
	}
	cout<<sum<<endl;
}
