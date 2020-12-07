#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1000000007
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              3000005

bool mark[sz];
vector<int > adj[sz];

void dfs(int u){

    mark[u]=1;
    for(int i=0; i<adj[u].size(); i++){
        int v=adj[u][i];
        if(mark[v]==0){
            dfs(v);
        }
    }
}

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    cin>>n>>m;
    for(i=1; i<=m; i++){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int cnt=0;
    for(int i=1; i<=n; i++){
        if(mark[i]==0){
            cnt++;
            dfs(i);
        }
    }

    cout<<cnt-1<<endl;








    return 0;
}

