#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	char c;
	for(int i=0;i<s.length();i++)
	{
		if((s[i]-'0')>=5 )
		{  if(i!=0)
		   {
			c='0'+9-(s[i]-'0');
			s[i]=c;
			
		   }
		   else
		   {
		   	if(s[i]-'0'!=9)
		   	{
		   	  c='0'+9-(s[i]-'0');
			  s[i]=c;
		
			}
		   }
		}
	}
	cout<<s<<endl;
}
