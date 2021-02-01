#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1000000007
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              15

char arr[sz][sz];

int cal(int n ,int m){
    int x=0, y=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if((i+j)%2==0 && arr[i][j]!='*')x++;
            if((i+j)%2==1 && arr[i][j]!='.')x++;

            if((i+j)%2==0 && arr[i][j]!='.')y++;
            if((i+j)%2==1 && arr[i][j]!='*')y++;
        }
    }
    n=n*m;
    if(n%2==0)return min(x, y);
    return x;
}

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    cin>>t;
    while(t--){
        cin>>n>>m;
        for(i=1; i<=n; i++){
            for(j=1; j<=m; j++){
                cin>>arr[i][j];
            }
        }
        cout<<cal(n, m)<<endl;
    }

    return 0;
}

