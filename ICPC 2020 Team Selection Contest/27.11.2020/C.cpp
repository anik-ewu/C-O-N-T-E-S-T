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

string st, ed;
bool vis[10][10];
int cost[10][10];
int dx[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
int dy[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
bool check(int x, int y){
    return((x>=1 && x<=8) &&(y>=1 && y<=8));
}


int bfs(string a, string b){

    int x1=(a[0]-'a')+1;
    int y1=(a[1]-'0');
    int x2=(b[0]-'a')+1;
    int y2=(b[1]-'0');
    memset(vis, 0, sizeof(vis));
    memset(cost, 0, sizeof(cost));

   queue< pair< int , int > >q;
    q.push({x1,y1});
    vis[x1][y1]=1;
    cost[x1][y1]=0;

    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(int i=0; i<8; i++){
            int u=dx[i]+x;
            int v=dy[i]+y;
            if(check(u,v)){
                if(vis[u][v]==0){
                    vis[u][v]=1;
                    cost[u][v]=cost[x][y]+1;
                    q.push({u,v});
                }
                else if(cost[u][v]>(cost[x][y]+1)){
                    cost[u][v]=cost[x][y]+1;
                    q.push({u,v});
                }
            }
        }

    }
    return cost[x2][y2];

}

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    cin>>t;
    while(t--){
        cin>>st>>ed;
        cout<<bfs(st, ed)<<endl;
    }







    return 0;
}

