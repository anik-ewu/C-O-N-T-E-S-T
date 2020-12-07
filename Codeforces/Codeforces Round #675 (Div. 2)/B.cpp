#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1000000007
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              303

int n,m;
int arr[sz][sz];
int cnt(int i, int j){
    int tot=(arr[i][j]+arr[i][m-j+1]+arr[n-i+1][j]+arr[n-i+1][m-j+1]);
    while(tot%4)tot++;
    tot/=4;
    return abs(arr[i][j]-tot)+abs(arr[i][m-j+1]-tot)+abs(arr[n-i+1][j]-tot)+abs(arr[n-i+1][m-j+1]-tot);
}

int cnt2(int i, int j){
    int tot=(arr[i][j]+arr[i][m-j+1]);
    while(tot%2)tot++;
    tot/=2;
    return abs(arr[i][j]-tot)+abs(arr[i][m-j+1]-tot);
}

ll solve(int n, int m){

    ll ans=0;
    for(int i=1; i<=n/2; i++){
        for(int j=1; j<=m/2; j++){
            ans+=cnt(i,j);
        }
    }
    if(n%2){
        for(int i=1; i<=m/2; i++){
            int tot=arr[n/2+1][i]+arr[n/2+1][m-i+1];
            while(tot%2)tot++;
            tot/=2;
            ans+=abs(arr[n/2+1][i]-tot)+abs(arr[n/2+1][m-i+1]-tot);
        }
    }
    if(m%2){
        for(int i=1; i<=n/2; i++){
            int tot=arr[1][m/2+1]+arr[n-i+1][m/2+1];
            while(tot%2)tot++;
            tot/=2;
            ans+=abs(arr[1][m/2+1]-tot)+abs(arr[n-i+1][m/2+1]-tot);
        }
    }
    return ans;
}

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t;

    cin>>t;
    while(t--){
        cin>>n>>m;
        for(i=1; i<=n; i++){
            for(j=1; j<=m; j++){
                cin>>arr[i][j];
            }
        }
        cout<<solve(n,m)<<endl;
    }
    return 0;
}

