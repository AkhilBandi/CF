#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int t[n],p=0,q=0,r=0,a[5001],b[5001],c[5001];
	for(int i=0;i<n;i++)
	{
		cin>>t[i];
		if(t[i]==1)
		{
			a[p]=i+1;
			p++;
		}
		if(t[i]==2)
		{
			b[q]=i+1;
			q++;
		}
		if(t[i]==3)
		{
			c[r]=i+1;
			r++;
		}
	}
	int temp=min(p,q);
	temp=min(temp,r);
	cout<<temp<<endl;
	for(int i=0;i<temp;i++)
	{
		cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;
	}
}
