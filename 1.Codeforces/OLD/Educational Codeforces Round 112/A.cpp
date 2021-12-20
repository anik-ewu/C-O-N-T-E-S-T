#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)    freopen("in.txt","r",stdin);
#define what_is(x) cerr<<#x<<" is "<<x<<"\n";
#define Fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

int main(){

    ll a, b, c, t, n , m;

    cin>>t;
    while(t--){
        cin>>n;
        a=(n/6)*15;
        b=n%6;
        if(n<=6){
            a=15;
        }
        else if(b){
            if(b<=2)a+=5;
            else if(b<=4)a+=10;
            else a+=15;
        }

        cout<<a<<endl;
    }

    return 0;
}
