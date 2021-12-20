#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)    freopen("in.txt","r",stdin);
#define what_is(x) cerr<<#x<<" is "<<x<<"\n";
#define Fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 3e3+5;

int n;
int arr[N];
int dis[N];
int vis[N];
int dp[N][N];
vector < int > adj[N];

void bfs(){

    queue< int > q;
    memset(vis, 0, sizeof(vis));

    q.push(1);
    dis[1]=0;
    vis[1]=1;

    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int v: adj[u]){
            if(vis[v]==0){
                vis[v]=1;
                dis[v]=dis[u]+1;
                q.push(v);
            }
        }
    }

}

int f(int i, int t){
    if(i>n || t<=0)return 0;
    if(vis[i]==0)f(i+1, t);
    else{
        if(dp[i][t]!=-1)return dp[i][t];
        int b=f(i+1, t);
        int a=0;
        if(dis[i]*2<=t){
            a=arr[i]+f(i, t-(dis[i]*2));
        }
        dp[i][t]=max(a, b);
    }
    return dp[i][t];
}

int main(){

    int a, b, t , m;
    cin>>n>>m>>t;

    for(int i=2; i<=n; i++)cin>>arr[i];
    for(int i=1; i<=m; i++){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bfs();
    memset(dp, -1, sizeof(dp));
    for(int i=1; i<=t; i++){
        cout<<f(2, i)<<' ';
    }
    return 0;
}
