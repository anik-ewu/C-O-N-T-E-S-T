#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e18;
#define read(x)    freopen("in.txt","r",stdin);
#define what_is(x) cerr<<#x<<" is "<<x<<"\n";
#define Fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

int main(){

    ll a, b, t, n , m;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%2050!=0){
            cout<<-1<<endl;
        }
        else{
            int cnt=0;
            while(n){
                ll x=2050;
                cnt++;
                while((x*10)<=n)x=x*1LL*10;
                n-=x;
            }
            cout<<cnt<<endl;
        }
    }



    return 0;
}
