/*#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<cstring>
using namespace std;


int main() {
    long long n,i=0,cnt=0,k=0;
    cin>>n;
    string s[n];
    while(n--)
    {
        ++k;
    string s1,s2;
    cin>>s1>>s2;
        if(s1=="add")
            s[i++]=s2;
        else
        {
            for(int h=0;h<k;h++)
            char *p=strstr(&s[k],&s2);
            if(p)
                ++cnt;
            cout<<cnt<<"\n";
            cnt=0;
        }

    }

  Enter your code here. Read input from STDIN. Print output to STDOUT
    return 0;
}
*/
#include <vector>
#include <iostream>
#include <algorithm>
#include<cstring>
using namespace std;

int main()
{
  long long n,m,cnt=0;
  cin>>n;
  vector<string>v;
  while(n--)
  {
  string s1,s2;
  cin>>s1>>s2;
  if(s1=="add")
      v.push_back(s2);
  else
  {
      cout<<count(v.begin(),v.end(),s2)<<"\n";

}

}
return 0;
}
