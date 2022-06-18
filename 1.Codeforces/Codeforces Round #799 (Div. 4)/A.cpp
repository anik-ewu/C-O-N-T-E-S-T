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

    int a, b, c, d, res, t=1, n , m;
    cin>>t;
    while(t--){

        res = 0;
        cin>>a>>b>>c>>d;
        res  += (a<b);
        res  += (a<c);
        res  += (a<d);

        cout<<res<<endl;
    }

    return 0;
}
