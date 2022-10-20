#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

int X[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int Y[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

int main(){

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        cin>>n>>m;
        int row = 1;
        int col = 1;
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=m; j++) {
                bool flag = true;
                for(int k=0; k<8; k++) {
                    int xx = i+X[k];
                    int yy = j+Y[k];
                    if(xx>=1 and xx<=n and yy>=1 and yy<=m) {
                        flag = false;
                        break;
                    }
                }
                if(flag) {
                    row = i;
                    col = j;
                    break;
                }
            }
        }

        cout<<row<<' '<<col<<endl;

    }

    return 0;
}
