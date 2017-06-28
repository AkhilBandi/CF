#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	if(n==0)
	{
		cout<<"O-|-OOOO"<<endl;
	}
	while(n!=0)
	{
		int t=n%10;
		n=n/10;
		if(t>=5)
		{
			cout<<"-O|";
			t=t-5;
		}
		else
		{
			cout<<"O-|";
		}
		if(t==1)
		{
			cout<<"O-OOO"<<endl;
		}
		if(t==2)
		{
			cout<<"OO-OO"<<endl;
		}
		if(t==3)
		{
			cout<<"OOO-O"<<endl;
		}
		if(t==4)
		{
			cout<<"OOOO-"<<endl;
		}
		if(t==0)
		{
			cout<<"-OOOO"<<endl;
		}
	}
	return 0;
}
