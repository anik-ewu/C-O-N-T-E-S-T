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

    int a, b, c, t=1, n , m;
    cin>>t;
    while(t--){

        vector<int>arr(3, 0);
        for (int i = 0; i < 3; i++) {
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end());
        bool flag = false;
        
        a = arr[0];
        b = arr[1];
        c = arr[2];
        
        if (a == b && b == c) {
            flag = true;
        }
        else {
            if (a == b && (a * 2 == c || a * 3 == c ||  a * 4 == c)) {
                flag = true;
            }
            else if(a * 2 == b && (a * 2 == c || a * 3 == c)) {
                flag = true;
            }
            else if (b == c && a * 2 == b) {
                flag = true;
            }
        }

        cout<<(flag?"YES" : "NO")<<endl;
    }

    return 0;
}
