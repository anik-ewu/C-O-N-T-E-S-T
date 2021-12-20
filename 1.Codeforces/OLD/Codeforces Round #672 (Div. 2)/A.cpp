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

int arr[sz];

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    cin>>t;
    while(t--){
        cin>>n;
        for(i=1; i<=n; i++)cin>>arr[i];
        bool ok=false;

        for(i=2; i<=n; i++){
            if(arr[i]>=arr[i-1]){
                ok=true;
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

