/*
Date: 16-4-2021
Algo: BFS
IDEA: Find the distance of each node from the 0th node.
*/
#include<bits/stdc++.h>
using namespace std;

const int N= 1001;
int dis[N];
vector< int > adj[N];

void BFS(){

    queue< int > q;
    memset(dis, -1,  sizeof(dis));
    q.push(0);
    dis[0]=0;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int v: adj[u]){
            if(dis[v]==-1){
                dis[v]=dis[u]+1;
                q.push(v);
            }
        }
    }
}

int main(){

    int t, n, m, a, b;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        cin>>n>>m;
        for(int i=0; i<n; i++)adj[i].clear();
        for(int i=1; i <=m; i++){
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        BFS();
        if(tc>1)cout<<endl;
        for(int i=1; i<n; i++){
            cout<<dis[i]<<endl;
        }
    }
    return 0;

}
