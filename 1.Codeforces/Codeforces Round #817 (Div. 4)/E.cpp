#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;


int grid[55][55];
bool vis[55][55];

bool checkOnlyLShapes(int n, int m) {

    memset(vis, 0, sizeof(vis));

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(vis[i][j] || grid[i][j]=='.')
                continue;
            bool ok = false;
            if(j+1 < m && grid[i][j+1]=='*') {
                if(i+1 < n && grid[i+1][j+1]=='*')
            }
            if(i+1 < n && grid[i+1][j]=='*') {

            }

            if(!ok)
                return false;
        }
    }
    return true;

}

int main(){

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        cin>>n>>m;
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=n; j++) {
                cin>>grid[i][j];
            }
        }

        bool ok = checkOnlyLShapes(n, m);

    }

    return 0;
}
