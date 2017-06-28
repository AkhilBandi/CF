#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],b[n]={0},p=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==0)
		{
			p++;
		}
		b[i]=p;
	}
	
	{ int maxx=0;
		for(int i=0;i<(n);i++)
		{
			for(int j=i;j<n;j++)
			{ int temp,temp1;
				if(a[i]==0)
				{
					temp=b[j]-b[i]+1;
					temp1=(j-i+1)-temp;
				}
				else
				{ 
					temp=b[j]-b[i];
					temp1=(j-i+1)-temp;
				}
				int t=(n-p)-temp1+temp;
				maxx=max(t,maxx);
			}
		}
		cout<<maxx<<endl;
	}
}
