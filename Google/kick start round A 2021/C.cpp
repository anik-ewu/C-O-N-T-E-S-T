#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll                inf = 1e9;

#define all(x)          (x).begin(), (x).end()
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int               mod=1e9+7;
const int               sz =1e5+5;

int cs=1;
int arr[305][305];

int dx[]={1, -1, 0, 0};
int dy[]={0, 0, 1, -1};

ll bfs(int n, int m, int mx){

    priority_queue< pair< int ,pair< int,  int > > >q;
    bool vis[n+1][m+1];
    memset(vis, 0, sizeof(vis));

     for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(arr[i][j]==mx){
                q.push({mx, {i,j}});
                vis[i][j]=1;
            }
        }
    }

    ll ans=0;
    while(!q.empty()){
        int x=q.top().second.first;
        int y=q.top().second.second;
        q.pop();

        for(int k=0; k<4; k++){
            int u=x+dx[k];
            int v=y+dy[k];

            if(u>=1 and u<=n and v>=1 and v<=m and vis[u][v]==0){
                vis[u][v]=1;
                int dif=abs(arr[x][y]-arr[u][v]);
                if(dif>1){
                    ans+=dif-1;
                    arr[u][v]+=dif-1;
                }
                q.push({arr[u][v],{u, v}});
            }
        }
    }
    return ans;
}

void solve(){

    int a,b, n,m, i,j;
    cin>>n>>m;
    int mx=0;
    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            cin>>arr[i][j];
            mx=max(arr[i][j], mx);
        }
    }

    ll res=bfs(n, m, mx);
    cout<<"Case #"<<cs++<<": "<<res<<endl;
}

int main(){
    
    Fast;   
    read(x); write(x);

    int multitest=1;
    if(multitest){
        int tc;
        cin>>tc;
        while(tc--)
            solve();
    }
    else
        solve();

    return 0;
}

