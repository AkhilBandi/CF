#include<bits/stdc++.h>
using namespace std;

long long int  summ(long long int  n)
{
	long long int  c=0;
	while(n!=0)
	{
		c+=(n%10);
		n=n/10;
	}
	return c;
}
int main()
{
	long long int a,b,c,x, d[5000]={0},t=0,u;
	cin>>a>>b>>c;
	for( x=1;x<82;x++)
	{
		u=b;
		for(int i=0;i<a;i++)
		{
			u*=x;
		}
		u+=c;
		if(summ(u)==x && u<pow(10,9) )
		{
			d[t]=u;
			t++;
		}
	}
	cout<<t<<endl;
	for(int i=0;i<t;i++)
	{
		cout<<d[i]<<" ";
	}
}
