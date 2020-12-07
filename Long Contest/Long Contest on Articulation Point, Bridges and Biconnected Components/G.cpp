#include<bits/stdc++.h>
using namespace std;

int MOD=1;
const int N=1001;
int dp[N][N];

int tym, c;
bool vis[N];
int bicon[N];
int dis[N], low[N];
vector< int > adj[N];
vector< pair <int , int >  > bridge;

int f(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==j)dp[i][j]=0;
            else if(i==1 || j==1)dp[i][j]=1%MOD;
            else dp[i][j]=((dp[i-1][j])%MOD+(dp[i][j-1])%MOD+(dp[i-1][j-1])%MOD) % MOD;
        }
    }
}

void dfs(int u, int par){

    vis[u]=1;
    dis[u]=low[u]=tym++;

    for(int v : adj[u]){
        if(vis[v]){
            if(v!=par)low[u]=min(dis[v], low[u]);
        }
        else {
            dfs(v, u);
            low[u]=min(low[u], low[v]);
        }
    }
}

void clr(int n){

    tym=0, c=1;
    bridge.clear();
    for(int i=1; i<=n; i++){
        adj[i].clear();
        bicon[i]=0;
    }
}

void shrink(int u, int now){

    bicon[u]=now;
    for(int v: adj[u]){
        if(!bicon[v]){
            if(low[v]>dis[u]){
                bridge.push_back({u,v});
                shrink(v, c++);
            }
            else
                shrink(v, now);
        }
    }
}

int main(){

    int T, n, m, x, y;

    ///freopen("in.txt", "r", stdin);

    cin>>T;
    while(T--){
        cin>>n>>m>>MOD;
        clr(n);///reset
        f(n);
        for(int i=1; i<=m; i++){
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        dfs(1, 0);
        shrink(1,c++);

        int gain=0;
        for(int i=0; i<bridge.size(); i++){

            int a=bridge[i].first;
            int b=bridge[i].second;
            for(int j=1; j<=n; j++){
                if(bicon[b]==bicon[j] ){
                    gain=max(gain, dp[a][j]-dp[a][b]);
                }
                if(bicon[a]==bicon[j]){
                    gain=max(gain, dp[b][j]-dp[b][a]);
                }
            }
        }
        cout<<gain<<endl;
    }

    return 0;
}
