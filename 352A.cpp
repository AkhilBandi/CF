#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],p=0,p1=0;
	string c="";
	//long long int c=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==5)
		{
			p++;
		}
		else
		{
			p1++;
		}
	}
	if(p<9 || p1==0)
	{
	  if(p1>0)
	  {
	  	cout<<0<<endl;
	  	return 0;
	  }
	  else
	  {
	  	cout<<-1<<endl;
	  	return 0;
	  }
	}
	else
	{  p=(p/9);
	   p=9*p;
		while(p!=0)
		{ c += "5";
			//c=(10*c)+5;
			p--;
		}
		while(p1!=0)
		{   c += "0";
			//c=(10*c);
			p1--;
		}
	}
	cout<<c<<endl;
}
