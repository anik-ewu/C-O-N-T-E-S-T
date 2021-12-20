#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const int N= 5e4+5;
vector< int > adj[N];
vector< int > L[N];
vector< ll  >  C[N];
int par[N];

void reset(int n){
    for(int i=1; i<=n; i++){
        L[i].clear();
        C[i].clear();
        adj[i].clear();
    }
}

void dfs(int u, int p){
    for(int v: adj[u]){
        if(v==p)continue;
        par[v]=u;
        dfs(v,u);
    }
}

ll bfs(int des, int load){

    bool mark[N];
    memset(mark, 0, sizeof(mark));
    int x=des;
    while(x!=0){
        mark[x]=1;
        x=par[x];
    }



    queue< pair< int, int> > q;
    q.push({1,-1});
    ll ans=0;
    while(!q.empty()){
        int u=q.front().first;
        int pr=q.front().second;
        if(u==des)return ans;
        q.pop();
        for(int i=0; i<adj[u].size(); i++){
            int v=adj[u][i];
            if(v==pr || mark[v]==0)continue;
            q.push({v,u});
            int LL=L[u][i];
            ll CC=C[u][i];
            if(load>=LL){
                if(ans==0)ans=CC;
                else ans=__gcd(ans, CC);
            }
        }
    }
}


int main(){

    Fast;
    //freopen("in.txt", "r", stdin);
    ll c;
    int a, b, l, t, n , m, q;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        cin>>n>>q;
        reset(n);
        for(int i=1; i<n; i++){
            cin>>a>>b>>l>>c;
            adj[a].push_back(b);
            adj[b].push_back(a);
            L[a].push_back(l);
            L[b].push_back(l);
            C[a].push_back(c);
            C[b].push_back(c);
        }
        cout<<"Case #"<<tc<<":";
        dfs(1, -1);
        while(q--){
            cin>>a>>b;
            cout<<' '<<(bfs(a, b));
        }
        cout<<endl;
    }

    return 0;
}
