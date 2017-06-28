#include<bits/stdc++.h>
using namespace std;
int main()
{
	int r,c,p=0,q=0,e=0;
	cin>>r>>c;
	char a[r][c];
	int d[10]={0},b[10]={0};
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>a[i][j];
			if(a[i][j]=='S')
			{
				p++;
				b[i]=1;
				d[j]=1;
			}
		}
	}
	for(int i=0;i<10;i++)
	{
		q+=b[i];
		e+=d[i];
	}
	
	p=(q*e);
	
	cout<<(r*c)-p<<endl;
}
