#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,a,b,k,k1=0;
	cin>>n>>m>>a>>b;
     k=((n%m)*a)+((n/m)*b);
     if(n%m !=0)
     {
	 
     k1=((n/m)*b)+b;
     k=min(k,k1);
     }
    k1=n*a;
    k=min(k,k1);
    cout<<k<<endl;
}
