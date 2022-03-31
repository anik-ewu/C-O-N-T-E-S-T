#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 3e3+5;
int pre[N][3];

int main(){

    int a, b, t=1, n , m;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>s;

        bool flag = false;
        memset(pre, 0, sizeof(pre));

        for(int i = 0; i<n; i++) {
            if(s[i]=='+') pre[i][0]++;
            else if(s[i]=='-') pre[i][1]++;

            if(s[i]=='-' and flag) {
                flag = false;
                pre[i][2]++;
            }
            else if(s[i]=='-') {
                flag = true;
            }
            else {
                flag = false;
            }

            if(i) {
                pre[i][0] += pre[i-1][0];
                pre[i][1] += pre[i-1][1];
                pre[i][2] += pre[i-1][2];
            }

        }

        int res = 0;
        for(int i=0; i<n; i++) {
            for(int j = i+1; j<n; j++) {

                int plusCnt = pre[j][0];
                int minusCnt = pre[j][1];
                int minusMinusCnt = pre[j][2];

                if(i) {
                    plusCnt -= pre[i-1][0];
                    minusCnt -= pre[i-1][1];
                    minusMinusCnt -= pre[i-1][2];
                }

                if(plusCnt > minusCnt)
                    continue;

                if(plusCnt == minusCnt) {
                    res++;
                } else {

                    minusCnt -= minusMinusCnt*2;

                    if(minusCnt >= plusCnt) {

                        minusCnt -= plusCnt;

                        if(minusCnt > minusMinusCnt)
                            continue;

                        minusMinusCnt -= minusCnt;
                        if(minusMinusCnt%3 == 0)
                            res++;

                    } else {

                        plusCnt -= minusCnt;

                        if(minusMinusCnt*2< plusCnt)
                            continue;

                        minusMinusCnt -= (plusCnt/2);

                        if(plusCnt%2 and (minusMinusCnt*2)%3==1)
                            res++;
                        else if(!plusCnt%2 and (minusMinusCnt*2)%3 == 0)
                            res++;

                    }

                }
            }
        }
        cout<<res<<endl;

    }

    return 0;
}
