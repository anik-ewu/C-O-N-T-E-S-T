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

        int res = 0;
        int mark[26];
        memset(mark, 0, sizeof(mark));

        for (int i = 0; i < n; i++) {
            mark[s[i]-'a']++;
            if (mark[s[i]-'a'] == 1) {
                res++;
            }
        }
        set<char>st;
        int left = 0;
        int right = res;
        for (int i = 0; i < n; i++) {
            if (mark[s[i]-'a'] == 1) {
                right--;
            }
            mark[s[i]-'a']--;
            st.insert(s[i]);

            left = st.size();
            res = max(res, left + right);
        }

        cout<<res<<endl;

    }

    return 0;
}
