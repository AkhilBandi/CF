#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,p,q,max=0;
	string s;
	for(int i=0;i<n;i++)
    { q=0;
    	getline(cin,s);
    	for(int j=s.length()-1;j>=0;j--)
    	{
    		if(s[j]==" ")
    		{
    			p=j;
    			break;
			}
		}
		if(s[p+1]!="-")
		{
			for(int j=p+1;j<s.length();j++)
			{
				q=(10*q)+(s[j]-'0');
			}
			if(max<q)
			{
				max=q;
			}
		}
	}
}
