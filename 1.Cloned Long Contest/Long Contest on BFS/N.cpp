///12 April 2021
///Tags: BFS
///Notes: Fist BFS to find a corner of the tree (diameter ) then run
///another BFS form that position to get the result.


#include<bits/stdc++.h>
using namespace std;

int p,mx;
int d[30010],vis[30010];
vector < int > adj[30010],cost[30010];

void bfs(int s){
    queue< int > q;
    q.push(s);
    d[s]=0;
    vis[s]=1;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        if(d[u]>mx){
            mx=d[u];
            p=u;
        }
        for(int i=0; i<adj[u].size(); i++){
            int v=adj[u][i];
            if(d[v]<d[u]+cost[u][i] && vis[v]==0){
                d[v]=d[u]+cost[u][i];
                q.push(v);
                vis[v]=1;
            }
        }
    }
}

void all_clear(int n){
    for(int i=0; i<=n; i++){
        adj[i].clear();
        vis[i]=d[i]=0;
        cost[i].clear();
    }
    mx=0;
}


int main(){

    int src,t,n,i,j,a,b,w;

    cin>>t;
    for(j=1; j<=t; j++){
        scanf("%d",&n);
        all_clear(n);
        for(i=1; i<n; i++){
            scanf("%d%d%d",&a,&b,&w);
            adj[a].push_back(b);
            adj[b].push_back(a);
            cost[a].push_back(w);
            cost[b].push_back(w);
        }
        bfs(0);
        for(i=0; i<n; i++){
            d[i]=vis[i]=0;
        }
        mx=0;
        bfs(p);
        printf("Case %d: %d\n",j,mx);
    }
    return 0;
}
