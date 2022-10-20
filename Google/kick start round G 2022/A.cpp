#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e3+5;

int johnSteps[N];
int maxSteps[N];

int main(){

    Fast;

    int a, b, t=1, n , m, p, caseCounter = 1;
    cin>>t;
    while(t--){

        cin>>m>>n>>p;
        memset(maxSteps, 0, sizeof(maxSteps));
        for(int i=1; i<=m; i++) {
            for(int j=1; j<=n; j++) {
                cin>>a;
                if(i!=p)
                    maxSteps[j] = max(maxSteps[j], a);
                else
                    johnSteps[j] = a;

            }
        }

        int additionalSteps = 0;
        for(int i=1; i<=n; i++) {
            additionalSteps += max(0, maxSteps[i] - johnSteps[i]);
        }
        cout<<"Case #"<<caseCounter++<<": "<<additionalSteps<<endl;
    }

    return 0;
}
