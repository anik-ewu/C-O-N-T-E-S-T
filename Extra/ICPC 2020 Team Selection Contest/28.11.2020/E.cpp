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

int adj[101][101];

int main(){
    ///Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    cin>>t;
    while(t--){
        cin>>n>>m;
        memset(adj, 0, sizeof(adj));
        for(i=1; i<=m; i++){
            cin>>a>>b;
            adj[a][b]=1;
        }
        if(adj[1][n]){
            cout<<"Jorah Mormont"<<endl;
        }
        else{
            cout<<"Khal Drogo"<<endl;
        }

    }

    return 0;
}

