#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1e9+7
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              3000005

bool isprime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0)return false;
    }
    return true;
}

int main(){
    Fast;///using Fast I/O
    ll a,b,c, i,j,k, t,n,m;

    cin>>n;
    m=1;
    for(i=2; i<=n; i++){
        if(isprime(i)){
            k=i;
            while(k*i<=n){
                k=k*i;
            }
            m=m*k;
        }
    }
    cout<<m<<endl;

    for(i=2; i<=n; i++){
        cout<<m%i<<endl;
    }


10


    return 0;
}

