#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long t,n,i,x;
	vector<long long>v;

	cin>>t;

	while(t--)
	{
		cin>>n;
		bool flag1=true,flag2=true;

		for(i=0;i<n;i++)
		{
			cin>>x;
			v.push_back(x);
		}

		long long minEle=1e10;
		long long minIndex=-1;

		for(i=0;i<n;i++)
		{
			if(v[i]<minEle)
			{
				minEle=v[i];
				minIndex=i;
			}
		}

	
		for(i=1;i<minIndex-1;i++)//earlier <minElem
		{
			//if(i==minIndex-1)
			//	break;
			if(v[i-1]>v[i])
			{
				flag1=false;
				//cout<<"before\n";
				break;
			}

		}

		for(i=minIndex+1;i<n;i++) //earlier, minIndex
		{
//			if(i==n-1)
//				break;
			if(v[i-1]>v[i])
			{
				flag2=false;
				//cout<<"after\n";
				break;
			}
		}

		//if(minIndex!=0&&minIndex!=n-1)
		//{
			if(flag1&&flag2&&v[n-1]<v[minIndex-1])
			{
				//cout<<"third cond\n";
				cout<<"YES\n";
			}
		//}
			else
				cout<<"NO\n";
			v.clear();
			//flag==true?cout<<"YES\n":cout<<"NO\n";

	}



	return 0;
}