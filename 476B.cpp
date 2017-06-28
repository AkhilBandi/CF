#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
int multi(int n)
{
	double c=1;
	for(int i=0;i<n;i++)
	{
		c=c*(1/2);
	}
	return c;
}
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int count,count1,count2;
	double p,q;
	for(int i=0;i<s1.length();i++)
	{
		if(s1[i]=='+')
		{
			count++;
		}
		else
		{
			count--;
		}
		if(s2[i]=='+')
		{
			count1++;
		}
		else
		{
			if(s2[i]=='-')
			{
				count1--;
			}
			else
			{
				count2++;
			}
		}
	}
	count=count-count1;
	if(count<0)
	{
		count=-count;
	}
	if(count%2==1 && count2%2==1 && count<=count2)
	{
		p=double(fact(count2))/double((fact(count2-count) *fact(count)));
		p=p*multi(count2);
	}
	else
	{
		if(count%2==0 && count2%2==0 && count<=count2)
		{
			int x=(count2-count)/2;
			p=double(fact(count2))/double((fact(count2-x) *fact(x)));
			p=p*multi(count2);
		}
		
		
	}
	cout<<"P="<<p<<endl;
}
