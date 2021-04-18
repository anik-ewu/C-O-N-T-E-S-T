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

vector < pair< int , int > > v;

void solve(){

    int a,b, n,m, i,j;
    cin>>n;
    v.clear();
    for(i=1; i<=n; i++){
        cin>>a;
        v.push_back({a, i});
    }
    sort(v.begin(), v.end());

    ll sum=0;
    vector < ll > cum;
    for(i=0; i<n; i++){
        sum+=v[i].first;
        cum.push_back(sum);
    }
    int pos=0;

    for(i=1; i<n; i++){
        if(v[i].first>cum[i-1]){
            pos=i;
        }
    }

    vector < int > res;
    for(i=pos; i<n; i++){
        res.push_back(v[i].second);
    }
    sort(res.begin(), res.end());
    cout<<res.size()<<endl;
    for(i=0; i<res.size(); i++){
        cout<<res[i]<<' ';
    }
    cout<<endl;




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

