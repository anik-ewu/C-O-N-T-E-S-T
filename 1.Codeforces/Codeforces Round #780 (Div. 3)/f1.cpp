#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 3e3+5;
int pre[N][2];

int main(){

    int a, b, t=1, n , m;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>s;

        bool flag = false;
        memset(pre, 0, sizeof(pre));

        for(int i = 0; i<n; i++) {
            pre[i][0] = (s[i]=='+');
            pre[i][1] = (s[i]=='-');

            if(i) {
                pre[i][0] += pre[i-1][0];
                pre[i][1] += pre[i-1][1];
            }
        }

        int res = 0;
        for(int i=0; i<n; i++) {
            for(int j = i+1; j<n; j++) {

                int plusCnt = pre[j][0];
                int minusCnt = pre[j][1];
                if(i) {
                    plusCnt -= pre[i-1][0];
                    minusCnt -= pre[i-1][1];
                }

                if(plusCnt <= minusCnt && (minusCnt-plusCnt)%3==0)
                    res++;
            }
        }
        cout<<res<<endl;

    }

    return 0;
}
