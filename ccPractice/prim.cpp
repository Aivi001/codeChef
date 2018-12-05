#include<bits/stdc++.h>
#define INFV 99999;
using namespace std;

int main()
{
int e,n,x,y,z;
 typedef pair<int,int> iPair;
 //list<pair<int,int>> *adj;

 cout<<"Enter the number of vertices and edges";
 cin>>n>>e;
 list<pair<int,int>> *adj;
 for(int i=0;i<e;i++)
 {
   cin>>x>>y>>z;

   adj[x].push_back(make_pair(y,z));
   adj[y].push_back(make_pair(x,z));

 }

vector<int>parent(v,-1);
vector<int>key(v,INFV);
vector<int>inMST(v,false);

//prim(int n,int e,vector<int> & key,vector<)
int src=0;

priority_queue<iPair,vector<iPair>,greatetr<iPair>>pq;





}
