#include<bits/stdc++.h>
using namespace std;
int eight(int n)
{ int temp; 
  if(n<0)
  {
	n=(-1)*n;
  }
	while(n!=0)
	{
		temp=n%10;
		if(temp==8)
		{
			return 1;
		}
		n=n/10;
	}
	return 0;
}
int main()
{
	long long int n;
	cin>>n;
    for(int i=1;i<=16;i++)
    { 
    	n=n+1;
    	int t=eight(n);
    	if(t==1)
    	{
    		cout<<i<<endl;
    		return 0;
		}
	}
}
