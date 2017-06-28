#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j%2==0)
			{
				cout<<(j*n)-i<<" ";
				//cout<<"j="<<j;
				//cout<<" "<<"i="<<i<<endl;
			}
			if(j%2==1)
			{
				cout<<((j-1)*n)+1+i<<" ";
				//cout<<"j="<<j<<endl;
				//cout<<" "<<"i="<<i<<endl;
			}
			
		}
		cout<<endl;
	}
}
