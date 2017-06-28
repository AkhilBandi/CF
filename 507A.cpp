#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	long long int k;
	cin>>n>>k;
	int a[n];
	pair<int,int> b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=make_pair(a[i],i);
	}
	sort(b,b+n);
	int c[n],i=0;
	while(k-b[i].first>=0 && i<n )
	{ 
		k=k-b[i].first;
		c[i]=b[i].second +1;
		
	//	cout<<b[i].first<<"i="<<i<<endl;
	//	cout<<"kkk"<<endl;
		i++;
	}
	sort(c,c+i);
  cout<<i<<endl;
  for(int j=0;j<i;j++)
  {
  	cout<<c[j]<<" ";
  }
	
}
