#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int k;
	cin>>k;
	int a[26],b[26],p=-1,q=1,sum=0;
	for(int i=0;i<26;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	sort(a,a+26);
	for(int i=0;i<s.length();i++)
	{   
		if(a[25]<b[s[i]-'a'])
		{
			p=i;
			//cout<<s[i]<<b[s[i]-'a']<<endl;
			//cout<<a[25]<<endl;
		}
	}
	if(p==-1)
	{
		p=s.length();
	}
	for(int i=0;i<p;i++)
	{
		sum=sum+(q*b[s[i]-'a']);
		q++;
	}
	//cout<<"Q="<<q<<endl;
	//cout<<"sum="<<sum<<endl;
	sum=sum+(((k*p)+((k*(k+1))/2))*a[25]);
	q=q+k;
	for(int i=p;i<s.length();i++)
	{
		sum=sum+(q*b[s[i]-'a']);
	}
	cout<<sum<<endl;
}
