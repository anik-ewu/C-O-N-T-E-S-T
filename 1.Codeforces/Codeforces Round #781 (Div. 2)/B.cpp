#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

map < int , int > mp;

int main(){

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        cin>>n;
        int mx = 0;
        mp.clear();
        for(int i = 1; i<=n; i++) {
            cin>>a;
            mp[a]++;
            mx = max(mx, mp[a]);
        }

        if(mx == n) {
            cout<<0<<endl;
            continue;
        }

        int m = mx;
        int res = 1;
        int x = mx;
        while(m != n) {

            if(x == 0) {
                mx = mx*2;
                x = mx;
                res ++;
            }
            m++;
            x--;
            res++;
        }

        cout<<res<<endl;
    }

    return 0;
}
