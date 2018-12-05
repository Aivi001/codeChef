#include<bits/stdc++.h>
using namespace std;

int main()
{

int t;
cin>>t;
while(t--)
{
  long long n,h,x,ans;
  vector<long long>b;

  cin>>n>>h;

  for(int i=0;i<n;i++)
  {
    cin>>x;
    b.push_back(x);
  }

  sort(b.begin(),b.end());
  if(n==h)
  cout<<b[n-1]<<"\n";
  else
  //cout<<b[n-1]-b[0]<<"\n";
  {
      long long elem=b[n-1];
      vector<long long> dp(elem+1);
      for(int l=elem-1;l>=1;l--)
        dp[l]=0;
      //int j=1;
     //memset(dp,0,sizeof(dp));
     for(int j=elem-1;j>=1;j--)
     {
      for(int i=0;i<n;i++)
          {     if(b[i]<=j)
              dp[j]+=1;
              else
              {
                  if(b[i]%j==0)
                      dp[j]+=b[i]/j;
                  else
                     dp[j]+=(b[i]/j)+1;
              }
              if(i==n-1)
              {
                  if(dp[j]==h)
                  {
                      ans=j;
                      break;
                  }
              }

         }
     }
      //for(int l=1;l<=elem;l++)
        //cout<<dp[l]<<"\t";
        //cout<<"\n";

     //vector<long long>::iterator ans=find(dp.begin(),dp.end(),h);
      //long long dist=distance(dp.begin(),ans);
      cout<<ans<<"\n";
      }
}

//cout<<round((float)11/4)<<"\t"<<ceil((float)7/4)<<"\t"<<(float)floor((float)7/4)<<"\t"<<(float)trunc((float)7/4)<<"\n";
return 0;
}
