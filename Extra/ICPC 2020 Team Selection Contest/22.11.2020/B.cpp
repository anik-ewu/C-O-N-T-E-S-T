#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1000000007
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              3000005

#define lld long double
#define phi (1+sqrt(5))/2

int main(){
    Fast;///using Fast I/O
    lld a,b,c, i,j,k, t,n,m;

    cin>>t;
    while(t--){
        cin>>n;
         lld big=1;
        while(big*phi<=n){
            big*=phi;
        }
        int mx=100;
        int decimal=0;
        while(n>0){
            if(!mx)break;

            if(big<1 && decimal==0){
                cout<<'.';
                decimal=1;
            }
            if(n>=big || abs(n-big)<=.000000001){
                cout<<1;
                n-=big;
            }
            else
                cout<<0;
            big/=phi;
            mx--;
        }
        cout<<endl;

    }


    return 0;
}

