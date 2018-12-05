#include<bits/stdc++.h>
using namespace std;

int main()
{

	long long t,n,i,time,tot=0;
	cin>>t;
	map<char,char>mcc;
	mcc['d']='l';
	mcc['f']='l';
	mcc['j']='r';
	mcc['k']='r';

	while(t--)
	{
		tot=0;
		cin>>n;
		map<string,long long>m;
		while(n--)
		{
			
			string s;
			cin>>s;
			if(m.find(s)!=m.end())
				{tot+=m[s]/2;
					//cout<<"Total time "<<m[s]/2<<"\n";
				}
			else
			{
			time=2;
			for(i=1;i<s.length();i++)
			{
				if(mcc[s[i]]!=mcc[s[i-1]])
					time+=2;
				else
					time+=4;
			}
			//cout<<"Time for "<<n<<" is "<<time<<"\n";
			m[s]=time;
			tot+=time;
			}

		}
		//m.clear();
		cout<<tot<<endl;
	}



	return 0;
}