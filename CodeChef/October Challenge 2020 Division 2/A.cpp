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

map< int , int > mp;

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m,x, y;

    cin>>t;
    while(t--){
        cin >> n >> k >>  x >> y;
        bool ok=false;
        mp.clear();
        while(true){
            if(x==y)ok=true;
            x=(x+k)%n;
            if(mp.find(x)!=mp.end()) break;
            mp[x]=1;
        }
        if(ok){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }

    return 0;
}

