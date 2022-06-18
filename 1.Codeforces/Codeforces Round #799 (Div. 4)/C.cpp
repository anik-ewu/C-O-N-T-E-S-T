#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

char arr[10][10];

int main(){

    int a, b, t=1, n , m;
    cin>>t;
    while(t--){

        for(int i=1; i<=8; i++){
            for(int j=1; j<=8; j++){
                cin>>arr[i][j];
            }
        }

        for(int i=2; i<=7; i++){
            for(int j=2; j<=7; j++){
                if(arr[i-1][j-1]=='#' and arr[i-1][j+1]=='#' and arr[i+1][j-1]=='#' and arr[i+1][j+1]=='#') {
                    cout<<i<<' '<<j<<endl;
                }
            }
        }
    }

    return 0;
}
