#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define mod             1e9+7
#define sz              100005

void solve(){
    int a,b, n,m,k, i,j;
    cin>>n>>k;
    vector < int > v;

    j=k-1;
    while(j and (k-j<=j)){
        v.push_back(j);
        j--;
    }
    for(i=k+1; i<=n; i++)v.push_back(i);

    cout<<v.size()<<endl;
    for(i=0; i<v.size(); i++){
        cout<<v[i]<<' ';
    }
    cout<<endl;

}

int main(){
    Fast;///using Fast I/O
    
    read(x); write(x);

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

