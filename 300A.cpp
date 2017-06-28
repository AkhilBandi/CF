#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,j=0,k=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]<0)
		{
			j++;
		}
		if(a[i]>0)
		{
			k++;
		}
	}
	sort(a,a+n);

		cout<<1<<" "<<a[0]<<endl;
		if(k==0)
		{
		     cout<<2<<" "<<a[1]<<" "<<a[2]<<endl;
		     cout<<n-3<<" ";
		     for(int i=3;i<n;i++)
		     {
		     	cout<<a[i]<<" ";
			 }
		}
		else
		{  	
		    	cout<<k<<" ";
			for(int i=n-k;i<n;i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<endl;
		    cout<<n-k-1<<" ";
			for(int i=1;i<=(n-k-1);i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<endl;
		;
			
		}
		
	
}
