

#include<bits/stdc++.h>
using namespace std;

int main()
{
	double a,b;
	string c;

	cin>>a>>b>>c;

	if(c=="+")
	{
		double d=a+b;
		cout<<d;
	}

	if(c=="-")
	{
		double d=a-b;
		cout<<d;
	}

	if(c=="*")
	{
		double d=a*b;
		cout<<d;
	}

	if(c=="/")
	{
		double d=(a/b);
		cout<<d;
	}
}