#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1e9+7
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              3000005

int n;
int arr[105];
int ans[105];

void solve(int i, int j, int d){
    if(i>n ||i<1 || j>n || j<1 || i>j)return ;
    int mx=0, idx=0;
    for(int k=i; k<=j; k++){
        if(mx<arr[k]){
            mx=arr[k];
            idx=k;
        }
    }
    ans[idx]=d;
    solve(i,idx-1, d+1);
    solve(idx+1,j, d+1);
}

void solve(){

    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>arr[i];
    solve(1,n,0);
    for(int i=1; i<=n; i++)
        cout<<ans[i]<<' ';
    cout<<endl;
}

int main(){
    Fast;///using Fast I/O

    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdout);

    int multitest=1;
    if(multitest){
        int tc;
        cin>>tc;
        while(tc--)
            solve();
    }
    else
        solve();

    return 0;
}

