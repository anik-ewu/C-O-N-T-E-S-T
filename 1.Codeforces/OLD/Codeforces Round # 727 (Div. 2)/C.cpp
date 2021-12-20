#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)    freopen("in.txt","r",stdin);
#define what_is(x) cerr<<#x<<" is "<<x<<"\n";
#define Fast       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

int arr[101][101];

int main(){

    int a, b, t, n , m;
    cin>>t;
    while(t--){
        cin>>n;
        if(n==2){
            cout<<-1<<endl;
            continue;
        }
        int mx=n*n;
        int odd=1;
        int even=2;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(odd<=mx){
                    arr[i][j]=odd;
                    odd+=2;
                }
                else{
                    arr[i][j]=even;
                    even+=2;
                }
            }
        }
        for(int i=1;i<=n; i++){
            for(int j=1; j<=n; j++){
                cout<<arr[i][j]<<' ';
            }
            cout<<endl;
        }

    }



    return 0;
}
