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

    int a,b, n,m, i,j;
    vector < int > v;
    vector < ll > cum;
    vector < pair<int , int >  > q;

    ll sum=0;
    ll mx=0;

    scanf("%d%d", &n, &m);
    for(i=1; i<=n; i++){
        scanf("%d", &a);
        sum+=a;
        mx=max(mx, sum);
        v.push_back(a);
        cum.push_back(a);
    }

}

int main(){
    ///Fast;///using Fast I/O
    int multitest=1;
    if(multitest){
        int tc;
        ///cin>>tc;
        scanf("%d",&tc);
        while(tc--)
            solve();
    }
    else
        solve();

    return 0;
}

