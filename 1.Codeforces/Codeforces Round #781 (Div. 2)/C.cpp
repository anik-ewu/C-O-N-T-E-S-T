#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 2e5+5;

bool vis[N];
int child[N];
int taken[N];
vector < int > adj[N];


int dfs(int u) {

    for(int i=0; i<adj[u].size(); i++) {
        int x = adj[u][i];
        child[u]+= dfs(x);
    }
    return child[u]+1;
}

int bfs(int n){

    int cnt = 0;
    queue< int > q;
    priority_queue < pair< int , int > > pq;

    memset(vis, 0, sizeof(vis));
    memset(taken, 0, sizeof(taken));    memset(child, 0, sizeof(child));

    for(int i=1; i<=n; i++){
        pq.push({child[i], i});
    }

    q.push(1);
    vis[1] = 1;

    while(!q.empty()) {

        bool flag= false;

        queue< int > tempq;
        while(!q.empty()) {
            int u = q.front();
            q.pop();

            for(int i=taken[u]; i<adj[u].size(); i++) {
                int v = adj[u][i];
                if(vis[v] == 0) {
                    tempq.push(v);
                    vis[v]=1;
                    taken[u]++;
                    flag = true;
                    break;
                } else {
                    taken[u]++;
                }
            }
        }

        while(!tempq.empty()){
            q.push(tempq.front());
            tempq.pop();
        }
        while(!pq.empty() && vis[pq.top().second]){


            pq.pop();
            flag = true;
        }

        if(pq.size()) {
            q.push(pq.top().second);
            pq.pop();
        }

        if(flag)cnt++;
    }

    return cnt;
}


int main(){

    Fast;
    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        cin>>n;
        for(int i=1; i<=n; i++)adj[i].clear();
        for(int i=2; i<=n; i++) {
            cin>>a;
            adj[a].push_back(i);
        }
        dfs(1);
        cout<<bfs(n)<<endl;
    }

    return 0;
}
