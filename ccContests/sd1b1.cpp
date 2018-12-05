#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,y;
	cin>>t;
	while(t--)
	{
		cin>>y;
		if(y==2010||y==2015||y==2016||y==2017||y==2019)
			cout<<"HOSTED\n";
		else
			cout<<"NOT HOSTED\n";
	}

	return 0;
}