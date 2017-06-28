#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,p=0;
	cin>>n>>m;
	char  s[n][m];
	int c[m]={0},a[n][m];
	for(int i=0;i<n;i++)
	{
	  for(int j=0;j<m;j++)
	  {
	  	cin>>s[i][j];
	  	a[i][j]=s[i][j]-'0';
	  	if(a[i][j]>=c[j])
	  	{
	  		c[j]=a[i][j];
	    }
	  }
	}
	/*for(int i=0;i<m;i++)
	{
		cout<<c[i]<<endl;
	}*/
	for(int i=0;i<n;i++)
	{ int q=p;
		for(int j=0;j<m;j++)
		{
			if(c[j]==a[i][j] && (q+1)!=p)
			{
				p++;
			}
		}
	}
	cout<<p<<endl;
}
