#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll                inf = 1e9;

#define all(x)          (x).begin(), (x).end()
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int               mod=1e9+7;
const int               sz =550;

int n;
int arr[sz];
int brr[sz];
int dp[502][10001];

int f(int pos, int k){
    if(pos>n || k<=0){
        return 0;
    }
    if(dp[pos][k]!=-1)return dp[pos][k];

    int a=0, b=0;
    int mx=max(arr[pos], brr[pos]);
    if(k>=mx){
        a=f(pos+1, k-brr[pos])+1;
    }
    b=f(pos+1, k);

    return dp[pos][k]=max(a, b);
}

void path(int pos, int k, int res){
    if(pos>n || !res)
        return ;

    if(f(pos+1, k-brr[pos])==res-1){
        res--;
        cout<<pos<<' ';
        path(pos+1, k-brr[pos], res);
        return;
    }
    else{
        path(pos+1, k, res);
    }

}

int main(){
    
    Fast;   
    read(x); write(x);

    int k;
    cin>>n>>k;

    for(int i=1; i<=n; i++){
        cin>>arr[i];
        cin>>brr[i];
    }
    memset(dp, -1, sizeof(dp));

    int res=f(1, k);

    cout<<res<<endl;
    path(1,k, res);

    return 0;
}

