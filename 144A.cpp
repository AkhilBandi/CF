#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],minn=100,maxx=1,pma,pmi;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	    if(minn>=a[i])
	    {
	    	minn=a[i];
	    	pmi=i;
		}
	    if(maxx<a[i])
	    {
	    	maxx=a[i];
	    	pma=i;
		}
	}
	sort(a,a+n);
	if(a[0]==a[n-1])
	{
		cout<<0<<endl;
		return 0;
	}
	if(pma>pmi)
	{
		cout<<(n+pma-2-pmi)<<endl;
	}
	else
	{ 
		cout<<(n+pma-1-pmi)<<endl;
	}
}
