#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
unsigned long long A,B,x,y,z,X=0,Y=0,Z=0,i,j,k,tot=0,sum=0,ans=0;
cin>>A>>B>>x>>y>>z;
//cout<<"\n"<<A<<"\t"<<B<<"\t"<<x<<"\t"<<y<<"\t"<<z;
for(i=1;i<=x;i++)
{
X+=2;
}
for(j=1;j<=y;j++)
{
Y+=1;
X+=1;
}
for(k=1;k<=z;k++)
{
Y+=1;
}
if(X>A)
tot=X-A;
if(Y>B)
sum=Y-B;
ans=sum+tot;
cout<<ans<<"\n";

 return 0;
}
