#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,j=0,k=0;
	cin>>n;
	long long int a[n],b[n];
	for(int i=0;i<n;i++)
	{  
	    cin>>a[i];
	    b[i]=a[i];
	    
		if(i!=0 && a[i-1]>a[i] &&j==0)
		{
			j=i-1;
		}
		if(i>=j  && a[i-1]<a[j])
		{
			k=i-1;
		}
		if(i==n-1 && k==0 )
		{
			k=n-1;
		}
	}
	cout<<j<<k<<endl;
	reverse(a+j,a+k+1);
	for(int i=0;i<n;i++)
	{ cout<<a[i]<<endl;
		if(i!=0 && a[i]<a[i-1])
		{
			cout<<"no"<<endl;
			return 0;
		}
	}
	cout<<"yes"<<endl;
	cout<<j+1<<" "<<k+1<<endl;
}
