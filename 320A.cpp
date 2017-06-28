#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int k=s.length()-1;
	while(k!=-1)
	{
		if(s[k]=='1')
		{
			k--;
		}
		else
		{
			if(s[k]=='4')
			{
				if(s[k-1]=='1')
				{
					k=k-2;
				}
				else
				{
					if(s[k-1]=='4')
					{
						if(s[k-2]=='1')
						{
							k=k-3;
						}
						else
						{
							cout<<"NO"<<endl;
							return 0;
						}
					}
					else
					{
						cout<<"NO"<<endl;
						return 0;
					}
				}
			}
			else
			{
				cout<<"NO"<<endl;
				return 0;
			}
		}
	}
	cout<<"YES"<<endl;
}
