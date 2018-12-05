#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <queue>
#include <time.h>
using namespace std;
#define MOD 1000000007ll
#define INF 100000000000000ll;
typedef long long ll;
#define ULL unsigned long long
#define LD long double
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define ABS(x) ((x)<0?-(x):(x))
#define si(n) scanf("%d",&n)
#define sf(n) scanf("%f",&n)
#define sl(n) scanf("%lld",&n)
#define slu(n) scanf("%llu",&n)
#define sd(n) scanf("%lf",&n)
#define ss(n) scanf("%s",n)
#define pnl printf("\n")
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define FORR(i,n) for(int i=(n);i>=0;i--)
#define DB(x) cout<<"\n"<<#x<<" = "<<(x)<<"\n";
#define CL(a,b) memset(a,b,sizeof(a))
#define GOLD ((1+sqrt(5))/2)
const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;
void swaps (char *x,char *y){char temp;temp=*x;*x=*y;*y=temp;}
void swapi(int *a,int *b){int temp;temp=*a;*a=*b;*b=temp;}
ULL gcd(ULL a,ULL b){if(a==0)return b;if(b==0)return a;if(a==1||b==1)return 1;
if(a==b)return a;if(a>b)return gcd(b,a%b);else return gcd(a,b%a);}
#define SIZE 100009
ll a[SIZE];
ll dpWithDelete[SIZE];
ll dpWithoutDelete[SIZE];
int i,j,n;
void preprocess()
{
}//end prepreprocess
void refresh()
{
}//end refresh
void compute(){
 
  dpWithoutDelete[0]=a[0];
  /*cout<<"dpWithoutDelete0"<<dpWithoutDelete[0]<<endl;*/
  for(i=1;i<n;i++){
    dpWithoutDelete[i]=MAX(a[i],a[i]+dpWithoutDelete[i-1]);
   /* cout<<"dpWithoutDelete"<<i<<" " <<dpWithoutDelete[i]<<endl;*/
 
  }
  dpWithDelete[1]=MAX(a[0],a[1]);
  for(i=2;i<n;i++){
    dpWithDelete[i]=MAX(dpWithDelete[i-1]+a[i],dpWithoutDelete[i-1]);
  }
  ll out=a[0];
  for(i=1;i<n;i++){
    out=MAX(out,MAX(dpWithDelete[i],dpWithoutDelete[i]));
  }
  cout<< out <<endl;
}
int main()
{
    
    int t;
    cin>>t;
    
      while(t--){
        cin>>n;
      REP(i,n){
       scanf("%lld",&a[i]);
        }
        compute();
      }
    
  
 
    
 
    return 0;
}//end main*