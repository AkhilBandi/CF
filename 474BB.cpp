#include<bits/stdc++.h>
using namespace std;
int binary_sea(long long int *a,long long int n,long long int value)
{
	long long int low=0,mid,high=n-1;
	while(low+1<high)
	{
		mid=(low+high)/2;
		if(a[mid]<=value)low=mid;
		else high=mid;	
	}
	if(a[low]>value) return low+1;
	if(a[low]==value) high=low;
	return high+1;
}
int main()
{
	long long int n, m,p=0;
	cin>>n;
	long long int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		p+=a[i];
		b[i]=p;
	}
	cin>>m;
	long long int value;
	for(int j=0;j<m;j++)
	{
		cin>>value;
		int k=binary_sea(b,n,value);
		cout<<k<<endl;
	}
}
