#include<bits/stdc++.h>
using namespace std;

int main()
{

long long n,x,y;
int t,i,j;

cin>>t;
while(t--)
{
  vector<long long >f;
  vector<long long >g;
  int fcnt=0,bcnt=0;
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
//cout<<"\nFront\n";
  for(i=0;i<n;i++)
  {
    if(f[i]<=g[i])
    {
      fcnt++;
      //cout<<fcnt<<"  ";
    }
    else
      break;
  }
//cout<<"\nBACk\n";
  for(i=n-1,j=0;i>=0;i--,j++)
  {
    if(f[j]<=g[i])
    {
      bcnt++;
      //cout<<bcnt<<"  ";
    }
    else
      break;
  }
  //cout<<"\n\n";
  //cout<<fcnt<<"  "<<bcnt<<endl;
  if(bcnt==n && fcnt==n)
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
