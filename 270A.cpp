#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a;
	float m;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>a;
		m=double(360)/(180-double(a));
		int temp=m;
		if(m!=temp)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
}
