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

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        string s;
        cin>>n>>s;

        ll zeros = (s[0]=='0');
        ll ones = (s[0]=='1');
        ll maxFreq = 0;
        ll tempFreq = 1;

        for(int i=1; i<n; i++) {
            if(s[i]==s[i-1]) {
                tempFreq++;
            } else {
                maxFreq = max(maxFreq, tempFreq);
                tempFreq = 1;
            }
            zeros += (s[i]=='0');
            ones += (s[i]=='1');

        }
        maxFreq = max(maxFreq, tempFreq);

        ll res=0;
        res = max(res, maxFreq*maxFreq);
        res = max(res, zeros*ones);

        cout<<res<<endl;
    }

    return 0;
}
