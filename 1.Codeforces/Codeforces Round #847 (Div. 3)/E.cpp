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

    int a, b, t=1, n , m;
    cin>>t;

    while(t--){
        cin>>n;
        a = n + (n/2);
        b = (n/2);

        if((a ^ b) == n && (a + b == n * 2)) {
            cout<<a <<' '<<b<<endl;
        }
        else {
            cout<<-1<<endl;
        }
    }

    return 0;
}
