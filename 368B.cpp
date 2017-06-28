#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m;
	cin>>n>>m;
	int c[100001]={0};
	long long int a[n],l[m],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<m;i++)
	{
		cin>>l[i];
	}
	long long int j=0;
	for(int i=(n-1);i>=0;i--)
	{   if(c[a[i]]==0)
       {  j++;
      	  	
	   }
	   b[i]=j;
	   c[a[i]]=1;
	}
	for(int i=0;i<m;i++)
	{
		cout<<b[l[i]-1]<<endl;
	}
	
}
