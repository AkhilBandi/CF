#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,h=0,t=0;
	cin>>n;
	int a[n],c[1001]={0};
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		c[a[i]]++;
		//cout<<"a[i]="<<a[i]<<endl;
		//cout<<c[a[i]]<<endl;
		h=max(h,c[a[i]]);
		if(c[a[i]]==1)
		{
			
			t++;
        }
	}
	cout<<h<<" "<<t<<endl;
}
