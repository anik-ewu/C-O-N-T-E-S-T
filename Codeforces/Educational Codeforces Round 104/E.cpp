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

vector < int> v;

void precal(){
    int a,b,c, n,m, i,j,l;
    i=5;
    j=8;
    v.push_back(i);
    while(i<=n){
        i+=j;
        j+=4;
        v.push_back(i);
    }
}

void solve(){

    int a,b,c, n,m, i,j,l;
    int cnt=0;
    cin>>n;
    i=5;
    j=8;
    v.push_back(i);
    while(i<=n){
        cnt++;
        i+=j;
        j+=4;
        v.push_back(i);
    }
    int res=(upper_bound(v.begin(), v.end(),n)-v.begin());
    res=max(res, 0);
    cout<<res<<endl;

}

int main(){
    Fast;///using Fast I/O
    int multitest=1;

    precal();
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

