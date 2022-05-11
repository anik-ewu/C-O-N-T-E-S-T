#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

int arr[201][201];

int fun(int i, int j, int n, int m){

    int x = i;
    int y = j;
    int sum = arr[i][j];
    while(++x<=n and ++y<=m) sum+=arr[x][y];
    x=i; y=j;
    while(--x>=1 and --y>=1) sum+=arr[x][y];
    x=i; y=j;
    while(--x>=1 and ++y<=m) sum+=arr[x][y];
    x=i; y=j;
    while(++x<=n and --y>=1) sum+=arr[x][y];

    return sum;

}

int main(){

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        cin>>n>>m;
        for(int i = 1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cin>>arr[i][j];
            }
        }

        int res = 0;
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=m; j++){
                res = max(res, fun(i,j,n,m));
            }
        }
        cout<<res<<endl;




    }

    return 0;
}
