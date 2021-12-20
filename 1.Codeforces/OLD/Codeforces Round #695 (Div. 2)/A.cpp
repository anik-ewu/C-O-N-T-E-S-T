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

void solve(){

    int n, m, i, j, k;
    cin>>n;
    if(n){
        cout<<9;
        n--;
    }

    if(n){
        cout<<8;
        n--;
    }

    if(n){
        cout<<9;
        n--;
    }
    k=0;
    for(i=1; i<=n; i++){
        cout<<k++;
        if(k>=10)k=0;
    }
    cout<<endl;
}

int main(){
    Fast;///using Fast I/O
    int multipletest=1;
    if(multipletest){
        int tc;
        cin>>tc;
        while(tc--)
            solve();
    }
    else
        solve();


    return 0;
}

