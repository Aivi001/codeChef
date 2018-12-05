#include<iostream>
#include<stack>
using namespace std;

int main()
{
stack <char> s;
int t;
string ss;
cin>>t;
while(t--)
{
cin>>ss;
for(int i=0;i<ss.length();i++)
{
if(isalpha(ss[i]))
cout<<ss[i];

else if(ss[i]==')')
{cout<<s.top();
s.pop();
}
else if(ss[i]!='(')
s.push(ss[i]);
}
cout<<"\n";
}
return 0;
}
