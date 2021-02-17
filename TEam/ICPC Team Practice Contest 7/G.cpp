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

int arr[105][105];

void solve(){

    int a,b, n,m, i,j;
    queue< pair< int  , int  > > q;
    for(i=1; i<=10; i++){
        for(j=1; j<=10; j++){
            q.push({i,j});
        }
    }
    ///cin>>n>>m;
    while(!q.empty()){
        n=q.front().first;
        m=q.front().second;
        q.pop();
    memset(arr, 0, sizeof(arr));
    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            
            for(int k=1; k<=n; k++){
                for(int l=1; l<=m; l++){
                    if(k%i==0 && l%j==0){
                        arr[k][l]=1-arr[k][l];
                    }
                }
            }
        }
    }
    int cnt=0;
    cout<<endl;
    cout<<n<<' '<<m<<" : ";
    for(int k=1; k<=n; k++){
        for(int l=1; l<=m; l++){
            //cout<<arr[k][l]<<' ';
            cnt+=arr[k][l];
        }
        ///cout<<endl;
    }

    cout<<cnt<<endl;
 }

}

int main(){
    Fast;///using Fast I/O

    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    
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

