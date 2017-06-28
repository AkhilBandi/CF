#include<bits/stdc++.h>
using namespace std;
int main()
{  int n,j=0;
	cin>>n;
	string s;
	cin>>s;
	int a[n],b[n];
	for(int i=0;i<(2*n);i++)
	{
		if(i<n)
		{
			a[i]=(s[i]-'0');
		}
		else
		{
			b[i-n]=(s[i]-'0');
		}
	}
	sort(a,a+n);
	sort(b,b+n);
	if(a[0]>b[0])
	{
		for(int i=1;i<n;i++)
		{
			if(a[i]<=b[i])
			{
				cout<<"NO"<<endl;
				return 0;
			}
		}
		cout<<"YES"<<endl;
	}
	else
	{
		if(a[0]<b[0])
		{
			for(int i=1;i<n;i++)
		   {
			if(a[i]>=b[i])
			{
				cout<<"NO"<<endl;
				return 0;
			}
		   }   
		cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
