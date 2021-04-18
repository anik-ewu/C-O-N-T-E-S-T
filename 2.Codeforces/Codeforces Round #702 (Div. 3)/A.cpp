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

int arr[100];

void solve(){

    int a,b, n,m, i,j;
    cin>>n;
    for(i=1; i<=n; i++){
        cin>>arr[i];
    }
    int cnt=0;
    for(i=2; i<=n; i++){
        a=max(arr[i-1], arr[i]);
        b=min(arr[i-1], arr[i]);

        while(b*2<a){
            b=b*2;
            cnt++;
        }
    }
    cout<<cnt<<endl;



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

