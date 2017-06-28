#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,t,c;
	cin>>n>>t>>c;
	long long int a[n],p[n]={0},sum=0,j=1;
	p[0]=-1;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>t)
		{
			p[j]=i;
			j++;
		}
	}
	p[j]=n;
	//cout<<"j="<<j<<endl;
	/*for(int i=0;i<=j;i++)
	{
		cout<<p[i]<<endl;
	}*/
	long long int q[j+1];
	for(int i=0;i<j;i++)
	{
	     q[i]=p[i+1]-p[i]-1;
	     if(q[i]>=c)
	     {
	     	sum+=q[i]-c+1;
		 }
	}
	cout<<sum<<endl;
	
}
