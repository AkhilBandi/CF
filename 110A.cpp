#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,p=0,q=0;
	cin>>n;
	while(n!=0)
	{   q++;
		if(n%10!=4 && n%10!=7)
		{ 
			p++;
		}
		n=n/10;
	}
	if((q-p)==4 || (q-p)==7)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}
