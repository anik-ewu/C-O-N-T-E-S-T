///11-April-2021
///Tags: Graph/Basic BFS

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

const int               sz =105;

int arr[sz];
bool vis[sz];
int mat[sz][sz];

pair< int , int >  bfs(int src, int n){

    queue< int > q;
    memset(vis, 0, sizeof(vis));
    int sum=0;
    int node=0;
    vis[0]=1;
    q.push(0);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        node=u;
        int v;
        int mx=-1;
        for(int i=0; i<n; i++){
            if(mat[u][i] and arr[i]>mx and vis[i]==0){
                mx=arr[i];
                v=i;
            }
        }
        if(mx!=-1){
            q.push(v);
            vis[v]=1;
            sum+=mx;
        }

    }
    return {sum, node};
}

int main(){

    Fast;
    //read(x);
    int t, n, a, b, m;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        cin>>n>>m;
        for(int i=0; i<n; i++)cin>>arr[i];

        memset(mat, 0, sizeof(mat));
        for(int i=1; i<=m; i++){
            cin>>a>>b;
            mat[a][b]=1;
        }
        pair< int , int > res=bfs(0, n);
        cout<<"Case "<<tc<<": "<<res.first<<' '<<res.second<<endl;
    }

    return 0;
}

