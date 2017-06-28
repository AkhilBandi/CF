#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,p=0;
	cin>>n;
	int a[n],b[4]={0};
	for(long long int i=0;i<n;i++)
	{
		cin>>a[i];
	    b[a[i]-1]++;	
	}
	p+=b[3];
	
	if(b[2]>=b[0])
	{
		p+=b[2];
		b[0]=0;
	}
	else
	{
		p+=b[2];
		b[0]=b[0]-b[2];
	}
	
	int m=(b[0]+(2*b[1]));
	if(m%4==0)
	{
		p+=m/4;
	}
	else
	{
		p=p+(m/4)+1;
	}
	cout<<p<<endl;
}
