#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	for(int i=0;i<s1.length();i++)
	{
		int t1=s1[i];
		if(t1<97)
		{
			t1=t1+32;
		}
		int t2=s2[i];
		if(t2<97)
		{
			t2=t2+32;
		}
		if(t1>t2)
		{
			cout<<1<<endl;
			return 0;
		}
	    if(t1<t2)
	    {
	    	cout<<-1<<endl;
	    	return 0;
		}
	}
	cout<<0<<endl;
	
}
