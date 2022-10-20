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

        string s;
        string p;
        cin>>n>>s>>p;

        bool ok = true;

        for(int i=0; i<n; i++) {
            if(s[i]!=p[i] && (s[i]=='R' || p[i]=='R')) {
                ok = false;
                break;
            }
        }


        if(ok){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }




    }

    return 0;
}
