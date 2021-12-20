#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)    freopen("in.txt","r",stdin);
#define what_is(x) cerr<<#x<<" is "<<x<<"\n";
#define Fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

int arr[N];
int cum1[N];
int brr[N];
int cum2[N];

int main(){

    Fast;
    int a, b,c, t, n , m;

    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1; i<=n; i++)cin>>arr[i];
        for(int i=1; i<=n; i++)cin>>brr[i];

        ll sum=0;
        for(int i=1; i<=n; i++){
            sum+=arr[i];
            cum1[i]=sum;
        }
        sum=0;
        for(int i=1; i<=n; i++){
            sum+=brr[i];
            cum2[i]=sum;
        }

        int ans=INT_MAX;

        for(int i=1; i<=n; i++){
            a=cum1[n]-cum1[i];
            b=cum2[i-1];

            c=max(a ,b);
            ans=min(ans, c);
        }
        cout<<ans<<endl;



    }



    return 0;
}
