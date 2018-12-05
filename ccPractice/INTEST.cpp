#include<iostream>
using namespace std;

int main()
{
long long n,k,i,x,result=0;
cin>>n>>k;
for(i=0;i<n;i++)
{
cin>>x;
if((x%k)==0)
++result;
}
cout<<result<<endl;

return 0;
}
