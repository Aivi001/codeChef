#include<bits/stdc++.h>
using namespace std;
# define iPair pair<int,int>
int main()
{
    //list<pair<int,int>>*adj;
    int e,n,u,v,w;
    cout<<"Enter the number of vertices\t";
    cin>>n;
    list<pair<int,int>>adj[n];
  cout<<"Enter the number of edges\t";
  cin>>e;
  cout<<"\n";
  for(int i=0;i<e;i++)
  {
      cin>>u>>v>>w;
      adj[u].push_back(make_pair(v,w));
      adj[v].push_back(make_pair(u,w));

  }

//Dijkstra
    priority_queue<iPair,vector<iPair>,greater<iPair> >pq;
    int src=0;
    vector<int>key(n,999999);
    //vector<int>parent(n,-1);
    //vector<bool> inMST(n,false);

    pq.push(make_pair(0,src));
    key[src]=0;

    while(!pq.empty())
    {
        int u=pq.top().second;
        pq.pop();
        //inMST[u]=true;
        list<pair<int,int>>::iterator it;

        for(it=adj[u].begin();it!=adj[u].end();it++)
        {
            int v=it->first;
            int w=(*it).second;
            if(key[v]>key[u]+w)
            {
                key[v]=w+key[u];
                pq.push(make_pair(key[v],v));
                //parent[v]=u;
            }

        }


    }

    for(int i=1;i<n;i++)
        cout<<i<<" "<<key[i]<<"\n";
return 0;
}
