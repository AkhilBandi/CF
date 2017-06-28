#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int b,a;
	long long int n,m;
	cin>>n>>m>>a;
	b=ceil(double(n)/a);
	a=ceil(double(m)/a);
	b=a*b;
	cout<<b<<endl;
}
