#include<iostream>
#include<vector>
#include<algorithm>
//#define
using namespace std;

int main()
{
int i,x,n,l;
vector<int>v;
cin>>n>>l;
for(i=0; i<n;i++)
{
cin>>x;
v.push_back(x);
}
sort(v.begin(),v.end());
 //reverse(v.begin(),v.end());
 for(i=n-1;i>=0;i--)
 cout<<v[i]<<"\t";

 return 0;
//conclusion: better to use v.size()-1 ans >=0 than naive iterations...
}
