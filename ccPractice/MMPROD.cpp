#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int x=0;x<t;x++)
    {
        int n,k,flag=0;
        cin>>n>>k;
        vector<long long> ar(n);
        long long prod=1;
        for (int i=0;i<n;i++)
            cin>>ar[i];
        sort(ar.begin(),ar.end());
        //for (int i=0;i<n;i++)
          //  cout<<ar[i]<<" ";
        //cout<<endl;
        if ((ar[n-1]<0) && (k%2))
        {
        	for (int i=1;i<=k;i++)
        		prod = (prod * ar[n-i])%1000000007;
        }
        else
        {
        int i=0,j=n-1;
        while(k>1)
        {
            if ((ar[i] * ar[i+1])>(ar[j] * ar[j-1]))
            {
                prod = (prod * ((ar[i] * ar[i+1])%1000000007))%1000000007;
                //prod = prod%1000000007;
                i = i+2;
                k= k-2;
            }
            else
            {
                prod = (prod * ar[j])%1000000007;
                //prod = prod%1000000007;
                j = j-1;
                k = k-1;
            }
        }
        //cout<<i<<" "<<j<<endl;
        if(k==1)
            prod = (prod*ar[j])%1000000007;
        //cout<<prod<<endl;
        }
        if (prod>=0)
            prod = prod%1000000007;

            else
                    {
                        prod = (ceil((double)(-prod)/1000000007) * 1000000007 ) + prod;
                    }
            cout<<prod<<"\n";
          }
          return 0;
        }
