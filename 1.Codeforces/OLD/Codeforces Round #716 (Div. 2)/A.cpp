#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)    freopen("in.txt","r",stdin);
#define what_is(x) cerr<<#x<<" is "<<x<<"\n";
#define Fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

int main(){

    int a, b, t, n , m;

    cin>>t;
    while(t--){
        cin>>n;
        bool ok=false;
        for(int i=1; i<=n; i++){
            cin>>a;

            m=sqrt(a);
            if(m*m!=a){
                ok=true;
            }
        }
        if(ok){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }



    return 0;
}
