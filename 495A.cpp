#include<bits/stdc++.h>
using namespace std;
int main()
{
	int c[10],n;
	string s;
	cin>>s;
	c[0]=2;
	c[1]=7;
	c[2]=2;
	c[3]=3;
	c[4]=3;
	c[5]=4;
	c[6]=2;
	c[7]=5;
	c[8]=1;
	c[9]=2;
	n=c[s[0]-'0']*c[s[1]-'0'];
	cout<<n<<endl;
}
