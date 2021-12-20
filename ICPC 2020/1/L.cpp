#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 5e5+5;
int arr[N];
int cost[N];
vector< int > adj[N];
vector< int >spicy[101];
vector< pair< int , int > > vp;
bool vis[N];

void bfs(int u){

    queue< int > q;
    memset(vis, 0, sizeof(vis));
    for(int i=0; i<spicy[u].size(); i++){
        int x=spicy[u][i];
        q.push(x);
        vis[x]=1;
        cost[x]=0;
    }

    while(!q.empty()){
        int uu=q.front();
        q.pop();

        for(int i=0; i<adj[uu].size(); i++){
            int v=adj[uu][i];

            if(vis[v]==0){
                q.push(v);
                cost[v]=cost[uu]+1;
                vis[v]=1;
            }
        }
    }
}

int main(){

    Fast;
    int a, b, t=1, n , m, q;
    cin>>n>>m>>q;
    for(int i=1; i<=n; i++){
        cin>>a;
        spicy[a].push_back(i);
    }

    for(int i=1; i<=m; i++){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for(int i=1; i<=q; i++){
        cin>>a>>b;
        vp.push_back({a,b});
    }
    memset(arr, -1, sizeof(arr));
    for(int i=1; i<=100; i++){
        bfs(i);

        for(int j=0; j<q; j++){
            if(vp[j].second>=i){
                if(arr[j+1]==-1 and vis[vp[j].first]==1)
                    arr[j+1]=cost[vp[j].first];
                else if(vis[vp[j].first]==1){
                    arr[j+1]=min(arr[j+1], cost[vp[j].first]);
                }
            }
        }
    }


    for(int i=1; i<=q; i++)
        cout<<arr[i]<<endl;


    return 0;
}
