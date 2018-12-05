#include<bits/stdc++.h>
using namespace std;

int main()
{
long long val;
long long x;
int t;
cin>>t;
while(t--)
{

    long long n;
    cin>>n;
    vector<long long>v;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        v.push_back(val);

    }
    //for(int l=0;l<v.size();l++)
    //cout<<v[l]<<"\t";
    //cout<<"\n";
    sort(v.begin(),v.end());
    //for(int l=0;l<v.size();l++)
    //cout<<v[l]<<"\t";
    //cout<<"\n";
    long long s=v.size();
    //cout<<s<<"\n";
    v.erase( unique( v.begin() ,v.end() ),v.end() );
    //for(int l=0;l<v.size();l++)
    //cout<<v[l]<<"\t";
    //cout<<"\n";
    long long s1=v.size();
    //cout<<s1<<"\n";
    cout<<s-s1<<"\n";

}

}
