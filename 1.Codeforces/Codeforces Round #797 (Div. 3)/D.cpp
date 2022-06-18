#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 2e5+5;

int arr[N];

int main(){

    int a, b, t=1, n , m, k;
    cin>>t;
    while(t--){

        string s;
        cin>>n>>k>>s;
        for(int i=1; i<=n; i++){
            arr[i] = arr[i-1];
            arr[i] += s[i-1]=='W';
        }

        int res = INT_MAX;
        for(int i=k; i<=n; i++){
            res = min(res, arr[i]-arr[i-k]);
        }
        cout<<res<<endl;
    }
    return 0;
}
