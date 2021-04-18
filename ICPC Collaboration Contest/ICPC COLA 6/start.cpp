#include<bits/stdc++.h>
using namespace std;


#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N=200005;
int arr[N], brr[N];

int main(){

    Fast;
    int t, n, k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=1; i<=n; i++)cin>>arr[i];
        for(int i=1; i<=n; i++)cin>>brr[i];

        sort(arr+1, arr+n+1);
        sort(brr+1, brr+n+1);

        int i=1, j=n, cnt=0;

        while(i<=n and j<=n and i>=1 and j>=1){
            if(arr[i]+brr[j]>=k){
                cnt++;
                i++;j--;
            }
            else{
                i++;
            }
        }

        cout<<cnt<<endl;

    }

    return 0;
}
