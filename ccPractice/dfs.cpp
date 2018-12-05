#include<bits/stdc++.h>
using namespace std;

vector<vector<int> >g;
vector <bool> v;

void edge(int a,int b)
{
  g[a].push_back(b);
  g[b].push_back(a);
}

void dfs(int s)
{
  stack<int>st;
  st.push(s);
  v[s]=true;

    while(!st.empty())
    {
      int vertex=st.top();
      st.pop();
      cout<<vertex<<"  ";

      for(auto i=g[vertex].begin();i!=g[vertex].end();i++)
      {
        if(!v[*i])
      {  st.push(*i);
        v[*i]=true;
      }
      }

    }
}

int main()
{

  int e,n,a,b;
  cin>>n>>e;

  g.assign(n,vector<int>());
  v.assign(n,false);

  for(int i=0;i<e;i++)
  {
     cin>>a>>b;
     edge(a,b);
  }

  //for(int j=0;j<n;j++)
  //{
    //if(!v[j])
      dfs(0);
  //}

  return 0;
}
