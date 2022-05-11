#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

string s;
vector<string> vs;

int main(){

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        vs.clear();
        cin>>n>>m;
        for(int i = 1; i <= n; i++) {
            cin>>s;
            vs.push_back(s);
        }

        int res  = INT_MAX;
        for(int i = 0; i < n; i++) {

            for(int j = i+1; j<n; j++) {
                int x = 0;
                for(int k = 0; k < m; k++) {
                    x +=abs(vs[i][k]-vs[j][k]);
                }
                res = min(res, x);
            }
        }
        cout<<res<<endl;
    }

    return 0;
}
