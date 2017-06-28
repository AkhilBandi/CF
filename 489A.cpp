#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,b[3001]={0},c[3001]={0};
	cin>>n;
	long long int a[n],p=0;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<(n-1);i++)
	{
		int k=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[k]) 
			 k=j;
		}
		if(k!=i)
		{ b[p]=i;
		  c[p]=k;
			p++;
		}
		int temp=a[i];
		a[i]=a[k];
		a[k]=temp;
	}
	
	cout<<p<<endl;
	for(int i=0;i<p;i++)
	{
		cout<<b[i]<<" "<<c[i]<<endl;
	}
}
