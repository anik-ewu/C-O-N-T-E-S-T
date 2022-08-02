#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e3+5;

char arr[N][N];

int main(){

    int a, b, t=1, n , m;

    cin>>n;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            cin>>arr[i][j];
        }
    }

    bool flag = true;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(i==j) { continue; }
            if(arr[i][j] == 'W' and arr[j][i] != 'L') flag = false;
            if(arr[i][j] == 'L' and arr[j][i] != 'W') flag = false;
            if(arr[i][j] == 'D' and arr[j][i] != 'D') flag = false;
        }
    }



    if(!flag) {
        cout<<"incorrect"<<endl;
    } else {
        cout<<"correct"<<endl;
    }


    return 0;
}
