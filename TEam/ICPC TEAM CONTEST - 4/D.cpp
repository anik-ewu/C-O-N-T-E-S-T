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

int n;
int arr[sz];

bool check(ll st){
    for(int i=1; i<=n; i++){
        ll need=(arr[i]-st);
        if(i<n && need+st>arr[i+1])return false;
        if(need<0)return false;
        st=need;

    }
    return true;
}

int get_lo(int mx){

    int hi=mx;
    int lo=0;
    while(hi-lo>=2){
        int mid=(lo+hi)/2;
        if(check(mid)){
            hi=mid;
        }
        else{
            lo=mid+1;
        }
    }
    if(check(hi-1))hi--;
    if(check(hi-1))hi--;
    if(check(hi-1))hi--;
    return hi;
}

int get_hi(int lo , int mx){

    int hi=mx;
    while(hi-lo>=2){
        int mid=(lo+hi)/2;
        if(check(mid)){
            lo=mid;
        }
        else{
            hi=mid-1;
        }
    }
    if(check(lo+1))lo++;
    if(check(lo+1))lo++;
    if(check(lo+1))lo++;
    return lo;
}

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,m;

    cin>>n;
    for(i=1; i<=n; i++){
        cin>>arr[i];
    }

    a=get_lo(arr[1]);
    a=max(a,0);
    b=get_hi(a,arr[1]);
    b=min(b, arr[1]);
    if(check(b)==false){
        cout<<0<<endl;
        return 0;
    }
    cout<<a<<' '<<b<<endl;
    int ans=b-a;
    ans++;
    if(check(a)==false)ans--;


    cout<<ans<<endl;

    return 0;
}
