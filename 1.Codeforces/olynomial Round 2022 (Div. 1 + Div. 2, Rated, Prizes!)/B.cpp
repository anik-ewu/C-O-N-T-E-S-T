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

    int a, b, t=1, n , m, k;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        int mx = 0;
        int countMx = 0;
        for(int i=1; i<=m; i++) {
            cin>>a;
            if(a > mx) {
                mx = a;
                countMx = 0;
            }
            countMx += (a==mx);

        }

        int grid = n/k;

        if(grid < mx) {
            cout<<"NO"<<endl;
        }
        else if(grid > mx) {
            cout<<"YES"<<endl;
        }
        else if(grid == mx and (n%k <= countMx)) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }



    }

    return 0;
}
