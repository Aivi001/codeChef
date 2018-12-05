#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long t,n,i,x,days,ppl,num,j,qsize;
	vector<long long>p;
	

	cin>>t;
	
	while(t--)
	{
		queue<long long>q;
		vector<long long>cnt(1e5,0);
		cnt[0]=1;
		long long informed=0;
		cin>>n;
		if(n==1)
			cout<<1<<"\n";
		else
		{
		for(i=0;i<n;i++)
		{
			cin>>x;
			p.push_back(x);
		}

		i=0;days=0;
		q.push(0);
		
		while(cnt[days]<n-1)
		{
			++days;
			//cout<<"\nDay "<<days<<"\n";
		    qsize=q.size();
		    informed=0;
		    while(qsize--)
		    {
		    	ppl=q.front();
		    	q.pop();
		    	num=p[ppl];
		    	informed+=num;

		    	while(num--)
		    		{q.push(++i);}

				
					
		}
		if(days==1)
			cnt[days]=p[0];
		else
		cnt[days]=(2*cnt[days-1])+informed;
		//cout<<cnt[days]<<"\n";
		
		    }
	cout<<days<<endl;
	p.clear();

	}
}

	return 0;
}