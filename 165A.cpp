#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x[n],y[n];
	for(int i=0;i<n;i++)
	{
		cin>>x[i]>>y[i];
	}
	int ans=0;
	for(int i=0;i<n;i++)
	{ int t=0;
		for(int j=0;j<n;j++)
		{
		  if(x[i]==x[j] &&y[i]<y[j]) 
		  {
		  	t|=1;
		  	cout<<"t="<<t<<endl;
		  }
		  if(x[i]==x[j] && y[i]>y[j])
		  {
		  	t|=2;
		  }
		  if(x[i]<x[j] && y[i]==y[j])
		  {
		  	t|=4;
		  }
		  if(x[i]>y[j] && y[i]==y[j])
		  {
		  	t|=8;
		  }
		}
		if(t==15)
		{
			ans++;
			cout<<"1"<<endl;
		}
		cout<<ans<<endl;
	}
	cout<<ans<<endl;
}
