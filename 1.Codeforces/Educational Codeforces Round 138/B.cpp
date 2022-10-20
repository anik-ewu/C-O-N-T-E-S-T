#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N=2e5+5;

ll arr[N];
ll brr[N];

int main(){

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        cin>>n;
        for(int i=1; i<=n; i++)
            cin>>arr[i];
        for(int i=1; i<=n; i++)
            cin>>brr[i];

        int l = 1;
        int r = n;
        ll totalTimeNeeded = 0;
        while(l<=r) {
            if(brr[l] <= brr[r]) {
               totalTimeNeeded += arr[l];
               arr[l+1] += brr[l];
               l++;
            } else {
                totalTimeNeeded += arr[r];
                arr[r-1] += brr[r];
                r--;
            }
        }


        cout<<totalTimeNeeded<<endl;


    }

    return 0;
}
