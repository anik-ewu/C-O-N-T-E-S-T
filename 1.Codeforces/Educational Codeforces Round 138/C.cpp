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

    int a, b, t=1, n , m, k;
    cin>>t;
    while(t--){

        cin>>n;
        int arr[n+2];
        for(int i=1; i<=n; i++) {
            cin>>arr[i];
        }

        sort(arr+1, arr+n+1);

        int res = 0;
        for(int i=n; i>=1; i--) {

            int brr[n+2];
            for(int j=1; j<=n; j++)
                brr[j] = arr[j];

            k = i;
            bool flag = true;

            for(int j=1; j<=i; j++) {
                int tempMax = 0;
                int index = 0;

                for(int l=1; l<=n; l++) {
                    if(brr[l] ==INT_MAX)
                        continue;
                    if(brr[l] <= k-j+1 and brr[l] > tempMax) {
                        tempMax = brr[l];
                        index = l;
                    }
                }
                brr[index] = INT_MAX;

                int tempMin = INT_MAX;
                for(int l=1; l<=n; l++) {
                    if(brr[l] ==INT_MAX)
                        continue;

                    if(brr[l] <= k-j and brr[l] < tempMin) {
                        tempMin = brr[l];
                        index = l;
                    }
                }
                brr[index] = INT_MAX;

                if(tempMax == 0) {
                    flag = false;
                    break;
                }
            }
            if(flag) {
                res = i;
                break;
            }

        }

        cout<<res<<endl;


    }

    return 0;
}
