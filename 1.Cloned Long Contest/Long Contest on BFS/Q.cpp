#include<bits/stdc++.h>
using namespace std;

const int N= 2505;

int vis[N];
int par[N];
int root, len;
vector< int > p;
vector< int > adj[N];

void dfs(int u, int deep){
    vis[u]=1;
    if(deep>len){
        root=u;
        len=deep;
    }
    for(int v: adj[u]){
        if(vis[v]==0 and v!=par[u]){
            par[v]=u;
            dfs(v, deep+1);
        }
    }
}

void path(int u){
    if(u==0){
        return ;
    }
    p.push_back(u);
    path(par[u]);
}

int main(){

    freopen("in.txt", "r", stdin);

    int n, a, b;
    cin>>n;
    for(int i=1; i<n; i++){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1, 0);
    len=0;
    memset(vis, 0, sizeof(vis));
    memset(par, 0, sizeof(par));
    dfs(root, 0);

    path(root);
    for(int i=0; i<p.size(); i++)cout<<p[i]<<' ';

    return 0;
}
