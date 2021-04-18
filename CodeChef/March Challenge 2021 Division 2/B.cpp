#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll                inf = 1e9;

#define all(x)          (x).begin(), (x).end()
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int               mod=1e9+7;
const int               sz =2e5+5;

int arr[sz];

ll f(int n){
    ll sum=0;
    sort(arr+1, arr+n+1);
    for(int i=1; i<=n; i++){
        if(arr[i]>i){
            return 2;///false 
        }
        sum+=(i-arr[i]);
    }
    return sum;
}

void solve(){

    int a,b, n,m, i,j;
    cin>>n;
    for(i=1; i<=n; i++){
       cin>>arr[i]; 
    }
    ll x=f(n);
    (x%2)?cout<<"First"<<endl:cout<<"Second"<<endl; 

}

int main(){
    
    Fast;   
    read(x); write(x);

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

