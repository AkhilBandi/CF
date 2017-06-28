#include<bits/stdc++.h>
int dist(int n)
{
	int a=n%10;
	n=n/10;
	int b=n%10;
	n=n/10;
	int c=n%10;
	n=n/10;
	int d=n;
	if(a==b || a==c || a==d || b==c || b==d || c==d)
	{
		return 1;
	}
	else
	{
		return 2;
	}
}
using namespace std;
int main()
{
	int n;
	cin>>n;
	int p=1;
	while(p==1)
	{
		n++;
		int k=dist(n);
		if(k==2)
		{
			cout<<n<<endl;
			p=2;
		}
		else
		{
			p=1;
		}
	}
}
