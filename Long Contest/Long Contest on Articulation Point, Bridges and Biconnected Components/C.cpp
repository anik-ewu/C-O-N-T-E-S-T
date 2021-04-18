///Date : 3-4-2021
///Tags : Graph/Bridge Tree
///Idea : Make a bridge tree of the graph and count the number of leaf on that tree | ans = (leaf/2)+(leaf%2)
///N.B  : Reset the bridge tree properly

#include<bits/stdc++.h>
using namespace std;
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int               sz =1e4+50;

int c, tym;
int comp[sz];
int bicon[sz];
int vis[sz], low[sz];
vector< int > adj[sz];
vector< int > tree[sz]; ///bridge tree

void reset(int n){
    for(int i=0; i<=n+10; i++){
        tree[i].clear();
        adj[i].clear();
        comp[i]=bicon[i]=vis[i]=low[i]=0;
    }
}

void dfs(int u, int par, int c){
    comp[u]=c;
    vis[u]=low[u]=tym++;
    for(int v: adj[u]){
        if(vis[v]){
            if(v!=par)low[u]=min(low[u], vis[v]);
        }
        else{
            dfs(v, u, c);
            low[u]=min(low[u], low[v]);
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

    tym=c=1;
    for(int i=0; i<n; i++)
        if(!vis[i])dfs(i, 0, c++);

    c=1;
    vector< int > root;
    for(int i=0; i<n; i++)if(!bicon[i]){
        root.push_back(c);
        shrink(i, c++);
    }
}

int cnt_leaf_nodes(){

    int degree[sz];
    memset(degree, 0, sizeof(degree));
    for(int i=1; i<=c; i++){
        for(int j: tree[i]){
            degree[j]++;
        }
    }

    int leaf=0;
    for(int i=1;  i<=c; i++){
        leaf+=(degree[i]==1);
    }
    return leaf;
}

int main(){

    Fast;
    ///read(x);
    //write(x);

    int tc, n, m, a, b;
    cin>>tc;
    for(int i=1; i<=tc; i++){
        cin>>n>>m;
        reset(n);
        for(int j=1; j<=m; j++){
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        build_bridge_tree(n);

        int leaf=cnt_leaf_nodes();
        cout<<"Case "<<i<<": "<<(leaf/2)+(leaf%2)<<endl;
    }
    return 0;
}

