#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

int arr[50][50];

int main(){

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        cin>>n>>m;
        int mx = -INT_MAX;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cin>>arr[i][j];
                mx = max(mx, arr[i][j]);
            }
        }
        int x , y;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(arr[i][j]==mx){
                  x = max(i, n-i+1);
                  y = max(j, m-j+1);
                }
            }
        }

        cout<<(x*y)<<endl;


    }

    return 0;
}
