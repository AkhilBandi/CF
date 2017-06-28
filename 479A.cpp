#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a[3],k,k1=0;
	cin>>a[0]>>a[1]>>a[2];
	
	k=a[0]*a[1]*a[2];
	k1=a[0]+a[1]+a[2];
	k=max(k,k1);
	k1=a[0]+a[1]*a[2];
	k=max(k,k1);
	k1=a[0]*(a[1]+a[2]);
		k=max(k,k1);
		k1=(a[0]+a[1])*a[2];
			k=max(k,k1);	
	cout<<k<<endl;
	
}
