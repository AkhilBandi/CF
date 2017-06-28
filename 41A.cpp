#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2,s3;
	cin>>s1>>s2;
	if(s1.length()==s2.length())
	{
	
	 for(int i=0;i<s1.length();i++)
	 { 
		if(s1[i]==s2[s1.length()-1-i])
		{
		}
		else
		{
			cout<<"NO"<<endl;
			return 0;
		}
	 }
	 cout<<"YES"<<endl;
    }
    else
    {
    	cout<<"NO"<<endl;
	}
}
