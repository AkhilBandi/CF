#include<bits/stdc++.h>
using namespace std;
int main()
{  
	int n,a[26]={0};
	cin>>n;
	string s,s1="",s2="";
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
    	a[s[i]-'a']++;
	}
	for(int i=0;i<26;i++)
	{
		if(a[i]%n!=0)
		{
			cout<<-1<<endl;
			return 0;
		}
		if(a[i]>0)
		{
			for(int j=0;j<(a[i]/n);j++)
			{
				s1+=i+'a';
				//cout<<s1<<endl;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		s2+=s1;
		//cout<<s2<<"s2"<<endl;
	}
	cout<<s2<<endl;
	
}
