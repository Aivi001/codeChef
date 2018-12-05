#include<bits/stdc++.h>
#define LL long long int
#define s(a) scanf("%d",&a)
#define sl(a) scanf("%lld",&a)
#define ss(a) scanf("%s",a)
#define w(t) while(t--)
#define f(i,n) for(i=0;i<n;i++)
#define fd(i,n) for(i=n-1;i>=0;i--)
#define p(a) printf("%d",a)
#define pl(a) printf("%lld",a)
#define ps(a) printf("%s",a)
#define pc(a) printf("%c",a)
#define ent printf("\n")
#define mod 1000000007
#define PI 3.14159265
#define gs getline(cin,s)
#define pb push_back
#define mp make_pair
#define INF 1e18

using namespace std;

int arr[10005];
int X[2015];

priority_queue< int,vector<int>,greater<int> > Q;

int main()
{
	int t,i,j,n,k1,k2,k3,k,x;
	sl(t);
	w(t)
	{
		sl(n);sl(k1);sl(k2);sl(k3);
		for(i=1;i<=n;i++)
		{
		sl(arr[i]);
		arr[i]+=arr[i-1];
    cout<<"ARR"<<i<<" "<<arr[i]<<"\n";
		}
		for(i=1;i<=n;i++)
		{
			for(j=i;j<=n;j++)
			{
				x=arr[j]-arr[i-1];
        cout<<"x"<<x<<"\n";
				if(Q.size()<k3)
				{Q.push(x);
        cout<<"IF"<<Q.top()<<"\n";}
				else
				{
					if(x>Q.top())
					{
						Q.pop();
cout<<"ELS1"<<Q.top()<<"\n";
            Q.push(x);
            cout<<"ELS2"<<Q.top()<<"\n";
					}
				}
			}
		}
		 k=k3;

		while(!Q.empty())
		{
			X[k--]=Q.top();
			Q.pop();
		}
		printf("%d %d %d\n",X[k1],X[k2],X[k3]);
	}
	return 0;
}
