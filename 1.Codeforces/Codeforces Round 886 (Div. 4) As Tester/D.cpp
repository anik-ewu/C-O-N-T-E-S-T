#include<bits/stdc++.h>
using namespace std;
#define Fast    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 2e5+5;

int arr[N];

int main(){

    int a, b, t=1, n , k;
    cin>>t;
    while(t--){

        cin>>n>>k;
        for (int i = 1; i <= n; i++) {
            cin>>arr[i];
        }

        long long res = 0;

        for (int i = 1; i <= n; i++) {
            int sum = arr[i] + arr[i - 1];
            if (sum > k) {
                int subtract = sum - k;
                res += subtract;

                if (subtract <= arr[i]) {
                    arr[i] -= subtract;
                }
                else {
                    subtract -= arr[i];
                    arr[i] = 0;
                    arr[i - 1] -= subtract;
                }
            }
        }

        cout<<res<<endl;
    }

    return 0;
}
