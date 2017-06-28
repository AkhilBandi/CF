#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string s;
	cin>>n>>s;
	for(int i=0;i<n;i++)
	{
		if(s[i]-'0'==4 || s[i]-'0'==7 )
		{
		}
		else
		{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	int sum1=0,sum2=0;
	for(int i=0;i<(n/2);i++)
	{
		sum1+=(s[i]-'0');
		sum2+=(s[n-i-1]-'0');
	}
	if(sum1==sum2)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}
