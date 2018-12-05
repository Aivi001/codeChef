#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define REP(i,n) for(int i=0;i<n;i++)

int main()
{
long long t,n,val,ans=0;
int cnt=0;
cin>>t;
while(t--)
{
cin>>n;

vector<long long>a[n];
int max[n];

REP(i,n)
REP(j,n)
{
cin>>val;
a[i].push_back(val);
}

REP(i,n)
{
//a[i].begin()=0;
if(*max_element(a[i].begin(),a[i].end())==a[i].begin()[0])
++cnt;
else{
sort(a[i].begin(),a[i].end());
max[i]=*max_element(a[i].begin(),a[i].end());
if(max[i]==a[i].end()[-2])
++cnt;
}
}

if(cnt==0)
{REP(i,n)
ans+=max[i];
cout<<ans<<"\n";
}
else
cout<<"-1\n";

}

return 0;
}
