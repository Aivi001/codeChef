#include<bits/stdc++.h>
using namespace std;
  /*
vector<long long>v;
long long n,k,x,index,best=100000000;
cin>>n>>k;
for(int i=0;i<k;i++)
{
cin>>x;
v.push_back(x);
}
int l=v.size();
  for(int i=0;i<=l-k;i++)
  {
    cout<<"\nLoop i"<<i<<"\n";
  long long sum=0;
  for(int j=i;j<i+k;j++)
  {
    cout<<v[j]<<"\t";
    sum+=v[j];
  }
  if(sum<best)
  { cout<<"\n"<<i<<"  ";
    best=sum;
    index=i+2;
  }
  }
cout<<"\n"<<best<<"  "<<index<<"\n";
*/
int main(){

    long n(0), k(0); scanf("%ld %ld", &n, &k);
    long *accumulator = new long[n];
    long temp(0), previous(0);

    for(int m = 0; m < n; m++){scanf("%ld", &temp); accumulator[m] = previous + temp; previous = accumulator[m];}

    long currentMin = accumulator[k - 1];
    long bestIndex(0);
    for(long index = 0; index < n - k; index++){
        temp = accumulator[index + k] - accumulator[index];
        if(temp < currentMin){currentMin = temp; bestIndex = index + 1;}
    }

    printf("%ld\n", bestIndex + 1);
    return 0;

}
