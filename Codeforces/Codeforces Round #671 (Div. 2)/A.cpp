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

string s;

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;

        bool ok=false;
        if(n%2==1){
            for(i=0; i<n; i+=2){
                if((s[i]-'0')%2==1){
                    ok=true;
                    break;
                }
            }
        }
        else{
            ok=true;
            for(i=1; i<n; i+=2){
                if((s[i]-'0')%2==0){
                    ok=false;
                    break;
                }
            }
        }
        if(ok){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }

    }



    return 0;
}

