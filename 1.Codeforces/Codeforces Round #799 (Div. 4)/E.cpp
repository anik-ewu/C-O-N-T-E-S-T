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

    int a, b, t=1, n , m, s;
    cin>>t;
    while(t--){
        cin>>n>>s;

        int sum = 0;
        for(int i=1; i<=n; i++){
            cin>>arr[i];
            sum+=arr[i];
        }

        if(sum < s) {
            cout<<-1<<endl;
            continue;
        }

        sum = 0;
        int j = 1;
        int res = 0;
        for(int i=1; i<=n; i++){
            sum += arr[i];

            while(sum>s)
                sum-=arr[j++];

            res = max(res, i-j+1);
        }

        cout<<n-res<<endl;



    }

    return 0;
}
