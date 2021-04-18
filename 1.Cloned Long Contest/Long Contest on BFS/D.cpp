///11-April-2021
///Tags: BFS->Flood fill

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

const int               sz =1002;

bool vis[sz][sz];
int mat[sz][sz];
int cost[sz][sz];

int dx[]={1, -1, 0, 0};
int dy[]={0, 0, 1, -1};

int bfs(int x1, int y1, int x2, int y2, int n, int m){

    queue< pair< int, int > > q;
    q.push({x1,y1});
    memset(vis, 0, sizeof(vis));
    vis[x1][y1]=1;
    cost[x1][y1]=0;

    while(!q.empty()){
        int r=q.front().first;
        int c=q.front().second;
        q.pop();
        if(r==x2 and c==y2)return cost[r][c];

        for(int k=0; k<4; k++){
          int x=r+dx[k];
          int y=c+dy[k];

          if(x>=0 and y>=0 and x<n and y<m){
            if(vis[x][y]==0 and mat[x][y]==0){
                vis[x][y]=1;
                cost[x][y]=cost[r][c]+1;
                q.push({x, y});
            }
          }
        }
    }
}

int main(){

    Fast;
    read(x);
    int n, m;
    int k, r, u, v, x;

    while(cin>>n>>m){
        if(n==0 and m==0)break;

        cin>>k;
        memset(mat, 0, sizeof(mat));
        for(int i=0; i<k; i++){
            cin>>u>>x;
            while(x--){
                cin>>v;
                mat[u][v]=1;
            }
        }
        int x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;
        cout<<bfs(x1,y1,x2,y2, n, m)<<endl;
    }
    return 0;
}

