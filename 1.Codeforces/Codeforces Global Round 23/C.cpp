#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

int main(){

    Fast;

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n+2];

        for(int i=1; i<=n; i++) {
            cin>>arr[i];
        }

        int i = n;
        int cnt = 0;
        int movesNo = 1;
        vector<int>res;

        while(i > 1) {
            while(arr[i] < arr[i-1]) {
                arr[i]+= movesNo;
                res.push_back(i);
                cnt++;
                movesNo++;
            }
            i--;
        }

        while(cnt < n){
            res.push_back(1);
            cnt++;
        }

        for(int i=0; i<n; i++) {
            cout<<res[i]<<' ';
        }
        cout<<endl;
    }

    return 0;
}
