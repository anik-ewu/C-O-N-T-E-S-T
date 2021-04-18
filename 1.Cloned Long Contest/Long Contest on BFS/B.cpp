

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll                inf = 1e9;
const int               mod=1e9+7;

#define all(x)          (x).begin(), (x).end()
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int               sz =205;
int col[sz];
vector< int > adj[sz];

bool bfs(){

    queue< int > q;
    memset(col, 0, sizeof(col));
    q.push(0);
    col[0]=1;

    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int v: adj[u]){
            if(col[v]==0){
                if(col[u]==1)col[v]=2;
                else col[v]=1;
                q.push(v);
            }
            else if(col[u]==col[v])return false;
        }
    }
    return true;
}

int main(){

    Fast;
    int t, n, m, a, b;
    while(cin>>n and n){
        cin>>m;
        for(int i=0; i<=n; i++)adj[i].clear();
        for(int i=1; i<=m; i++){
            cin>>a>>b;
            adj[a].emplace_back(b);
            adj[b].emplace_back(a);
        }
        if(bfs()){
            cout<<"BICOLORABLE."<<endl;
        }
        else{
            cout<<"NOT BICOLORABLE."<<endl;
        }

    }
    return 0;
}

