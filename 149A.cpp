#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[12],p=0;
	for(int i=0;i<12;i++)
	{
		cin>>a[i];
	}
	sort(a,a+12);
	//cout<<a[11]<<endl;
	if(n==0)
	{
		cout<<0<<endl;
		return 0;
	}
	else
	{
	for(int i=11;i>=0;i--)
	{
		if(n>0)
		{
			n=n-a[i];
			//cout<<n<<endl;
			//cout<<a[i]<<endl;
			p++;
		}
	}
    }
    if(p==12 && n>0)
    {
    	cout<<-1<<endl;
	}
	else
	{
		cout<<p<<endl;
	}
}
