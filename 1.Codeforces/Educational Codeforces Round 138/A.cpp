#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

int main(){

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){
        cin>>n>>m;

        int arr[n+2][n+2];
        memset(arr, 0, sizeof(arr));

        for(int i=1; i<=m; i++) {
            cin>>a>>b;
            for(int j=1; j<=n; j++){
                arr[a][j]++;
            }
            for(int j=1; j<=n; j++){
                arr[j][b]++;
            }
        }

        bool ok = false;
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=n; j++) {
                if(arr[i][j] <= 1) {
                    ok = true;
                }
            }
        }
        if(ok) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }



    }

    return 0;
}
