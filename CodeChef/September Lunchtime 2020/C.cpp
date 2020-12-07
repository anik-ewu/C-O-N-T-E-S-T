#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1000000007
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              30005

bool vis[sz];
vector< int >  top, adj[sz];

void dfs(int u){
    vis[u]=1;
    for(int i=0; i<adj[u].size(); i++){
        int v=adj[u][i];
        if(vis[v]==0){
            dfs(v);
        }
    }
    top.push_back(u);
}

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    cin>>t;
    while(t--){
        cin>>n;
        for(i=1; i<=n; i++)adj[i].clear();
        for(i=1; i<n; i++){
            cin>>a>>b;
            adj[a].push_back(b);
        }
        top.clear();
        memset(vis,0,sizeof(vis));
        for(i=1; i<=n; i++){
            if(vis[i]==0)dfs(i);
        }

        reverse(top.begin(),top.end());
        memset(vis,0,sizeof(vis));

        int mx=0;
        for(i=0; i<n; i++){
            if(vis[top[i]]==0){
                edge=0;
                dfs(top[i]);
                mx++;
            }
        }
        cout<<mx-1<<endl;
    }

    return 0;
}

