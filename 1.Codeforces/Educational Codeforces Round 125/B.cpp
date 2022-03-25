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

    int a, b, t=1, n, x, y;
    cin>>t;
    while(t--){
        arr[0] = 0;
        cin>>n>>b>>x>>y;
        for(int i = 1; i <= n; i++) {
            int add = arr[i-1]+x;
            int sub = arr[i-1]-y;
            if(add <= b) arr[i] = add;
            else arr[i] = sub;
        }

        ll sum = 0;
        for(int i = 1; i <= n; i++) {
            sum += arr[i];
        }
        cout<<sum<<endl;
    }

    return 0;
}
