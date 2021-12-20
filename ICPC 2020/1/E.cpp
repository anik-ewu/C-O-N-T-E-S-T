#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e6+5;

bool vis[N];
vector< int > adj[N];

void dfs(int u){

    vis[u]=1;
    for(auto v: adj[u]){
        if(vis[v]==0)
            dfs(v);
    }
}

int main(){

    Fast;
    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        cin>>n>>m;
        for(int i=1; i<=n; i++){
            vis[i]=0;
            adj[i].clear();
        }
        for(int i=1; i<=m; i++){
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        int cnt=0;
        for(int i=1; i<=n; i++){
            if(vis[i]==0){
                cnt++;
                dfs(i);
            }
        }
        cout<<cnt-1<<endl;


    }

    return 0;
}
