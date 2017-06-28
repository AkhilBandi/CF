#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int p=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
		p=p+(a[i]%2);
	}
	
	if(p>1)
	{
		for(int i=0;i<n;i++)
		{
			if(a[i]%2==0)
			{
				cout<<i+1<<endl;
			}
		}
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			if(a[i]%2 !=0)
			{
				cout<<i+1<<endl;
			}
		}
	}
	
}
