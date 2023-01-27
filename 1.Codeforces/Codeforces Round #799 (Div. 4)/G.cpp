#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

bool vis[N];
int par[N];
vector<int>adj[N];
map<pair<int,int>, int> weight;

void bfs(int st, int ed) {

    memset(par, 0, sizeof(par));
    memset(vis, 0, sizeof(vis));


    queue<int>q;
    q.push(st);
    vis[st] = 1;
    par[st] = -1;

    while(!q.empty()) {
        int u = q.front();
        q.pop();
        if(u == ed)
            return;
//        cout<<u<<' '<<"------>";
        for(int v: adj[u]) {
            if(!vis[v]) {
                vis[v] = 1;
                par[v] = u;
                q.push(v);
//                cout<<v<<' ';
            }
        }
//        cout<<endl;
    }

}

int xorOfPath(int st, int ed) {

    int xorVal = 0;
    while(par[ed] != -1) {
        cout<<ed;
        ed = par[ed];
        xorVal = xorVal ^ weight[{par[ed], ed}];
    }
    cout<<ed<<endl;

    return xorVal;
}

int main(){

    int a, b, c,  t=1, n , m, st, ed;
    cin>>t;
    while(t--){
        cin>>n>>st>>ed;

        for(int i=0; i<=n; i++)
            adj[i].clear();

        weight.clear();

        for(int i=1; i<n; i++) {
            cin>>a>>b>>c;
            adj[a].push_back(b);
            adj[b].push_back(a);
            weight[{a,b}] = c;
            weight[{b,c}] = c;

        }

        bfs(st, ed);

        if(xorOfPath(st, ed) == 0) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }

    }

    return 0;
}
