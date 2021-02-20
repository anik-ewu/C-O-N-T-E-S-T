#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1000000007
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              100005

int cost[sz];
bool vis[sz];
vector< int > adj[sz];

void bfs(int s){

    memset(vis, 0, sizeof(vis));
    memset(cost, 0, sizeof(cost));

    queue< int > q;
    q.push(s);
    vis[s]=1;
    cost[s]=0;

    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int i=0; i<adj[u].size(); i++){
            int v=adj[u][i];
            if(vis[v]==0){
                q.push(v);
                cost[v]=cost[u]+1;
                vis[v]=1;
            }

        }
    }
}

int main(){
    ///Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    ///freopen("jumping.in","r",stdin);

    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        for(i=1; i<=n; i++)adj[i].clear();
        for(i=1; i<=n; i++){
        scanf("%d", &a);
            if(i+a<=n && i!=n){
                ///adj[i].push_back(i+a);
                adj[i+a].push_back(i);
            }
            if(i-a>=1 && i!=n){
                ///adj[i].push_back(i-a);
                adj[i-a].push_back(i);
            }
        }
        bfs(n);

        for(i=1; i<=n; i++){
            if(vis[i])printf("%d\n",cost[i]);
            else printf("-1\n");
        }
    }

    return 0;
}

