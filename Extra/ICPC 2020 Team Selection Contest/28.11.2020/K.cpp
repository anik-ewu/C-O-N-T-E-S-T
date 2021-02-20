#include <bits/stdc++.h>
using namespace std;

const int maxn = 3e5 + 10;

vector<int> adj[maxn];
vector< int > tree[maxn];///Bridge Tree
int comp[maxn];/// Component In The Graph
int bicon[maxn];///Biconnected Component
int vis[maxn], low[maxn], tym = 1, c = 0;

void dfs(int u, int par, int c) {
	comp[u] = c;
	vis[u] = low[u] = tym++;
	for(int v : adj[u]) {
		if(vis[v]) {
			if(v != par) low[u] = min(low[u], vis[v]);
		}else{
			dfs(v, u, c);
			low[u] = min(low[u], low[v]);
		}
	}
}

void shrink(int u, int now){
    bicon[u] = now;
    for(int v : adj[u])
        if(!bicon[v]){
            if(low[v] > vis[u]){
                tree[now].push_back(c);
                tree[c].push_back(now);
                shrink(v, c++);
            }
            else
                shrink(v, now);
        }
}

void build_bridge_tree(int n){

	c = 1;
	for(int i = 1; i <= n; i++)
		if(!vis[i]) dfs(i, 0, c++);

	c = 1;
	vector<int> root;
	for(int i = 1; i <= n; i++) if(!bicon[i]) {
		root.push_back(c);
		shrink(i, c++);
    }
}

void precal(){

    c--;///component

    while(c>1){
    ///find diameter and make new tree
            queue< int >  q;

    }


}

int main(){

    int u,v,n,m,k;
    cin>>n>>m>>k;

    for(int i=1; i<=m; i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    build_bridge_tree(n);

    precal();


    return 0;
}

