
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
ll arr[3005];

int main(){

    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int t, n;
    cin>>t;

    while(t--) {
        cin>>n;
        for(int i = 1; i <= n; i++) {
            cin>>arr[i];
        }

        int mid, l, r, k, currDiff = 1;
        ll sum = 0;
        while(currDiff+2<=n){

            l = 1;
            mid = l+(currDiff+1)/2;
            r = l+currDiff+1;

            while(r<=n){
                ll a = (arr[l]-arr[mid])*1LL*(arr[mid]-arr[r]);
                ll b = 0;
                if(currDiff%2 == 0){
                    b = (arr[l]-arr[mid+1])*1LL*(arr[mid+1]-arr[r]);
                }
                l++;
                r++;
                mid++;
                sum +=  max(a, b);
            }
            currDiff++;
        }

        cout<<sum<<endl;
    }

    return 0;
}
