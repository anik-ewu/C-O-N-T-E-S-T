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


string s;

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;
    cin>>t;
    while(t--){
        cin>>s;

        int ans=0;
        a=b=0;
        for(i=s.size()-1; i>=0; i--){
           if(s[i]=='A' && !b){
            ans++;
           }
           else if(s[i]=='A' && b){
            b--;
           }
           else if(s[i]=='B'){
            b++;
           }
        }
        cout<<ans+(b%2)<<endl;

    }
    return 0;
}

