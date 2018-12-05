#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
int t;
string ss;
string s;
cin>>t;
++t;
getline(cin,ss);
while(t--)
{
getline(cin,s);
s.erase(remove(s.begin(), s.end(),' '), s.end());
if(next_permutation(s.begin(),s.end()))
{cout<<s<<"\n";}
else 
{cout<<"-1\n";}
}
return 0;
}





