#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d,e;
	cin>>a>>b>>c>>d>>e;
	int k=a+b+c+d+e;
	if(k%5 !=0)
	{
		cout<<-1<<endl;
	}
	else
	{
		k=k/5;
		if(k>0)
		{
		
		cout<<k<<endl;
	    }
	    else
	    {
	    	cout<<-1<<endl;
		}
	}
}
