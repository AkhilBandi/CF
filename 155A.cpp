#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],kmx,kmn,p=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	  if(i==0)
	  {
	  	kmx=kmn=a[i];
	  }
	  if(kmx<a[i])
	  {
	  	p++;
	  	kmx=a[i];
	  }
	  if(kmn>a[i])
	  {
	  	p++;
	  	kmn=a[i];
	  }
	}
	cout<<p<<endl;
}
