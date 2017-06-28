#include<bits/stdc++.h>
using namespace std;
int main()
{  int b;
	string s;
	getline(cin,s);
	for(int i=0;i<s.length();i++)
	{ b=s[i];
	  if(b>=97)
	  {
		if(s[i]!='a' &&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y')
		{
			cout<<"."<<s[i];
		}
	  }
	  else
	  {
	  	if(s[i]!='A' &&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U'&&s[i]!='Y')
	  	{ 
	  	char c=s[i]+32;
	  		cout<<"."<<c;
		}
	  }
	}
}
