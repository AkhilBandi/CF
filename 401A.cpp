#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,y;
	long long int p=0;
	cin>>n>>x;
	for(int i=0;i<n;i++)
	{
		cin>>y;
		p+=y;
	}
	if(p<0)
	{
		p=-p;
		
	}
    if((p%x)==0)
		{
			cout<<(p/x)<<endl;
		}
	else
		{
			cout<<(p/x)+1<<endl;
		}
	
	
}
