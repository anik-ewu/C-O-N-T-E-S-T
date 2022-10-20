#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 4e5+5;

int arr[N];
int main(){

    Fast;

    int a, b, t=1, n , m, caseCounter = 1;
    cin>>t;
    while(t--){

         cin>>n;
         for(int i=1; i<=n; i++) {
            cin>>arr[i];
         }

         ll sumsOfHappySubarrays = 0;

         for(int i=1; i<=n; i++) {
            ll prefixSum = 0;
            for(int j=i; j<=n; j++){
                prefixSum += arr[j];
                if(prefixSum < 0)
                    break;

                sumsOfHappySubarrays += prefixSum;
            }
         }

         cout<<"Case #"<<caseCounter++<<": "<<sumsOfHappySubarrays<<endl;
    }

    return 0;
}

