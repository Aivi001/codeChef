#include<iostream>
using namespace std;

int main()
{
int t,n,m;
cin>>t;
while(t--)
{
cin>>n>>m;
int min[51],max[51];
 min[0]=0;
 max[0]=0;
for(int i=1;i<51;i++)
{
int k=i/2;
min[i]=min[k]+min[i-k-1]+i+1;
max[i]=max[i-1]+max[0]+i+1;
}
if(m<=max[n] && m>=min[n] )
cout<<"0\n";
else if(m>max[n])
cout<<m-max[n]<<"\n";
else
cout<<"-1\n";
}
return 0;
}
