#include<iostream>

int main()
{
long long A,B,x,y,z,X=0,Y=0,Z=0,i,j,k,tot=0,sum=0;
cin>>A>>B>>x>>y>>z;
for(i=1;i<=x;i++)
{
X+=2;
}
for(j=1;j<=y;j++)
{
++Y;
++X;
}
for(k=1;k<=z;k++)
{
++Y;
}

tot=X-x;
sum=Y-y;
 cout<<tot+sum<<"\n";
