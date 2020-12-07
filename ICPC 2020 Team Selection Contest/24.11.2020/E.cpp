#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;
#define sz              3000005
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

string s,p;

ll solve(ll n, ll k){

     if(k==1)return n;
     ll po=1;
     while(po<n){
        po=po*k;
     }

     ll ans=0;
     while(n){
        if(n>=po){
            ll coins=n/po;
            if(coins>k){
                coins=k;
            }
            ans+=coins;
            n-=(coins*po);
        }
        po=po/k;
     }
     return ans;

}

int main(){
    Fast;
    ll a,b,c, i,j,k, n,m,t, cs=1;
    cin>>t;
    while(t--){
        cin>>n>>k;
        cout<<solve(n, k)<<endl;
    }




    return 0;
}

