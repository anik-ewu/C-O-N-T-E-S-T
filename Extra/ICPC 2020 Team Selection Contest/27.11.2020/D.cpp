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

char arr[200][200];
int vis[200][200];
int cost[200][200];

int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
bool check(int x, int y, int n, int m){
    return((x>=1 && x<=n) &&(y>=1 && y<=m));
}
void bfs(int n, int m){

    queue< pair< int, int > > q;
    memset(vis, 0, sizeof(vis));
    memset(cost, 0, sizeof(cost));

     for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(arr[i][j]=='1'){
                cost[i][j]=0;
                vis[i][j]=1;
                q.push({i,j});
            }
        }
    }

    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int u=dx[i]+x;
            int v=dy[i]+y;
            if(check(u,v, n, m) && vis[u][v]==0){
                    vis[u][v]=1;
                    cost[u][v]=cost[x][y]+1;
                    q.push({u,v});
                }
            }
        }
    }


int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    cin>>t;
    while(t--){
        cin>>n>>m;
        for(i=1; i<=n; i++){
            for(j=1; j<=m; j++){
                cin>>arr[i][j];
            }
        }
        bfs(n,m);

        for(i=1; i<=n; i++){
            for(j=1; j<=m; j++){
                if(j>1)cout<<' ';
                cout<<cost[i][j];
            }
            cout<<endl;
        }
    }

    return 0;
}

