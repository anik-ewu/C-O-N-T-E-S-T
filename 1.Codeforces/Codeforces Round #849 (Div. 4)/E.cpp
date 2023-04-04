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

int main(){

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){
        cin>>n;
        for (int i = 1; i <= n; i++) {
            cin>>arr[i];
        }

        ll sum =  0; 
        bool zeroExist = false;
        int countNegative = 0;
        ll mn = INT_MAX;

        for (int i = 1; i <= n; i++) {
            if (arr[i] == 0) {
                zeroExist = true;
            }
            countNegative += (arr[i] < 0);
            mn = min(mn, abs(arr[i]));
            sum += abs(arr[i]);
        }

        if (zeroExist || countNegative%2 == 0) {
            cout<<sum<<endl;
        }
        else {
            cout<<sum - mn - mn<<endl;
        }


    }

    return 0;
}
