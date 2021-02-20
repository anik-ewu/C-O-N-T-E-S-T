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

vector < int > adj[55];
int vis[55], dis[55];
bool bfs(int s, int k){

    memset(vis, 0, sizeof(vis));
    memset(dis, 0, sizeof(dis));
    queue< int >   q;
    q.push(s);
    vis[s]=1;
    dis[s]=0;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int i=0; i<adj[u].size(); i++){
            int v=adj[u][i];
            if(vis[v]==0){
                q.push(v);
                dis[v]=dis[u]+1;
                vis[v]=1;
            }
            else{
                int path=dis[u]+dis[v]+1;
                if(path%2==1 and path<=k){
                    return true;
                }
            }
        }
    }


    return false;


}

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        for(i=0; i<n; i++){
            adj[i].clear();
        }
        for(i=0; i<m; i++){
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
       int cnt=0;
       if(k==0){
        cnt=n;
       }
       else if(k%2==0){
            for(i=0; i<n; i++){
                if(adj[i].size())cnt++;
            }
        }
        else{
            for(i=0; i<n; i++){
                if(bfs(i, k))cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}

