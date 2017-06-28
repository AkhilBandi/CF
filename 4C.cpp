#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	string s;
	map<string,int> m;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		m[s]++;
		if(m[s]>1)
		{
			cout<<s<<m[s]-1<<endl;
		}
		else
		{
			cout<<"OK"<<endl;
		}
	}
}
