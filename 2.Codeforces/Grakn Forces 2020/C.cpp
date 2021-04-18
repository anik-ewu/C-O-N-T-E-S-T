///Binary Search


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

double arr[sz];
int n, L;

bool check(double x){

    double curr=0, ll=0, rr;

    for(int i=1; i<=n+1; i++){
        double dis=arr[i]-ll;
        double v=i;
        double tt=dis/v;

        if(curr+tt<=x){
            curr+=tt;
            ll=arr[i];
        }
        else{
            ll+=(x-curr)*v;
            break;
        }
    }
    curr=0, rr=L;
    for(int i=n; i>=0; i--){
        double dis=rr-arr[i];
        double v=n-i+1;
        double tt=dis/v;
        if(curr + tt<=x){
            rr=arr[i];
            curr+=tt;
        }
        else{
            rr-=(x-curr)*v;
            break;
        }
    }
    return ll>=rr;
}

int main(){

    int t;
    cin>>t;
    while(t--){
        cin>>n>>L;
        for(int i=1; i<=n; i++) cin>>arr[i];
        arr[0]=0, arr[n+1]=L;

        double lo=0, hi=L;
        for(int i=1; i<=100; i++){
            double mid=(lo+hi)/2.0;
            if(check(mid))  hi=mid;
            else            lo=mid;
        }
        cout<<setprecision(10)<<fixed<<hi<<endl;
    }
    return 0;
}

