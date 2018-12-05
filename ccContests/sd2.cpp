#include<bits/stdc++.h>
using namespace std;

int main()
{
int i,j;
vector<int>vl(200,0);
//for(i=0;i<vl.size();i++)
//	cout<<vl[i]<<" ";
vector<int>prime={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197,199};
/*for(i=0;i<prime.size();i++)
{
	for(j=prime[i];j<200;j+=prime[i])
	{
		++vl[j];
	}

}

for(i=0;i<vl.size();i++)
cout<<vl[i]<<" ";
cout<<"\n";
*/
set<int>st;
set<int>::iterator it;

for(i=0;i<prime.size()-1;i++)
	for(j=i+1;j<prime.size();j++)
		if(prime[i]*prime[j]<201)
			st.insert(prime[i]*prime[j]);

//cout<<"Set vals\n";
//for(it=st.begin();it!=st.end();it++)
//	cout<<*it<<" ";
int t,q,flg=0;

cin>>t;

while(t--)
{
	cin>>q;
	for(it=st.begin();it!=st.end();it++)
	{
		if(st.find(q-(*it))!=st.end())
		{
			flg=1;
			break;
		}
		else
			continue;
	}
	if(flg==1)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	flg=0;
	
}


return 0;
}