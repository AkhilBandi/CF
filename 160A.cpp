#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int b=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b=b+a[i];
	}
	sort(a,a+n);
	b=b/2;
	int c=0,i=0;
	while(c<=b)
	{
		c=c+a[n-1];
		n=n-1;
		i++;
	}
	cout<<i<<endl;
}
