#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char c[n][n];
	for(int i=0;i<=(n-1)/2;i++)
	{//cout<<"i="<<i<<endl;
		for(int j=0;j<=((n-1)/2);j++)
		{ //cout<<"j="<<j<<endl;
			if(j>=((n-1)/2 -i))
			{
				c[i][j]='D';
			}
			else
			{
				c[i][j]='*';
			}
			c[n-i-1][j]=c[i][j];
			c[i][n-j-1]=c[i][j];
			c[n-i-1][n-j-1]=c[i][j];
			//cout<<"c["<<i+1<<"]["<<j+1<<"]="<<c[i][j]<<endl;
		}	
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<c[i][j];
		}
		cout<<endl;
	}
}
