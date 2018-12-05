#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
cin.tie(NULL);
	long long t,n,k,x,cnt;

	cin>>t;
	while(t--)
	{
		cnt=0;
		cin>>n>>k;

		while(n--)
		{
			cin>>x;
			if(x>1)
				++cnt;
		}
		if(cnt<=k)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}


	return 0;
}