

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	cin>>x;

	if(x>=1)
	{

    int no=-1;

    for(int i=1;i<x;i++)
    {
      no+=2;
      cout<<no<<",";
    }

    no+=2;
    cout<<no<<endl;
   }


}