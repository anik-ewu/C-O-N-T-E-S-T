#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1000000007
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              10005

int arr[sz];
int brr[sz];
int crr[sz];


int encodeInteger(int x, int m){
    int n = 1<<(1<<(1<<(1<<1)));
    x = x | n;
    return x;
}

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m,cs=1;

    cin>>t;
    while(t--){
        cin>>n;
        for(i=1; i<=n; i++){
            cin>>arr[i];
        }
        cout<<"Case "<<cs++<<":"<<endl;
        for(i=1; i<=n; i++){
            int val=(arr[i]&65535);
            cout<<val<<' ';
        }
        cout<<endl;
        for(i=1; i<=n; i++){
            int val=(arr[i]>>16);
            cout<<val<<' ';
        }
        cout<<endl;
    }

    return 0;
}

