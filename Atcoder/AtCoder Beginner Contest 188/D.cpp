#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1000000007
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              200005

struct st{
    ll a, b, sum;
}arr[sz];

bool cmp(st a , st b){
    if(a.sum!=b.sum)return (a.sum>b.sum);
    return a.a>b.a;
}

bool check(int m, int n){

    ll a=0;
    ll b=0;

    for(int i=1; i<=m; i++){
        a+=arr[i].sum;
    }

    for(int i=m+1; i<=n; i++){
        b+=arr[i].a;
    }
    return a>b;
}

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    cin>>n;
    for(i=1; i<=n; i++){
        cin>>arr[i].a;
        cin>>arr[i].b;
        arr[i].sum=(arr[i].a+arr[i].b);
    }
    sort(arr+1, arr+n+1, cmp);

    int lo=1;
    int hi=n;

    while(hi-lo > 2){
        int mid=(hi+lo)/2;
        if(check(mid, n)){
            hi=mid;
        }
        else{
            lo=mid+1;
        }
    }
    while(check(hi-1, n))hi--;
    cout<<hi<<endl;








    return 0;
}

