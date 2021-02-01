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

int main(){
    Fast;///using Fast I/O
    ll a,b,c, i,j,k, t,n,m;

    vector< ll > v;
    cin>>n;
    for(i=1; i<=sqrt(n); i++){
        if(n%i==0)v.push_back(i);
        if(n%i==0 && i!=(n/i))v.push_back((n/i));
    }
    sort(v.begin(), v.end());
    for(i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }







    return 0;
}

