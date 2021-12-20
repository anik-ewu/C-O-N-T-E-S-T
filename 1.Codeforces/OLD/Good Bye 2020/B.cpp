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

map < int , int > mp;

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    cin>>t;
    while(t--){
        cin>>n;
        mp.clear();
        int ans=0;
        for(i=1; i<=n; i++){
            cin>>a;
            if(mp[a]==0){
                ans++;
                mp[a]=1;
            }
            else{
                a++;
                if(mp[a]==0){
                    ans++;
                    mp[a]=1;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

