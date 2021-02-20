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
double arr[1001];

double solve(int n){

    double ans=0;
    double m=n;
    for(double i=1; i<=n ;i++){
        ans+=(m/i);
    }
    return ans;
}

int main(){
    Fast;///using Fast I/O
    int a,b,c, i,j,k, t,n,m;

    cin>>t;
    while(t--){
        cin>>n;
        cout<<fixed;
        cout<<setprecision(2)<<solve(n)<<endl;

    }








    return 0;
}

