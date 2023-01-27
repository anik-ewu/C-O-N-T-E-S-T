#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 2e5+5;

ll arr[N];

bool check(ll c, ll d, ll n, ll mid) {

    ll idx = 1;
    ll cnt = 0;
    ll sum = 0;
    for(int i=1; i<=d; i++) {
        if(cnt > mid) {
            cnt = 0;
            idx = 1;
        }
        if(idx <=n ) {
            sum += arr[idx];
        }
        cnt++;
        idx++;
    }

    return sum>=c;
}

int main(){

    Fast;

    ll a, b, t=1, n , m, c, d;
    cin>>t;

    while(t--){

        cin>>n>>c>>d;
        for(int i=1; i<=n; i++) {
            cin>>arr[i];
        }
        sort(arr+1, arr+n+1);
        reverse(arr+1, arr+n+1);


        ///Impossible

        bool impossible = false;
        ll mxVal = arr[1];

        if(mxVal * 1LL * d < c) {
            impossible = true;
        }

        ///Infinity

        bool infinity = false;
        ll mxSum = 0;
        for(int i=1; i<=min(d, n); i++) {
            mxSum += arr[i];
        }
        if(mxSum >= c) {
            infinity = true;
        }


        ///Binary Search

        ll lo = 0;
        ll hi = d;
        ll res = 0;

        while(lo <= hi) {
            int mid = (lo+hi)/2;
            if(check(c, d, n, mid)) {
                res = mid;
                lo = mid+1;
            } else {
                hi = mid-1;
            }
        }
        if(impossible) {
            cout<<"Impossible"<<endl;
        } else if(infinity) {
            cout<<"Infinity"<<endl;
        } else {
            cout<<res<<endl;
        }


    }

    return 0;
}
