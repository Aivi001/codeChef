#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define REP(i,n) for(int i=0;i<n;i++)
#define REPr(i,n) for(int i=n-1;i>=0;i--)
int main()
{
long long t,n,val,temp=0,k;
cin>>t;
while(t--)
{
  int cnt=0;
cin>>n;

vector<long long>a[n];
int max[n-1];

REP(i,n)
REP(j,n)
{
cin>>val;
a[i].push_back(val);
}

REP(i,n)
{
//a[i][0]=0;
sort(a[i].begin(),a[i].end());
}

REP(i,n)
max[i]=-1;

/*REP(i,n)
REP(j,n)
cout<<a[i][j]<<"\t";
*/

REPr(j,n)
{
  if(j==n-1)
  {
max[j]=a[j][n-1];
//cout<<max[j]<<"\t";
}
else
{
  REPr(k,n)
  {
    if(a[j][k]<max[j+1])
  {max[j]=a[j][k];
  //cout<<max[j]<<"\t";
  break;}
  else if(k==0)
  {++cnt;
  break;
}
  else
  continue;
}
}
}

if(cnt==0)
{
  long long ans=0;
REPr(i,n)
ans+=max[i];
cout<<ans<<"\n";
}
else
cout<<"-1\n";
}
return 0;
}
