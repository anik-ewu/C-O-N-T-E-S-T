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

void solve(){

    int a,b, n, l, r, mid, idx;

    cin>>n;
    l=1; r=n;
    while(r-l>1){

        mid=(l+r)/2;
        




        cout<<'?'<<' '<<l<<' '<<r<<endl;
        fflush(stdout);
        cin>>idx;

        if(idx==r){

        }

        cout<<'?'<<' '<<l<<' '<<r<<endl;
        





    }



}

int main(){
    Fast;///using Fast I/O
    int multitest=0;
    if(multitest){
        int tc;
        cin>>tc;
        while(tc--)
            solve();
    }
    else
        solve();

    return 0;
}

