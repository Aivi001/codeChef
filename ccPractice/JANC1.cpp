#include<iostream>
using namespace std;
 
int main()
{
long long t,a,b,c,d,cnt=0;
cin>>t;
while(t--)
{
cin>>a>>b>>c>>d;
if(a==b)
 if(c==d) 
   ++cnt;
   else cnt=0;
   
else if(a==c)
  if(b==d)
   ++cnt;
   else cnt=0;
   
 else if(a==d)
   if(b==c)
    ++cnt;
   else cnt=0;
   
 else cnt=0;
 
 if(cnt==0)
 cout<<"NO\n";
 else cout<<"YES\n";
 }
 return 0;
 }
 
 