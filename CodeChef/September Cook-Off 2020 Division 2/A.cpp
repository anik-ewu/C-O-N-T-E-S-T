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

int main(){
    Fast;///using Fast I/O
    int i, t, n, k, l;

    cin>>t;
    while(t--){
        cin>>n>>k>>l;
        bool ok=true;
        if(n>1 and k==1){
            ok=false;
        }
        else if(k*l<n){
            ok=false;
        }
        if(ok){
            int i=k;
            while(n--){
                cout<<i--<<' ';
                if(i==0)i=k;
            }
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }

    }

    return 0;
}

