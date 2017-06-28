#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,d,sum=0;
	cin>>n>>d;
	int t[n];
	for(int i=0;i<n;i++)
	{
		cin>>t[i];
		sum+=t[i];
	}
	sum+=(n-1)*10;
	
	if(sum>d)
	{
		cout<<-1<<endl;
	}
	else
	{
		cout<<(2*(n-1)+((d-sum)/5))<<endl;
	}
}
