#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1000000007
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              3000005

struct bird{
    int x, y, f, r;
}arr[101];

struct leaf{
    int x, y, tot;
}brr[401];


int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    cin>>t;
    while(t--){
        cin>>n>>m;
        for(i=1; i<=n; i++){
            cin>>arr[i].x;
            cin>>arr[i].y;
            cin>>arr[i].f;
            cin>>arr[i].r;
        }
        for(i=1; i<=m; i++){
            cin>>brr[i].x;
            cin>>brr[i].y;
            cin>>brr[i].tot;
        }

        bool success=true;
        for(i=1; i<=n; i++){
            for(j=1; j<=m; j++){
                int dis=((arr[i].x-brr[j].x)*(arr[i].x-brr[j].x))+((arr[i].y-brr[j].y)*(arr[i].y-brr[j].y));
                if(dis<=(arr[i].r*arr[i].r)){
                    arr[i].f+=brr[j].tot;

                }
            }
        }
        for(i=1; i<=n; i++){
            cout<<arr[i].f<<' ';
        }
        cout<<endl;
    }

    return 0;
}

