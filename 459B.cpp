#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int b[n];
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	sort(b,b+n);
	
	
	long long int i=0,l=(n-1),j=0,k=0,p=b[0],m=b[n-1];
	if(p==m)
	{
		cout<<0<<" "<<(n*(n-1)/2)<<endl;
	}
	else
	{
	while(p==b[i] || m==b[l])
	{
		if(p==b[i])
		{
			j++;
			i++;
		}
		if(m==b[l])
		{
			l--;
			k++;
		}
	}
	cout<<m-p<<" "<<j*k<<endl;
    }
}
