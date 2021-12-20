#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)    freopen("in.txt","r",stdin);
#define what_is(x) cerr<<#x<<" is "<<x<<"\n";
#define Fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 2e5+5;

map< int , int > mp;


int main(){

    Fast;
    int a, b, t, n , m;
    cin>>t;
    while(t--){
        cin>>n;
        ll res=0;
        mp.clear();
        for(int i=1; i<=n; i++){
            cin>>a;
            int d=a-i;
            if(mp.find(d)!=mp.end()){
                res+=mp[d];
            }
            mp[d]++;
        }
        cout<<res<<endl;
    }
    return 0;
}
