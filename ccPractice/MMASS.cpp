#include<iostream>
#include<stack>
using namespace std;

int main()
{
stack <int> sum;
int ans=0;
string s;
cin>>s;
for(int i=0;i<s.size();i++)
{
if(s[i]=='H')
sum.push(1);
else if(s[i]=='C')
sum.push(12);
else if(s[i]=='O')
sum.push(16);
else if(s[i]=='(')
sum.push(-1);
else if (s[i]==')')
{
int total=0;
while(sum.top()!=-1)
{total+=(sum.top());
sum.pop();
}
sum.pop();
sum.push(total);
}
else if(s[i]>='2' && s[i]<='9')
{
int n=sum.top();
sum.pop();
sum.push(n*(s[i]-'0'));
}
else 
break;
}
while(!sum.empty())
{
ans+=sum.top();
sum.pop();
}

cout<<ans;
return 0;
}

