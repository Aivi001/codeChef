#include<bits/stdc++.h>
using namespace std; 
  
void calcProd(long long p[], long long n,long long k,long long&vals,long long&cnt) 
{ 
    long long prod=1;
    set<long long>s;
    vector<long long>s1(p,p+n);
    for (int i = 0; i < n; i++)
       // cout<<p[i]<<" ";
    {
        s.insert(s1[i]);
    }
    if(s.size()==k&&s1.size()==k)
      { ++cnt;// vals.push_back(s1);
      //  for(int i=0;i<n;i++)
        //    cout<<s1[i]<<" ";
       // cout<<"\n";
    for(int i=0;i<n;i++)
        {
            prod*=(((s1[i]*s1[i])-s1[i])%1000000007);
            prod%=1000000007;

        }
        //cout<<prod<<"\n";
        vals=max(vals,prod);
    //cout<<"\n";
}
        
} 
  
void findParts(long long n,long long part,long long&vals,long long&cnt) 
{ 
    long long  p[n];  
    long long k = 0;  
    p[k] = n;  
  
    
    while (true) 
    { 
        
        calcProd(p, k+1,part,vals,cnt); 
        long long rem = 0; 
        while (k >= 0 && p[k] == 1) 
        { 
            rem+= p[k]; 
            k--; 
        } 
  
        if (k < 0)  return; 
  
        p[k]--; 
        rem++; 
  
        while (rem> p[k]) 
        { 
            p[k+1] = p[k]; 
            rem-=p[k]; 
            k++; 
        } 
  
        p[k+1] = rem; 
        k++; 
    } 
} 
  

int main() 
{
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
    long long t,n,k,i;
    cin>>t;
    while(t--)
    {
    cin>>n>>k;
    long long vals=0,cnt=0;
   
  if(k<=n)
  {
    
    findParts(n,k,vals,cnt);
    if(cnt>0)
       { cout<<cnt<<" ";
   // cout<<"final val ";
    cout<<vals<<endl;}
else
    cout<<"-1\n";
}
else
cout<<"-1\n";
    }
  
    return 0; 
} 