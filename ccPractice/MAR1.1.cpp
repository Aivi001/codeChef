#include<bits/stdc++.h>
using namespace std;

int main()
{
vector<long long >f;
vector<long long >g;
long long n,x,y,fcnt=0,bcnt=0;
int t,i,j;

cin>>t;
while(t--)
{
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>x;
    f.push_back(x);
  }

  for(j=0;j<n;j++)
  {
    cin>>y;
    g.push_back(y);
  }

  for(i=0;i<n;i++)
  {
    if(f[i]<=g[i])
    {
      fcnt++;
    }
    else
      break;
  }

  for(i=n-1;i>=0;i++)
  {
    if(f[i]<=g[i])
    {
      bcnt++;
    }
    else
      break;
  }
  if(bcnt==fcnt==n)
  cout<<"both\n";
  else if(bcnt==n)
  cout<<"back\n";
  else if(fcnt==n)
    cout<<"front\n";
  else
    cout<<"none\n";
  }

  return 0;
}
