#include<bits/stdc++.h>
using namespace std;
void binary_search(long long int *b,long long int n,long long int value)
{
	long long int low=0,mid,high=n-1;
	
	while(mid!=low)
	{ //cout<<mid<<endl;
	//cout<<" "<<low<<endl;
	//cout<<" "<<high<<" "<<endl;
	  mid=(low+high)/2;
	   if(b[low]==value)
		{
			cout<<low+1<<endl;
			break;
		}
		if(b[high]==value)
		{
			cout<<high+1<<endl;
			break;
		}
		if(b[mid]==value)
		{
			cout<<mid+1<<endl;
			break;
		}
		if(b[mid]>value)
		{
			high=mid;
		}
		if(b[mid]<value)
		{
			low=mid;
		}	
	}
	if(low==mid)
	{
		cout<<low+1<<endl;
	}
}
int main()
{
	long long int n,m,p=0;
	int k,j;
	cin>>n;
	long long int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		p+=a[i];
		b[i]=p;
		cout<<b[i]<<endl;
	}
	cin>>m;
	long long int q[m];
	for(int i=0;i<m;i++)
	{
		cin>>q[i];
		binary_search(b,n,q[i]);
		//cout<<k<<endl;
	}
}
