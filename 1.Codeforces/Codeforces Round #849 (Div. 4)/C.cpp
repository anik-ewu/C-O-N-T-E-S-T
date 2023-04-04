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
        cin>>n>>s;

        int l = 0;
        int r = n-1;

        while(l<r && s[l] != s[r]) {
            r--;
            l++;
        }
        
        if (l == r) {
            cout<<1<<endl;
        }
        else {
            cout<<r - l + 1<<endl;
        }



    }

    return 0;
}
