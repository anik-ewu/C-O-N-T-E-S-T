#include<bits/stdc++.h>
using namespace std;
typedef long long   ll;
const ll            inf = 1e13;
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
        int cnt = 0;
        for(int i=0; i<n-1; i++) {
            if(s[i]=='1' and i>0 and s[i-1]=='0' and s[i+1]=='0'){
                cnt++;
                continue;
            }
            if(s[i]=='0' and s[i+1]=='0')
                cnt+=2;

        }
        cout<<cnt<<endl;
    }

    return 0;
}
