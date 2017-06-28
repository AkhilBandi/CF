#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	if(n%2==0)
	{
		cout<<n/2<<endl;
	}
	else
	{
		long long int k;
		k=n-1;
		k=k/2;
		n=k-n;
		cout<<n<<endl;
	}
}
