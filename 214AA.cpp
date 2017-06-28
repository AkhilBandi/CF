#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,p=0;
	cin>>n>>m;
	
	for(int i=0;i<=max(n,m);i++)
	{
		for(int j=0;j<=max(n,m);j++)
		{
			if((i*i)+j==n && i+(j*j)==m)
			{
				p++;
				//cout<<"i="<<i<<endl;
				//cout<<"j="<<j<<endl;				
			}
		}
	}
	cout<<p<<endl;
}
