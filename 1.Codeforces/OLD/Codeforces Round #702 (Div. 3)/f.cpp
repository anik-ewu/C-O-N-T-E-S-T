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

map< int , int > fre;
map< int , int > ffre;


void solve(){

    int a,b, n,m, i,j;
    cin>>n;
    fre.clear();
    ffre.clear();
    for(i=1; i<=n; i++){
        cin>>a;
        fre[a]++;
        ffre[fre[a]]++;
    }

    vector< pair<int , int > > vp;
    int res=n-1;
    m=n;
    for(i=n; i>=1; i--){
        int temp= n-(ffre[i]*i);
        res=min(res, temp);
    }
    cout<<res<<endl;

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

