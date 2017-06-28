#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int j=0,k=n-1,s=0,d=0,i=0;
	while(j!=(k+1))
	{
		if(i%2==0)
		{
			if(a[j]>a[k])
			{
				s=s+a[j];
				j++;
			}
			else
			{
				s=s+a[k];
				k--;
			}
		}
		else
		{
				if(a[j]>a[k])
			{
				d=d+a[j];
				j++;
			}
			else
			{
				d=d+a[k];
				k--;
			}
		}
		i++;
	}
	cout<<s<<" "<<d<<endl;
}
