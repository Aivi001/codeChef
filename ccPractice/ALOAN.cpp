#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
double p,m,l,bal;
cin>>p>>m>>l;
double lo=0.0,hi=1.0,r=1.0,ans=0;

while((hi -lo ) > 0.000000001)
//for(int i=0;i<100;i++)
{
r = ( hi + lo ) / 2;
bal = p;
for(int i = 0; i < l; i++)
{
  bal = bal - m + bal * r;
}
//cout << r << " " << bal << " " << (hi + lo) << endl;
if(bal == 0)
{ r=r;//*100*12;
  //break;
}
else if(bal>0)
{ hi = r;}
else
 { lo = r;}
 //cout<<r*100*12<<"\n";
}
ans=r*100*12;
/*cout<<setprecision(13)<<*/printf("%0.9lf",ans);//<<"\n";
return 0;
}
