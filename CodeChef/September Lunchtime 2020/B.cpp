#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1000000007
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              30005

vector< int > v[sz];

int main(){o
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    cin>>t;
    while(t--){
        cin>>n;
        for(i=1; i<=n; i++)v[i].clear();
        for(i=1; i<=n; i++){
            cin>>a;
            v[a].push_back(i);
        }
        bool ok=true;
        for(i=1; i<=n; i++){
            c=i;
            for(j=0; j<v[i].size(); j++){
                c=__gcd(c,v[i][j]);
            }
            if(c!=i){
                ok=false;
                break;
            }
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

