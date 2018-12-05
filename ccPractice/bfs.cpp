#include<bits/stdc++.h>
using namespace std;

vector<vector<int> >g;
vector <bool> v;

void edge(int a,int b)
{
  g[a].push_back(b);
  g[b].push_back(a);
}

void bfs(int s)
{
  queue<int>q;
  q.push(s);
  v[s]=true;

    while(!q.empty())
    {
      int vertex=q.front();
      q.pop();
      cout<<vertex<<"  ";

      for(auto i=g[vertex].begin();i!=g[vertex].end();i++)
      {
        if(!v[*i])
      {  q.push(*i);
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

  for(int j=0;j<n;j++)
  {
    if(!v[j])
      bfs(j);
  }

  return 0;
}
