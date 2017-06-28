#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2,p,q;
	cin>>s1>>s2;
	int h1,h2,m1,m2;
	h1=(s1[0]-'0')*10 + (s1[1]-'0');
	h2=(s2[0]-'0')*10 + (s2[1]-'0');
	m1=(s1[3]-'0')*10 + (s1[4]-'0');
	m2=(s2[3]-'0')*10 + (s2[4]-'0');
	h1=h1-h2;
	m1=m1-m2;
   if(m1<0)
   {
    m1=60+m1;
	h1=h1-1;  	
   }
   	if(h1<0)
	{
		h1=h1+24;
    }  
   if(h1<10)
   {
     cout<<0<<h1<<":";   	
   }	
   else
   {
   	cout<<h1<<":";
   }
   if(m1<10)
   {
     cout<<0<<m1<<endl;   	
   }	
   else
   {
   	cout<<m1<<endl;
   }
   
}
