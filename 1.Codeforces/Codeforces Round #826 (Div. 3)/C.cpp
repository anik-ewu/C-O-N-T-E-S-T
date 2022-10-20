#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 2005;

int arr[N];
int cumSum[N];

int main(){

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1; i<=n; i++) {
            cin>>arr[i];
            cumSum[i] = cumSum[i-1]+arr[i];
        }

        int res = n;

        for(int i=1; i<=n; i++) {

            int targetValue = cumSum[i];
            int j = i+1;
            int tempMin = i;
            int sum = 0;
            int cnt = 0;
            while(j <= n) {
                sum+= arr[j];
                cnt++;
                if(sum==targetValue){
                    sum = 0;
                    tempMin = max(tempMin, cnt);
                    cnt = 0;
                }
                if(sum >targetValue) {
                    break;
                }
                j++;
            }
            if(sum==0) {
                res = min(res, tempMin);
            }
        }

        cout<<res<<endl;

    }

    return 0;
}
