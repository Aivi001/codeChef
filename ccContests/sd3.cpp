#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long t,n,i,x,days,ppl,num,j,k;
	vector<long long>p;

	cin>>t;

	while(t--)
	{
		long long informed=0;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>x;
			p.push_back(x);
		}

		i=0;days=0;informed=p[0];
		while(i<n)//informed<n-1
		{
			k=i;// X
			i+=informed;// X
			++days;
			//cout<<"Day "<<days<<"\n";
		for(j=k+1;j<=i;j++)//j=0
				{  informed+=p[j];
					
			}
				
					
		}
	cout<<days<<endl;
	p.clear();
	}

	return 0;
}