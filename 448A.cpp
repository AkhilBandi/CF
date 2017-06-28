#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[3],b[3],n;
	cin>>a[0]>>a[1]>>a[2];
	cin>>b[0]>>b[1]>>b[2];
	cin>>n;
	int s1,sum1=a[0]+a[1]+a[2];
	int s2,sum2=b[0]+b[1]+b[2];
	if(sum1%5!=0)
	{
		s1=(sum1/5)+1;
	}
	else
	{
		s1=sum1/5;
	}
	if(sum2%10!=0)
	{
		s2=(sum2/10)+1;
	}
	else
	{
		s2=sum2/10;
	}
	if(s1+s2<=n)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}
