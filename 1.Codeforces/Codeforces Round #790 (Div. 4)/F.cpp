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

    Fast;

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        cin>>n>>m;
        for(int i = 1; i<=n; i++) cin>>arr[i];

        sort(arr+1, arr+n+1);
        reverse(arr+1, arr+n+1);

        ll sum = 0;
        vector < ll > v;
        for(int i = 1; i<=n; i++) {
            sum+=arr[i];
            v.push_back(sum);
        }
        int k;
        while(m--) {
            cin>>k;
            if(k>sum){
                cout<<-1<<endl;
            }
            else{
                int index = upper_bound(v.begin(), v.end(), k)-v.begin();
                if(index and v[index-1]>=k)index--;
                index++;
                cout<<index<<endl;
            }
        }
    }

    return 0;
}
