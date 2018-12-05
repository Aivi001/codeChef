#include<bits/stdc++.h>
using namespace std;

int main()
{

	set<int>b;
	set<int>o;

	int t;
	cin>>t;
	while(t--)
	{
	b.clear();
	o.clear();
	set<int>::iterator it;

	int i;char x;

	for(i=0;i<3;i++)
	{
		cin>>x;
		if(x=='b')
			b.insert(i+1);
		else if(x=='o')
			o.insert(i+1);

	}

//cin>>x;
	for(i=0;i<3;i++)
	{
		cin>>x;
		if(x=='b')
			b.insert(i+1);
		else if(x=='o')
			o.insert(i+1);

	}

	//for(it=b.begin();it!=b.end();it++)
	//	cout<<(*it);
	//cout<<"\n";
	//for(it=o.begin();it!=o.end();it++)
	//	cout<<(*it);
	//cout<<"\n";

	int flag=0;

	//if(b.find(1)!=b.end()&&b.find(3)!=b.end()&&o.find(2)!=o.end())
	//if(b!=o)	
	if(o.find(1)!=o.end())
		if(b.find(2)!=b.end()&&b.find(3)!=b.end())
			flag=1;
	if(o.find(2)!=o.end())
		if(b.find(1)!=b.end()&&b.find(3)!=b.end())
			flag=1;
	if(o.find(3)!=o.end())
		if(b.find(1)!=b.end()&&b.find(2)!=b.end())
			flag=1;
		if(flag==1)
		cout<<"yes\n";
	else
		cout<<"no\n";

}
	return 0;
}