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

    string s;
    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        cin>>n;
        cin>>s;

        ll total = 0;
        int arr[n+2];
        for(int i=1; i<=n; i++) {
            cin>>arr[i];
            total += arr[i];
        }
        for(int i=0; i<n; i++) {
            if(s[i] == '0') {
                int j = i+1;
                int minValue = arr[i+1];
                while(j<n and s[j] == '1') {
                    minValue = min(minValue, arr[j+1]);
                    j++;
                }
                i = j-1;
                total -= minValue;
            }
        }


        cout<<total<<endl;
    }

    return 0;
}
