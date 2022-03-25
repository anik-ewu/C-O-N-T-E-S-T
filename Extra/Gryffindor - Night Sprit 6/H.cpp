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

    int base;
    string s, p;
    cin>>base>>s>>p;

    reverse(s.begin(), s.end());
    reverse(p.begin(), p.end());

    ll x = 0 , y = 0;

    for(int i = 0; i<s.size(); i++) {
        x += ( powl(base, i) * 1LL * (s[i]-'0') );
    }
    for(int i = 0; i<p.size(); i++) {
        y += ( powl(base, i) * 1LL * (p[i]-'0') );
    }
    cout<<(x*1LL*y)<<endl;


    return 0;
}
