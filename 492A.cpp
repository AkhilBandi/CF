#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	int p=0,h=0;
	for(int i=1;i<180;i++)
	{  p+=i;
		if(n>=p)
		{
			n=n-p;
			//cout<<"p="<<p<<endl;
			//cout<<n<<endl;
			h++;
		}
		else
		{
			cout<<h<<endl;
			return 0;
		}
	}
}
