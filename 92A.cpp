#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i=1;
	cin>>n>>m;
	int k=(n*(n+1))/2;
	m=m%k;
	while(m-i>=0 && i!=(n+1))
	{
		m=m-i;
		i++;
	}
	cout<<m<<endl;
	
}
