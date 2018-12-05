#include<bits/stdc++.h>
using namespace std;

int main()
{
long long t;
long long n,i,x,k;
vector<long long>v;
cin>>t;
//cout<<"\nWe know the quantity";
while(t--)
{
//cout<<"\nAt the start";
cin>>n>>k;

//cout<<"\nInput elems";
for(i=0;i<n;i++)
{
	cin>>x;
	v.push_back(x);
}
//long long r=0,team=0;
sort(v.begin(),v.end(),greater<>());
long long ser=v[k-1];
//cout<<ser<<" ";
long long v1=count(v.begin()+k,v.end(),ser);
//cout<<k<<" "<<v1<<"\n";
cout<<k+v1<<endl;
v.clear();
//cout<<"\nAfter sort";
/*for(i=0;i<n;i++)
{
	cout<<v[i]<<" ";
}*/
//cout<<"\nEnd sort";
/*for(i=0;i<n&&r<k;i++)
{
	++team;
	v[i]==v[i+1]?r:++r;
	
}*/
//long long ser=v[k];
//vector<long long>a1(v.begin(),v.begin()+k);
//vector<long long>a2(v.begin()+k,v.end());
//long long a2Val=count(a2.begin(),a2.end(),ser);
//cout<<(a1.size()+a2Val)<<"\n";
//cout<<team<<endl;

//a1.clear();
//a2.clear();
}
return 0;
}