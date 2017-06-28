#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x[n],y[n];
	int p=-1,q=-1,r=-1,s=-1,sum1=0,sum2=0;
	for(int i=0;i<n;i++)
	{
		cin>>x[i]>>y[i];
		if(x[i]%2==1)
		{
			if(p==-1)
			{
				p=i+1;
			}
			q=i+1;
		}
		if(y[i]%2==1 )
		{
			if(r==-1)
			{
				r=i+1;
			}
			s=i+1;
		}
		sum1+=x[i];
		sum2+=y[i];
	}
	q=n-q,s=n-s,p=p-1,r=r-1;
	if((sum1%2)==(sum2%2))
	{
		if(sum1%2==0)
		{
			cout<<0<<endl;
		}
		else
		{
			if(p==q && q==r && r==s)
			{
				cout<<-1<<endl;
			}
			else
			{
				int temp=min(p,q);
				temp=min(temp,r);
				temp=min(temp,s);
				cout<<temp+1<<endl;
			}
		}
	}
	else
	{
		cout<<-1<<endl;
	}
	
}
