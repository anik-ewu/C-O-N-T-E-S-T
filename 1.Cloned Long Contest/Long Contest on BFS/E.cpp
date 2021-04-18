///10-April-2021
///Tags: Graph/BFS
///Notes: Bi-color each component and then sum up the maximum no of color of each component

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll                inf = 1e9;
const int               mod=1e9+7;

#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int               sz =1e5+5;
int col[sz];
vector< int > adj[sz];

int bfs(int src){
    queue< int > q;
    q.push(src);
    col[src]=1;
    int x=1 ,y=0;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int v: adj[u]){
            if(col[v]==0){
                if(col[u]==1)col[v]=2, y++;
                else col[v]=1, x++;
                q.push(v);
            }
        }
    }
    return max(x,y);
}

int main(){

    Fast;
    int t, n, m, a, b;
    cin>>t;

    for(int tc=1; tc<=t; tc++){
        cin>>m;
        set< int> st;
        for(int i=1; i<=m; i++){
            cin>>a>>b;
            adj[a].emplace_back(b);
            adj[b].emplace_back(a);
            st.insert(a);
            st.insert(b);
        }

        memset(col, 0, sizeof(col));
        int ans=0;
        for(int i: st){
          if(col[i]==0)ans+=bfs(i);
        }
        cout<<"Case "<<tc<<": "<<ans<<endl;

        for(int i: st)adj[i].clear();

    }
    return 0;
}

