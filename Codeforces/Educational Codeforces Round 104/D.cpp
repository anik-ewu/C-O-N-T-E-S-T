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

    int a,b,c, n,m, i,j,l;
    int cnt=0;
    cin>>n;

    i=5;
    j=8;
    l=0;
    while(i<=n){
        cnt++;
        i+=j;
        j+=4;
        l++;
    }
    cout<<l<<endl;
    cout<<cnt<<endl;
}

int main(){
    Fast;///using Fast I/O
    int multitest=1;
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

