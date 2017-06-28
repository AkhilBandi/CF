#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int p=(s2[1]-s1[1]);
	int  q=(s2[0]-s1[0]);
	//cout<<"p="<<p<<" "<<"q="<<q<<endl;
	if(p>=0 && q>=0)
	{  //cout<<1<<endl;
	   cout<<max(p,q)<<endl;
		if(p>=q)
		{
			for(int i=0;i<(p-q);i++)
			{
				cout<<"U"<<endl;
			}
			p=q;
			for(int i=0;i<p;i++)
			{
				cout<<"RU"<<endl;
			}
			return 0;
		}
		else
		{
			for(int i=0;i<(q-p);i++)
			{
				cout<<"R"<<endl;
			}
			q=p;
			for(int i=0;i<p;i++)
			{
				cout<<"RU"<<endl;
			}
			return 0;
		}
	}
	if(p<0 && q<0)
	{  //cout<<2<<endl;
	    p=abs(p);
	   q=abs(q);
	   cout<<max(p,q)<<endl;
		if(p>=q)
		{
			for(int i=0;i<(p-q);i++)
			{
				cout<<"D"<<endl;
			}
			p=q;
			for(int i=0;i<p;i++)
			{
				cout<<"LD"<<endl;
			}
			return 0;
		}
		else
		{
			for(int i=0;i<(q-p);i++)
			{
				cout<<"L"<<endl;
			}
			q=p;
			for(int i=0;i<p;i++)
			{
				cout<<"LD"<<endl;
			}
			return 0;
		}
	}
	if(p>=0 && q<0)
	{ // cout<<3<<endl;
	q=abs(q);
	 //cout<<"q="<<q<<endl;
	  cout<<max(p,q)<<endl;
		if(p>=q)
		{
			for(int i=0;i<(p-q);i++)
			{
				cout<<"U"<<endl;
			}
			p=q;
			for(int i=0;i<q;i++)
			{
				cout<<"LU"<<endl;
			}
			return 0;
		}
		else
		{
			for(int i=0;i<(q-p);i++)
			{
				cout<<"L"<<endl;
			}
			q=p;
			for(int i=0;i<p;i++)
			{
				cout<<"LU"<<endl;
			}
			return 0;
		}
	}
	if(p<0 && q>=0)
	{ //cout<<4<<endl;
	  p=abs(p);
	  cout<<max(p,q)<<endl;
		if(p>=q)
		{
			for(int i=0;i<(p-q);i++)
			{
				cout<<"D"<<endl;
			}
			p=q;
			for(int i=0;i<p;i++)
			{
				cout<<"RD"<<endl;
			}
			return 0;
		}
		else
		{
			for(int i=0;i<(q-p);i++)
			{
				cout<<"R"<<endl;
			}
			q=p;
			for(int i=0;i<p;i++)
			{
				cout<<"RD"<<endl;
			}
			return 0;
		}
	}
}
