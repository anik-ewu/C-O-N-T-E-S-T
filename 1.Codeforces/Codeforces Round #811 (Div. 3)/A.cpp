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

    int a, b, t=1, n , m, h;
    cin>>t;
    while(t--){

        vector< int > v;
        map< pair<int, int >, int  > mp;
        mp.clear();
        cin>>n>>h>>m;
        for(int i=1; i<=n; i++) {
            cin>>a>>b;
            mp[{a,b}] = 1;
        }

        sort(v.begin(), v.end());

        int resM = 0;
        int resH = 0;

        while(true) {
            if(m==60) {
                m = 0;
                h = h+1;
            }
            if(h==24) {
                h = 0;
            }
            if(mp.find({h,m})!=mp.end()) {
                break;
            }
            m++;
            resM++;
            if(resM == 60) {
                resH++;
                resM = 0;
            }
        }
        cout<<resH<<' '<<resM<<endl;


    }

    return 0;
}
